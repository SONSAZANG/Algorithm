#include <string>
#include <vector>

using namespace std;

int solution(int num1, int num2) {
    int answer = 0;
    float num2F = num2;
    answer = (num1 / num2F) * 1000;
    return answer;
}