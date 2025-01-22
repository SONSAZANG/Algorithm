#include <string>
#include <vector>
#include <iostream>

using namespace std;

int a, b, k;
string split;
int solution(string s) {
    int answer = 0;
    k = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == s[k]) a++;
        else b++;
        
        if (a == b) {
            split = s.substr(k, i - k + 1);
            k = i + 1;
            a = 0; b = 0;
            answer++;
        } 
    }
    
    if (a > 0) answer++;
    
    return answer;
}