#include <string>
#include <vector>
#include <iostream>

using namespace std;

int cnt[104];
vector<int> solution(vector<string> keymap, vector<string> targets) {
    vector<int> answer;
    
    for (int i = 0; i < keymap.size(); i++) {
        for(int j = 0; j < keymap[i].length(); j++) {
            int n = keymap[i][j] - 'A';
            if (cnt[n] == 0) cnt[n] = j + 1;
            else if (cnt[n] > j + 1) cnt[n] = j + 1;
        }
    }
    for (int i = 0; i < targets.size(); i++) {
        int r = 0;
        for(int j = 0; j < targets[i].length(); j++) {
            int k = targets[i][j] - 'A';
            if (cnt[k] > 0) r += cnt[k];
            else {
                r = -1;
                break;
            }
        }
        answer.push_back(r);
    }
    
    return answer;
}