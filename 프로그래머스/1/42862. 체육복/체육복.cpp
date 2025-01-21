#include <string>
#include <vector>
#include <iostream>
using namespace std;

vector<int> cnt;
int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = 0;
    for (int i = 0; i < n; i++) {
        cnt.push_back(1);
    }
    for (int i : reserve) {
        cnt[i - 1] = 2;
    }
    for (int i : lost) {
        cnt[i - 1]--;
    }
    
    for (int i = 0; i < n; i++) {
        if(cnt[i] == 2) {
            if (i > 0 && cnt[i - 1] == 0) {
                cnt[i]--;
                cnt[i - 1]++;
            } else if (cnt[i + 1] == 0) {
                cnt[i]--;
                cnt[i + 1]++;
            }
        } 
    }
    for (int i : cnt) if(i > 0) answer++;
    
    return answer;
}