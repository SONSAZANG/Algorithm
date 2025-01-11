#include <bits/stdc++.h>
using namespace std;
int a;
int b1, c1;
char b, c;
string d, e, f;
int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);
	cin >> a;
	cin >> d;
	for (int i = 0; i < d.length(); i++) {
		if (d[i] == '*') {
			b = d[i - 1];
			b1 = i - 1;
			c = d[i + 1];
			c1 = d.length() - (i + 1 + 1);
		}
	}
	for(int i = 0; i < a; i++) {
		cin >> e;
		if ((b1 + 1) + (c1 + 1) > e.length()) f += "NE";
		else if(e[b1] == b && e[e.length() - c1 - 1] == c) f += "DA";
		else f += "NE";
		if (i < a - 1) f += "\n"; 
	}
	cout << f;
	return 0;
}