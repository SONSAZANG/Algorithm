#include <bits/stdc++.h>
using namespace std;

int answer = 0;
int n, r = 3;
vector<int> c;
void Prime(vector<int> b) {
    int a = 0;
    for(int i : b) {
        a += c[i];
    }
    for(int j = 2; j <= sqrt(a); j++) {
        if (a % j == 0) return;
    }
    answer++;
    return;
}
void combi(int start, vector<int> &b) {
    if (b.size() == r) {
        Prime(b);
        return;
    }
    for(int i = start + 1; i < c.size(); i++) {
        b.push_back(i);
        combi(i, b);
        b.pop_back();
    }
    return;
}

int solution(vector<int> nums) {
    c = nums;
    n = nums.size();
    vector<int> b;
    combi(-1, b);
    return answer;
}