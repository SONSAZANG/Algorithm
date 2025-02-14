#include <string>
#include <vector>
#include <iostream>
using namespace std;

vector<int> yellowFac;
int x, y;
vector<int> solution(int brown, int yellow) {
    vector<int> answer;
    for (int i = 1; i <= yellow; i++) 
    {
        if (yellow % i == 0) 
        {
            yellowFac.push_back(i);    
        }
    }
    
    if (yellowFac.size() % 2 == 0) 
    {
        int xCnt = yellowFac.size() / 2;
        int yCnt = (yellowFac.size() / 2) - 1;
        x = (yellowFac[xCnt]);
        y = (yellowFac[yCnt]);
        
        int b = (brown - 4) / 2;
        
        while (b != x + y) 
        {
            xCnt += 1;
            yCnt -= 1;
            x = (yellowFac[xCnt]);
            y = (yellowFac[yCnt]);
        }
            
    }
    else 
    {
        x = (yellowFac[yellowFac.size() / 2]);
        y = (yellowFac[yellowFac.size() / 2]);
    }
    
    answer.push_back(x + 2);
    answer.push_back(y + 2);
    
    return answer;
}