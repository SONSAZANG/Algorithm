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
    
    int sum = 1;
    if (divisorVec.size() % 2 == 0) {
        return sum;
    } else if (divisorVec.size() % 2 != 0) {
        return -sum;
    }
}

int solution(int left, int right) {
    int answer = 0;
    
    for (int i = left; i <= right; ++i) {
        answer += getDivisorCount(i) * i;
    }
    
    return answer;
}