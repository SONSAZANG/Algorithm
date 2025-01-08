#include <string>
#include <vector>
#include <map>
#include <iostream>
using namespace std;

map<int, int> m;
vector<string> answer = {"FRI", "SAT", "SUN", "MON", "TUE", "WED", "THU"};
string solution(int a, int b) {
    m[1] = 31;
    m[2] = 29;
    m[3] = 31;
    m[4] = 30;
    m[5] = 31;
    m[6] = 30;
    m[7] = 31;
    m[8] = 31;
    m[9] = 30;
    m[10] = 31;
    m[11] = 30;
    m[12] = 31;
        
    int day = 366;
    int sum = 0;
    
    for (int i = 1; i < a; i++) {
        sum += m[i];
    }
    sum += b;
    int r = sum % 7;
    return answer[r == 0 ? 6 : r - 1];
}