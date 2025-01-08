#include <string>
#include <vector>
#include <map>
using namespace std;

vector<int> m = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
vector<string> answer = {"THU", "FRI", "SAT", "SUN", "MON", "TUE", "WED"};
string solution(int a, int b) {
    int sum = 0;
    for (int i = 1; i < a; i++) {
        sum += m[i];
    }
    sum += b;
    int r = sum % 7;
    return answer[r];
}