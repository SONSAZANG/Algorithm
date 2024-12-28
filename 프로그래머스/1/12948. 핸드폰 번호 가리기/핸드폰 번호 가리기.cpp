#include <string>
#include <vector>

using namespace std;

string solution(string phone_number) {
    string answer = "";
    int size = phone_number.size();
    string num = phone_number.substr(size - 4);
    for (int i = 0; i < size - 4; i++) {
        answer += "*";
    }
    answer += num;
    return answer;
}