#include <bits/stdc++.h>
using namespace std;
map<char, int> a;
int b;
char c;
string d, e;
int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);
	cin >> b;
	for(int i = 0; i < b; i++) {
		cin >> d;
		a[d[0]]++;
	}
	
	for(auto i : a) {
		if (i.second >= 5) e += i.first; 
	}
	if (e.length() < 1) e = "PREDAJA";
	
	cout << e;
	return 0;
}