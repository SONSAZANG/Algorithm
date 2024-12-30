#include <string>
#include <vector>
#include <algorithm>

using namespace std;
    
vector<int> solution(vector<int> arr) {
    vector<int> answer;
    vector<int> originalArr = arr;
    
    stable_sort(arr.begin(), arr.end(), greater<int>());
    int a = arr[arr.size() - 1];
    
    for (int i = 0; i < originalArr.size(); i++) {
        if (originalArr[i] != a) {
            answer.push_back(originalArr[i]);   
        }
    }
    
    if (answer.size() < 1) {
        answer.push_back(-1);
    }
    
    return answer;
}