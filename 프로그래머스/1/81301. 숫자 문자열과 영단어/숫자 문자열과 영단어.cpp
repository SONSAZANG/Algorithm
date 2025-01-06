#include <string>
#include <vector>
#include <map>
using namespace std;

map<string, string> sMap;
int solution(string s) {
    int answer = 0;
    int i = 0;
    
    sMap["zero"] = "0";
    sMap["one"] = "1";
    sMap["two"] = "2";
    sMap["three"] = "3";
    sMap["four"] = "4";
    sMap["five"] = "5";
    sMap["six"] = "6";
    sMap["seven"] = "7";
    sMap["eight"] = "8";
    sMap["nine"] = "9";
    
    string result = "";
    
    while (i < s.length()) {
        if (s[i] >= 97 && s[i] <= 122) {
            for (int j = 3; j <= 5; j++) {
                if (sMap.count(s.substr(i, j)) == 1) {
                    result += sMap[s.substr(i, j)];
                    i += j;
                }
            }
        }
        else {
            result += s[i];
            i++;
        }
    }
    
    answer = stoi(result);
    return answer;
}