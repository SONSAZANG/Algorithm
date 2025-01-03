#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int n) {
    double answer = 0;
    vector<int> vc;
    
    while (n > 2) {
        vc.push_back(n % 3);
        n = n / 3;
    }
    vc.push_back(n);
    int i = 0;
    for (auto it = vc.rbegin(); it != vc.rend(); it++) {
        answer += (*it) * pow(3, i);
        i++;
    }
    
    return answer;
}