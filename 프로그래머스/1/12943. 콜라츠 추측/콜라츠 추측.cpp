#include <string>
#include <vector>

using namespace std;

int solution(int num) {
    int answer = 0;
    int tryCount = 0;
    while (true) {
        if (tryCount > 499) {
            answer = -1;
            break;
        } 
        if (num == 1) {
            answer = tryCount;
            break;
        }
        
        if (num % 2 == 0) {
            num = num / 2;
        }
        else if (num % 2 == 1) {
            num = (num * 3) + 1;
        }
        tryCount++;
    }
    return answer;
}