#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    vector<int> aVec;
    
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            aVec.push_back(i);
        } 
    }
    
    for (int j : aVec) {
        answer += j;
    }
    
    return answer;
}