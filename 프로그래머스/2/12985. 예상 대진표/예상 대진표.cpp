#include <bits/stdc++.h>
using namespace std;

int s;
double ceilA, ceilB;
int solution(int n, int a, int b)
{
    int answer = 0;
    int round = 0;
    // b가 더 크도록 설정
    if (a > b) swap(a , b);
    s = log2(n);
    round = s;
    while(round > 0) 
    {
        round--;
        a = ceil(a / 2.0f);
        b = ceil(b / 2.0f);
        if (a == b) break;
    }
    answer = s - round;
    return answer;
}