#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int checkWord(string str) 
{
    char ch[1] = "";
    int ans = 0;
    for (int i = 0; i < str.length(); i++) 
    {
        cout << str[i] << endl;
        if (str[i] == 'a' && ch[0] != 'a') 
        {
            if (str.substr(i, 3) == "aya") {
                ch[0] = 'a';
                i += 2;
                ans = 1;
            } else return 0;
        }
        else if (str[i] == 'y' && ch[0] != 'y')
        {
            if (str.substr(i, 2) == "ye") {
                ch[0] = 'y';
                i += 1;
                ans = 1;
            } else return 0;
        }
        else if (str[i] == 'w' && ch[0] != 'w')
        {
            if (str.substr(i, 3) == "woo") {
                ch[0] = 'w';
                i += 2;
                ans = 1;
            } else return 0;
        }
        else if (str[i] == 'm' && ch[0] != 'm')
        {
            if (str.substr(i, 2) == "ma") {
                ch[0] = 'm';
                i += 1;
                ans = 1;
            } else return 0;
        }
        else return 0;
    }
    
    return ans;
}

vector<string> says = { "aya", "ye", "woo", "ma" };
int solution(vector<string> babbling) {
    int answer = 0;
    
    for (string i : babbling) answer += checkWord(i);
    
    return answer;
}