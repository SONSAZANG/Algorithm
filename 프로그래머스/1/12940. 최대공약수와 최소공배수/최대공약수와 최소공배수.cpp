#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(int n, int m) {
    vector<int> answer(2);
    
    for (int i = 1; i <= n + m; i++) {
        if (n % i == 0 && m % i == 0) {
            answer[0] = i;
            answer[1] = (n / i) * (m / i) * i;
        }
    }
    
    return answer;
}