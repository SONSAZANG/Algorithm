#include <bits/stdc++.h>
using namespace std;

int a, b;
string input;
vector<int> aVc;
int main() 
{
	ios::sync_with_stdio(false); cin.tie(NULL);
	//cin >> a;
	cin >> a;
	for (int i = 0; i < a; i++) {
		cin >> b;
	map<string, int> aMap;
	
	for (int i = 0; i < b; i++) 
	{
		string word;
		cin.ignore();
		getline(cin, input);
		for(int j = 0; j < input.length(); j++) 
		{
			if (input[j] == ' ')
			{
				word = "";
			}
			else word += input[j];
		}
		aMap[word]++;
	}
	
	int answer = 0;
	
	answer = 1;
	for (auto i : aMap) 
	{	
		answer *= i.second + 1;
	}	
	answer--;
	

	aVc.push_back(answer);
	
	}
	
	for (int i : aVc) cout << i << '\n';

	return 0;
}