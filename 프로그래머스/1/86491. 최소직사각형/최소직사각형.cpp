#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<vector<int>> sizes) {
    int answer = 0;
    int high = 0;
    int highIndex = 0;
    int highValue = 0;
    for (int i = 0; i < sizes.size(); i++) {
        if (sizes[i][0] > high) {
            high = sizes[i][0];
            highIndex = i;
            highValue = 0;
        }
        if (sizes[i][1] > high) {
            high = sizes[i][1];
            highIndex = i;
            highValue = 1;
        }
    }
    
    int low = sizes[highIndex][highValue == 0 ? 1 : 0];
    
    // 배열에서 작은수를 찾아서 low랑 비교해서 가장 작은 수 구하기
    for (int i = 0; i < sizes.size(); i++) {
        int lowValue = sizes[i][0] > sizes[i][1] ? sizes[i][1] : sizes[i][0];
        if (low < lowValue) {
            low = lowValue;
        }
    }
    answer = high * low;
    
    return answer;
}