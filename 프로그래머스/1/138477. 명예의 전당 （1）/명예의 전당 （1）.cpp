#include <string>
#include <vector>
#include <algorithm>
using namespace std;


vector<int> solution(int k, vector<int> score) {
    vector<int> answer;
    vector<int> stage;
    
    for (int i = 0; i < score.size(); i++) {
        stage.push_back(score[i]);
        sort(stage.begin(), stage.end(), greater<int>());
 
        if (stage.size() <= k) {
            answer.push_back(stage[stage.size() - 1]);
        } 
        else {
            answer.push_back(stage[k - 1]);
        }
    }
    
    
    return answer;
}