#include <string>
#include <vector>

using namespace std;

vector<int> solution(long long n) {
    vector<int> answer;
    while(true)
    {
        if (n < 10) {
            answer.push_back(n);
            break;
        }
        else{
            answer.push_back(n % 10);
            n = n / 10;
        }
    }
        
    return answer;
}