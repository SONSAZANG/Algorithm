#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int getResult(vector<int> array, vector<int> command) {
    // array를 잘라서 배열 만들기
    vector<int> resultVc;
    for (int i = command[0] - 1; i < command[1]; i++) {
        resultVc.push_back(array[i]);
    }
    // 배열 정렬하기
    sort(resultVc.begin(), resultVc.end());
    // index로 찾기
    int result = resultVc[command[2] - 1];
    
    return result;
}

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    
    for (int i = 0; i < commands.size(); i++) {
        answer.push_back(getResult(array, commands[i]));
    }
    
    return answer;
}