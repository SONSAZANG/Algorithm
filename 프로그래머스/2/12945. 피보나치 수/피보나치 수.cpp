#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int answer = 0;
int m = 1234567;
int fibo(int input, vector<int> & v)
{
    if (input < 2) return v[input] = input;
    
    if (v[input] > 0) return v[input];
    
    v[input] = ((fibo(input - 1, v) % m) + (fibo(input - 2, v) % m)) % m;
    
    return v[input];
}

int solution(int n) 
{
    vector<int> v(n + 1);
    answer = fibo(n, v);
    return answer;
}