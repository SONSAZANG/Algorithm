#include <string>
#include <vector>
#include <iostream>

using namespace std;

bool solution(int x) {
    bool answer = true;
    vector<int> vec;
    string s = to_string(x);
    for (int i = 0; i < s.size(); i++) {
        string a = s.substr(i, 1);
        vec.push_back(stoi(a));
    }
    
    int sum = 0;
    for (int i : vec) {
        cout << i << endl;
        sum += i;
    }
    answer = x % sum == 0;
    return answer;
}