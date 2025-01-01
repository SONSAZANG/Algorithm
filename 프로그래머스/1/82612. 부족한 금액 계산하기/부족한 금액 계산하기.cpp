#include <iostream>
using namespace std;

long long solution(int price, int money, int count)
{
    long long answer = -1;
    
    long long sumPrice = 0;
    for (int i = 1; i <= count; ++i) {
        sumPrice += i * price;
    }
    
    answer = money > sumPrice ? 0 : sumPrice - money;

    return answer;
}