#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<int> a, b;
string solution(string X, string Y) {
    for (char i : X) a.push_back(int(i));
    for (char i : Y) b.push_back(int(i));
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    vector<int> buff(a.size() + b.size());
    auto iter = set_intersection(a.begin(), a.end(), b.begin(), b.end(), buff.begin());
    buff.erase(iter, buff.end());
    sort(buff.begin(), buff.end(), greater<int>());
    string answer = "";
    for (int i : buff) answer += i;
    if (answer == "") answer = "-1";
    if (answer[0] == '0') answer = "0";
    return answer;
}