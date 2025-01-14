#include <bits/stdc++.h>
using namespace std;

int cnt[100004];
int a = 0;

int getFactors(int a) {
    int b = 0;
    for (int i = 1; i <= sqrt(a); i++) {
        if (a % i == 0) {
            if (i == sqrt(a)) b++;
            else b += 2;
        }
    }
    return b;
}

int solution(int number, int limit, int power) {
    int answer = 0;
    answer += 1;
    for (int i = 2; i <= number; i++) {
        int fac = getFactors(i);
        if (fac > limit) answer += power;
        else answer += fac;
    }
    return answer;
}