#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

string solution(vector<int> food) {
    string answer = "";
    
    bool isHalf = false;
    int num = 1;
    while(true) {
        if (isHalf == true) {
            break;
        }
        
        int foodCount = food[num] % 2 == 0 ? food[num] : food[num] - 1;
        if (num == food.size()) {
            isHalf = true;
        }
        
        if (isHalf == false) {
            for (int i = 0; i < foodCount / 2; i++) {
                answer += to_string(num);
            }
            num++;
        }
        else if (isHalf == true) {
            string r = answer;
            reverse(r.begin(), r.end());
            answer += "0";
            answer += r;
        }
    }
    
    return answer;
}