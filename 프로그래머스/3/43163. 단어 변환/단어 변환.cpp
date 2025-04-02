#include<bits/stdc++.h>
using namespace std;

string s;
int cnt;
int solution(string begin, string target, vector<string> words) {
    int answer = 0;
    
    bool isExist = false;
    for (string i : words) 
    {
        if (i == target) 
        {
            isExist = true;
            break;
        }
    }
    
    if (!isExist) return 0;
    
    queue<pair<string, int>> q;
    q.push({begin, 0});
    while(q.size())
    {
        tie(s, cnt) = q.front(); q.pop();
        for (int i = 0; i < words.size(); i++) 
        {
            int temp = 0;
            for (int j = 0; j < s.length(); j++)
            {
                if (s[j] != words[i][j]) temp++;
                if (temp > 1) break;
            }
            
            if (temp == 1)
            {
                if (words[i] == target) return cnt + 1;
                else q.push({words[i], cnt + 1});
            }
        }
    }
    
    return answer;
}