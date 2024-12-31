#include <string>
#include <vector>
#include <numeric>

using namespace std;

int getDivisorCount(int num) {
    vector<int> divisorVec;
    
    for (int i = 1; i <= num; ++i) {
        if (num % i == 0) {
            divisorVec.push_back(i);
        }
    }
    
    return divisorVec.size() % 2 == 0 ? 1 : -1;
}

int solution(int left, int right) {
    int answer = 0;
    
    for (int i = left; i <= right; ++i) {
        answer += getDivisorCount(i) * i;
    }
    
    return answer;
}