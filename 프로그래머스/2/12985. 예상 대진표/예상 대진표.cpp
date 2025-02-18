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
        ceilA = ceil(a / 2.0f);
        ceilB = ceil(b / 2.0f);
        
        a = ceilA;
        b = ceilB;
        
        cout << "normal - " << a << " : " << b << " : " << round << endl;
        
        if (a == b) break;
        
        if (a <= 1 && b <= 1) 
        {
            break;
        }
        
        round--;
    }
    cout << "answer = " << s << " - " << round << endl;
    answer = s - round + 1;
    return answer;
}