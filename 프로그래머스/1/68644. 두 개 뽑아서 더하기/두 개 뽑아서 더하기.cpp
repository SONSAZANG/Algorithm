#include <string>
#include <vector>
#include <set>
using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> answer;
    set<int> s;
    
    // 배열에 있는 두 개의 수를 더하는 로직
    while (true) {
        for (int i = 0; i < numbers.size() - 1; i++) {
            for (int j = i + 1; j < numbers.size(); j++) {
                s.insert(numbers[i] + numbers[j]);
            }
        }
        break;
    }
    
    // 결과 배열(중복 제거 - set) 정렬
    for (auto result : s) {
        answer.push_back(result);
    }
    return answer;
}