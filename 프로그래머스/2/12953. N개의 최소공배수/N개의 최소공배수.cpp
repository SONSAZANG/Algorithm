#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    if (b == 0) return a;
    else return gcd(b, a % b);
}

int solution(vector<int> arr) {
    int answer = 0;
    sort(arr.begin(), arr.end(), greater<int>());
    answer = arr[0];
    for (int i = 1; i < arr.size(); i++) answer = (answer * arr[i]) / gcd(answer, arr[i]);
    return answer;
} 