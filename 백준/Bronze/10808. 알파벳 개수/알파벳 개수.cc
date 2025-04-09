#include <bits/stdc++.h>
using namespace std;

int cnt[26];
string s;
int main()
{
	cin >> s;
	
	for (char i : s)
	{
		cnt[(i - 'a')]++;
	}
	
	for (int i : cnt) 
	{
		cout << i << " ";
	}
	
	return 0;
}