#include <string>
#include <vector>
#include <map>
#include <set>
using namespace std;

map<string, set<string>> reportCnt;
map<string, set<string>> callCnt;
map<string, int> answerMap;
vector<int> solution(vector<string> id_list, vector<string> report, int k) {
    vector<int> answer;
    for (string i : id_list) answerMap[i] = 0;
    for (string i : report) 
    {
        string a = "", b = "";
        for (int j = 0; j < i.length(); j++)
        {
            if (i[j] == ' ')
            {
                a = i.substr(0, j);
                b = i.substr(j + 1, -1);
            }
        }
        callCnt[a].insert(b);
        reportCnt[b].insert(a); 
    }
    for (auto i : reportCnt) if (i.second.size() >= k) for (string j : i.second) answerMap[j]++;
    for (auto i : id_list) answer.push_back(answerMap[i]);
    
    return answer;
}