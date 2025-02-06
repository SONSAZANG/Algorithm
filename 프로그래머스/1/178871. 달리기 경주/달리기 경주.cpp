#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

map<int, string> rankMap;
map<string, int> reMap;
vector<string> solution(vector<string> players, vector<string> callings) {
    vector<string> answer;

    int num = 1;
    for (string i : players) 
    {
        rankMap[num] = i;
        reMap[i] = num;
        num++;
    }
    
    for (string i : callings) 
    {
        int rank = reMap[i];
        int frontRank = rank - 1;
        
        string temp = "";
        temp += rankMap[frontRank];
        rankMap[frontRank] = rankMap[rank];
        rankMap[rank] = temp;
        
        reMap[temp] = rank;
        reMap[rankMap[frontRank]] = frontRank;
    }
    
    for (auto i : rankMap) answer.push_back(i.second);
    
    return answer;
}