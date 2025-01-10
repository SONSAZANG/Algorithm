#include <string>
#include <vector>
#include <algorithm>
#include <map>
#include <iostream>

using namespace std;
vector<int> a = {1, 2, 3, 4, 5};
vector<int> b = {2, 1, 2, 3, 2, 4, 2, 5};
vector<int> c = {3, 3, 1, 1, 2, 2, 4, 4, 5, 5};
map<int, int> m;
vector<int> solution(vector<int> answers) {
    vector<int> answer;
    for(int i = 0; i < answers.size(); i++) {
        a.push_back(a[i]);
        b.push_back(b[i]);
        c.push_back(c[i]);
    }
    
    for(int i = 0; i < answers.size(); i++) {
        if(answers[i] == a[i]) {
            m[1]++;
        }
        if(answers[i] == b[i]) {
            m[2]++;
        }
        if(answers[i] == c[i]) {
            m[3]++;
        }
    }
    
    auto max = max_element(m.begin(), m.end(), [](const auto &x, const auto &y) { return x.second < y.second ;});
    for(int i = 1; i <= 3; i++) {
        if (max->second == m[i]) {
            answer.push_back(i);
        }
    }
    sort(answer.begin(), answer.end());
    
    return answer;
}