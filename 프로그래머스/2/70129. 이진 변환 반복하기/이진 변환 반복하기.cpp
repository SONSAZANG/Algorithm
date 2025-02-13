#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int a, b;
string ChangeBinary(int input)
{
    string result = "";
    while (input != 1)
    {
        result += to_string(input % 2);
        input /= 2;
    }
    result += "1";
    reverse(result.begin(), result.end());
    return result;
}

void Change(string str) 
{
    if (str == "1") return;
    string result = "";
    for (char i : str) 
    {
        if (i == '1') result += i;
        else b++;
    }
    a++;
    
    if (result.length() > 0)
    {
        Change(ChangeBinary(result.length()));
    }
}

vector<int> solution(string s) {
    vector<int> answer;
    Change(s);
    answer.push_back(a);
    answer.push_back(b);
    return answer;
}