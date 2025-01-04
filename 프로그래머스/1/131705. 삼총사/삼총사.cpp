#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector<int> number) {
    int answer = 0;
    
    int count = (number.size() * (number.size() - 1) * (number.size() -2)) / 6; 
    cout << count << endl;
    
    int a = 0;
    int b = 1;
    int c = 2;
    
    while (true) {
        int sum = number[a] + number[b] + number[c];
        cout << "a : " << a << " b : " << b << " c : " << c << endl;
        if (sum == 0) {
            answer++;
        }
        
        if (c < number.size() - 1) {
            c++;
        }
        else if (b < number.size() - 2) {
            b++;
            c = b + 1;
        }
        else if (a < number.size() - 3) {
            a++;
            b = a + 1;
            c = a + 2;
        } 
        else {
            break;
        }
    }
    
    return answer;
}