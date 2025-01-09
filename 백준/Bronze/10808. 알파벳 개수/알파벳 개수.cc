#include <bits/stdc++.h>
using namespace std;

string s;
int a = 26;
char c[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
map<char, int> m;
int main() {
	cin >> s;
	
	for(int i = 0; i < a; i++) {
		m[c[i]] = 0;
	}
	
	for(int i = 0; i < s.length(); i++) {
		m[s[i]]++; 
	}
	
	for(auto i : m) {
		cout << i.second << " ";
	}
	
	return 0;
}