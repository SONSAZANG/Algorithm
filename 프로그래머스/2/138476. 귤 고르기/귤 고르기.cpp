#include <bits/stdc++.h>
using namespace std;

int solution(int k, vector<int> tangerine) {
    int answer = 0;
    
    map<int, int> m;
    
    for (int i : tangerine) 
    {
        m[i]++;
    }
    
    vector<pair<int, int>> v(m.begin(), m.end());
    sort(v.begin(), v.end(), [](pair<int, int> a, pair<int, int> b) {
		return a.second > b.second;
		});

    int sum = 0, index = 0;
    for (auto i : v) 
    {
        if (k > sum) 
        {
            sum += i.second;
            answer++;
        }
        else break;
    }
    
    return answer;
}