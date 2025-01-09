#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;


int solution(int k, int m, vector<int> score) {
    int answer = 0;
    vector<vector<int>> vc;
    sort(score.begin(), score.end(), greater<int>());
    
    // 사용하지 않는 사과 제거
    int a = score.size() % m;
    for (int i = 0; i < a; i++) {
        score.pop_back();
    }
    
    for (int i = 0; i < score.size(); i++) {
        if ((i + 1) % m == 0) {
            answer += score[i] * m;
        } 
    }
    
    return answer;
}