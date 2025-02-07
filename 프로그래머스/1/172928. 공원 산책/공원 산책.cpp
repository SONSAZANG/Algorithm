#include <string>
#include <vector>

using namespace std;

vector<vector<char>> parkV;
vector<int> solution(vector<string> park, vector<string> routes) {
    vector<int> answer;
    int posX = 0;
    int posY = 0;
    int maxX = 0;
    int maxY = 0;
    for (int i = 0; i < park.size(); i++) 
    {
        vector<char> a;
        parkV.push_back(a);
        for (int j = 0; j < park[i].length(); j++)
        {
            parkV[i].push_back(park[i][j]); 
            if (parkV[i][j] == 'S')
            {
                posX = j;
                posY = i;
            }
        }    
    }
    maxX = park[0].length() - 1;
    maxY = park.size() - 1;
    int sum = 0;
    for (string i : routes) 
    {
        string op = "";
        op = i.substr(0, 1);
        int n = (stoi)(i.substr(2, 1));
        bool isBreak = false;
        if(op == "S") 
        {
            sum = posY + n;
            if (sum > maxY) isBreak = true;
            else for (int i = posY; i <= sum; i++) if (parkV[i][posX] == 'X') isBreak = true;  
            posY = isBreak ? posY : sum;
        }
        else if (op == "N")
        {
            sum = posY - n;
            if (sum < 0) isBreak = true;
            else for (int i = posY; i >= sum; i--) if (parkV[i][posX] == 'X') isBreak = true;  
            posY = isBreak ? posY : sum;
        }
        else if (op == "W")
        {
            sum = posX - n;
            if (sum < 0) isBreak = true;
            else for (int i = posX; i >= sum; i--) if (parkV[posY][i] == 'X') isBreak = true;
            posX = isBreak ? posX : sum;
        }
        else if (op == "E")
        {
            sum = posX + n;
            if (sum > maxX) isBreak = true;
            else for (int i = posX; i <= sum; i++) if (parkV[posY][i] == 'X') isBreak = true;
            posX = isBreak ? posX : sum;
        }
    }
    answer.push_back(posY);
    answer.push_back(posX);
    return answer;
}