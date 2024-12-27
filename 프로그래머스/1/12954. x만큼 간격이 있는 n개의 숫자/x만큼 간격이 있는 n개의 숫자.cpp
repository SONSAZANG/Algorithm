#include <string>
#include <vector>

using namespace std;

vector<long long> solution(int x, int n) {
    vector<long long> answer;
    int i = 1;
    while(true) {
        if (i <= n) {
            answer.push_back(x * i);
            i++;
        }
        else break;
    }
    return answer;
}