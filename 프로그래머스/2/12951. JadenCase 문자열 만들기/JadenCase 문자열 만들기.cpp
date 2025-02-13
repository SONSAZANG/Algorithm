#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<string> split(const string& input, string delimiter)
{
    vector<string> result;
    auto start = 0;
    auto end = input.find(delimiter);
    while(end != string::npos)
    {
        result.push_back(input.substr(start, end - start));
        start = end + delimiter.size();
        end = input.find(delimiter, start);
    }
    result.push_back(input.substr(start));
    return result;
}

string solution(string s) {
    string answer = "";
    vector<string> splitS = split(s, " ");
    
    for (int i = 0; i < splitS.size(); i++) 
    {
        for (int j = 0; j < splitS[i].length(); j++) 
        {
            if (j == 0) answer += toupper(splitS[i][j]);
            else answer += tolower(splitS[i][j]);
        }
        if (i != splitS.size() - 1) answer += " ";
    }
    return answer;
}