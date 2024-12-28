#include <string>
#include <vector>
#include <iostream>

using namespace std;

bool solution(int x) {
    bool answer = true;
    string s = to_string(x);
    int sum = 0;
    for (int i = 0; i < s.size(); i++) {
        string a = s.substr(i, 1);
        sum += stoi(a);
    }
    
    answer = x % sum == 0;
    return answer;
}