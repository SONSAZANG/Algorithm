#include <string>
#include <vector>
#include <cmath>
#include <iostream>

using namespace std;

int solution(int n) {
    double answer = 0;
    vector<int> vc;
    
    while (n > 2) {
        vc.push_back(n % 3);
        n = n / 3;
    }
    vc.push_back(n);
    
    cout << pow(3, 0) << endl;
    
    int i = 0;
    for (auto it = vc.rbegin(); it != vc.rend(); it++) {
        if (*it > 2) return 1;
        else {
            answer += (*it) * pow(3, i);
        }
        i++;
    }
    
    return answer;
}