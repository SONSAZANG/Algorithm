#include <string>
#include <vector>
#include <map>
#include <iostream>

using namespace std;

map<string, int> sMap;
int y, m, d; 
int CheckDate(string privacie) {
    int priY = stoi(privacie.substr(0, 4));
    int priM = stoi(privacie.substr(5, 2));
    int priD = stoi(privacie.substr(8, 2));
    string priT = privacie.substr(11, 1);
    int calM = priM + sMap[priT];
    while (calM > 12) 
    {
        priY++;
        calM -= 12;
    }
    if (priY < y) return 1;
    else if (priY == y && calM < m) return 1;
    else if (priY == y && calM == m && priD <= d) return 1;
    return 0;
}
vector<int> solution(string today, vector<string> terms, vector<string> privacies) {
    vector<int> answer;
    for (int i = 0; i < terms.size(); i++)  sMap[terms[i].substr(0, 1)] = stoi(terms[i].substr(2, -1));
    y = stoi(today.substr(0, 4));
    m = stoi(today.substr(5, 2));
    d = stoi(today.substr(8, 2));
    for (int i = 0; i < privacies.size(); i++) if (CheckDate(privacies[i]) != 0) answer.push_back(i + 1);
    return answer;
}