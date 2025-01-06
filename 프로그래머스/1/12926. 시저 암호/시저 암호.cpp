#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string s, int n) {
    // 아스키코드 z -> a 25차이
    int a = 0;
    for(int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') {
            continue;
        }
            
        // 대문자 
        if (s[i] <= 90) {
            a = s[i] + n;
            if (a > 90) {
                a -= 26;
            }
        } 
        // 소문자
        else if (s[i] <= 122) {
            a = s[i] + n;
            if (a > 122) {
                a -= 26;
            }
        }
        
        s[i] = a;
    }
    
    return s;
}