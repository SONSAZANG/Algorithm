#include <string>
#include <vector>

using namespace std;
using ULL = unsigned long long; 

int solution(string t, string p) {
    int answer = 0;
    ULL pLL = stoll(p);
    int lastPoint = t.length() - p.length() + 1;
    
    for (int i = 0; i < lastPoint; i++) {
        string split = t.substr(i, p.length());
        if (stoll(split) <= pLL){
            answer++;
        }
    }
    
    return answer;
}