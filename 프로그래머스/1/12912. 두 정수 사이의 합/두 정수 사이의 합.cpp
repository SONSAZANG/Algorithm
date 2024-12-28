#include <string>
#include <vector>

using namespace std;

long long solution(int a, int b) {
    long long answer = 0;
    int aX = a < b ? a : b;
    int bX = a < b ? b : a;
    
    for (int i = aX; i < bX + 1; i++) {
        answer += i;
    }
    return answer;
}