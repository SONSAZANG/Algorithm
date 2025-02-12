#include <string>
#include <vector>
#include <iostream>
#include <set>

using namespace std;

vector<string> split(const string& input, string delimiter)  
{
    vector<string> result;
    auto start = 0;
    auto end = input.find(delimiter);
    while (end != string::npos)
    {
        result.push_back(input.substr(start, end - start));
        start = end + delimiter.size();
        end = input.find(delimiter, start);
    }
    result.push_back(input.substr(start));
    return result;
}

string solution(string s) {
    vector<string> a = split(s, " ");
    set<int> sset;
    string answer = "";
    for (string i : a) sset.insert(stoi(i));
    answer += to_string(*sset.begin());
    answer += " ";
    answer += to_string(*sset.rbegin());
    return answer;
}