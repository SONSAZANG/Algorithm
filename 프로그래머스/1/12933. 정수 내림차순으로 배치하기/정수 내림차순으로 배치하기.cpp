#include <string>
#include <vector>
#include <iostream>

using namespace std;

long long solution(long long n) {
    vector<int> aIntVec;
    long long answer = 0;
    int temp = 0;
    
    while(n > 0) {
        aIntVec.push_back(n % 10);
        n = n / 10;
    }
    
    for (int i = 0; i < aIntVec.size(); i++) {
        for (int j = 0; j < aIntVec.size() - 1; j++) {
            if (aIntVec[j] > aIntVec[j + 1])
            {
                temp = aIntVec[j];
                aIntVec[j] = aIntVec[j + 1];
                aIntVec[j + 1] = temp;
            }
        }
    }
    
    int j = 1;
    for (int i = 0; i < aIntVec.size(); i++) {
        answer += aIntVec[i] * j;
        j *= 10;
    }
    
    return answer;
}