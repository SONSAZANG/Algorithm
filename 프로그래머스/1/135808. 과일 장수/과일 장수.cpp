#include <string>
#include <vector>
#include <algorithm>
using namespace std;


int solution(int k, int m, vector<int> score) {
    int answer = 0;
    // 내림차순 정렬
    sort(score.begin(), score.end(), greater<int>());
    
    // 사용하지 않는 사과 제거
    int a = score.size() % m;
    for (int i = 0; i < a; i++) {
        score.pop_back();
    }
    
    // score를 순회하면서 m번째 자리의 숫자(m개로 배열을 나눴을때 최소값)를 조회
    // score.size() = 12, m = 4 => 4, 8, 12를 찾는 방법
    for (int i = 0; i < score.size(); i++) {
        if ((i + 1) % m == 0) {
            answer += score[i] * m;
        } 
    }
    
    return answer;
}