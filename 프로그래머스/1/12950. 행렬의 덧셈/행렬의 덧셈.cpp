#include <string>
#include <vector>
#include <iostream>
using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
    int size1 = arr1.size();
    int size2 = arr1[0].size();
    vector<vector<int>> answer(size1, vector<int>(size2));
    
    
    for (int i = 0; i < arr1.size(); ++i) {
        for (int j = 0; j < arr1[i].size(); ++j) {
            int a = arr1[i][j] + arr2[i][j];
            answer[i][j] = a;
        }
    }
    
    return answer;
}