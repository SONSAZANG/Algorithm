#include <bits/stdc++.h>
using namespace std;

string s, temp;
// A = 65, A = 97
int main() {
	temp = "";
	getline(cin, s);
	for(int i = 0; i < s.length(); i++) {
		if(s[i] == ' ') temp += " ";
		else if(s[i] < 'A') temp += s[i];
		else if(s[i] < 'a') temp += (s[i] + 13) > 'Z' ? (s[i] + 13) - 26 : s[i] + 13;
		else if(s[i] < 'z' + 1) temp += (s[i] + 13) > 'z' ? (s[i] + 13) - 26 : s[i] + 13;
	}
	cout << temp;
	return 0;
}