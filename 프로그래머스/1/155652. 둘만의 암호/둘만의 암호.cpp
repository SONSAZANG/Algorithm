#include <string>
#include <vector>
#include <map>
#include <iostream>

using namespace std;

map<int, char> n;
map<int, char> m;
string solution(string s, string skip, int index) {
    string answer = "";
    for (int i = 0; i < 26; i++) {
        n[i + 'a'] = i;
    }
    for (char i : skip) {
        n.erase(i);
    }
    int k = 0;
    for (auto i : n) {
        m[k] = i.second + 'a';
        k++;
    }
    
    for (int i = 0; i < s.length(); i++) {
        for (auto j : m) {
            if (j.second == s[i]) {
                int idx = j.first + index;
                while (idx > m.size() - 1) idx -= m.size();
                answer += m[idx];
            }
        }
    }
    
    return answer;
}