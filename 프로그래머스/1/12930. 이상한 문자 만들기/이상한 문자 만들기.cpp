#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string solution(string s) {
    string answer = "";
    vector<string> vc; 
    int count = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] != ' ') {
            s[i] = count % 2 == 0 ? toupper(s[i]) : tolower(s[i]);
            count++;
        } else {
            count = 0;
        }
        
    }
    return s;
}