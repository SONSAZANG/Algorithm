#include <string>
#include <vector>
#include <map>
using namespace std;

map<char, int> rMap;
string solution(vector<string> survey, vector<int> choices) {
    string answer = "";
    
    rMap.insert(make_pair('R', 0));
    rMap.insert(make_pair('T', 0));
    rMap.insert(make_pair('C', 0));
    rMap.insert(make_pair('F', 0));
    rMap.insert(make_pair('J', 0));
    rMap.insert(make_pair('M', 0));
    rMap.insert(make_pair('A', 0));
    rMap.insert(make_pair('N', 0));
    
    for (int i = 0; i < choices.size(); i++) {
        if (choices[i] == 4) continue;
        else if (choices[i] < 4) rMap[survey[i][0]] += (4 - choices[i]);
        else if (choices[i] > 4) rMap[survey[i][1]] += (choices[i] - 4);
    }

    answer += rMap['R'] >= rMap['T'] ? 'R' : 'T';
    answer += rMap['C'] >= rMap['F'] ? 'C' : 'F';
    answer += rMap['J'] >= rMap['M'] ? 'J' : 'M';
    answer += rMap['A'] >= rMap['N'] ? 'A' : 'N';
    return answer;
}