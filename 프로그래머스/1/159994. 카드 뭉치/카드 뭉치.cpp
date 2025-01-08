#include <bits/stdc++.h>
using namespace std;

string solution(vector<string> cards1, vector<string> cards2, vector<string> goal) {
    bool isCan = true;
    reverse(cards1.begin(), cards1.end());
    reverse(cards2.begin(), cards2.end());
    
    int i = 0;
    while(i < goal.size()) {
        if (goal[i] == cards1[cards1.size() - 1]) {
            cards1.pop_back();
        }
        else if (goal[i] == cards2[cards2.size() - 1]) {
            cards2.pop_back();
        }
        else {
            isCan = false;
            break;
        }
        i++;
    }    
    
    return isCan ? "Yes" : "No";
}