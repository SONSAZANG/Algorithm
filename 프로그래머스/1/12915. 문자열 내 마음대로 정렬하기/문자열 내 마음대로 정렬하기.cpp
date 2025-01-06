#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

bool compare(const pair<string, string>& a, const pair<string, string>&  b) {
    if (a.first == b.first) return a.second < b.second;
    return a.first < b.first;
}

multimap<string, string> sMap;
string key = "";
string value = "";

vector<string> solution(vector<string> strings, int n) {
    vector<string> answer;
    for (int i = 0; i < strings.size(); i++) {
        key = (strings[i])[n];
        value = strings[i];
        sMap.insert(pair<string, string>(key, value));
    }
    
    vector<pair<string, string>> vec(sMap.begin(), sMap.end());
    sort(vec.begin(), vec.end(), compare);
    
    for (auto it : vec) {
        answer.push_back(it.second);
    }
    
    return answer;
}