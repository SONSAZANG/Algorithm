#include <string>
#include <vector>
#include <map>
using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    map<char, int> mp;
    
    for (int i = 0; i < s.length(); i++) {
        if (mp.count(s[i]) == 0) {
            mp[s[i]] = i;
            answer.push_back(-1);
        }
        else {
            answer.push_back(i - mp[s[i]]);
            mp[s[i]] = i;
        }
    }
    
    // 맵에 저장해서 해당 캐릭터에 대한 값이 있는지 확인
    // 없으면 answer에 -1로 추가하고 인덱스 기록
    // 있으면 answer에 지금 위치에서 기록된 인덱스를 뺀 값 추가
    
    return answer;
}