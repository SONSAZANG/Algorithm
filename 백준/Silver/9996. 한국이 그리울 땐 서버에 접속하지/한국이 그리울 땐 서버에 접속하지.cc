#include <bits/stdc++.h>
using namespace std;

int a, e;
string b, c, d, f, g;
int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);
	cin >> a;
	cin >> b;
	for(int i = 0; i < b.length(); i++) {
		if (b[i] == 42) e = i;
	}
	c = b.substr(0, e);
	d = b.substr(e + 1);
	
	for(int i = 0; i < a; i++) {
		cin >> f;
		if (c.size() + d.size() > f.size()) g += "NE\n";
		else {
			if (f.substr(0, c.size()) == c && f.substr(f.length() - d.size()) == d) g += "DA\n";
			else g += "NE\n";
		}
	}
	cout << g;
}