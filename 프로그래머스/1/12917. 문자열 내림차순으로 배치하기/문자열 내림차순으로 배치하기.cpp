#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool compare(int a, int b) {
    return a > b;
}

string solution(string s) {
    string answer = "";
    int size = s.length();
    char cstr[size];
    strcpy(cstr, s.c_str());
    vector<int> intVec;
    for (int i = 0; i < size; ++i) {
        intVec.push_back(cstr[i] - 65);
    }
    sort(intVec.begin(), intVec.end(), compare);
    
    for (int i = 0; i < size; ++i) {
        cstr[i] = intVec[i] + 65;
    }
    answer = cstr;
    return answer;
}