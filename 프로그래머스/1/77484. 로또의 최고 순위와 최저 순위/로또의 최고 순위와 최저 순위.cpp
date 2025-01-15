#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int zeroCnt = 0, cnt = 0;
vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer;
    int grade[10];
    grade[6] = 1;
    grade[5] = 2;
    grade[4] = 3;
    grade[3] = 4;
    grade[2] = 5;
    grade[1] = 6;
    grade[0] = 6;
    
    for(int i = 0; i < 6; i++) {
        if(lottos[i] == 0) zeroCnt++;
        auto it = find(win_nums.begin(), win_nums.end(), lottos[i]);
        if (it != win_nums.end()) {
            cnt++;
            win_nums.erase(it);
        }
    }
    
    int gradeTop = grade[cnt + zeroCnt];
    answer.push_back(gradeTop);
    int gradeUnder = grade[cnt];
    answer.push_back(gradeUnder);
    
    return answer;
}