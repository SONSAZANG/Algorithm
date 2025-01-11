#include <bits/stdc++.h>
using namespace std;
string s, h;
int main() {
	cin >> s;
	
	if (s.length() % 2 == 0) 
	{
		h = s.substr(s.length() / 2, s.length() - 1);
		s = s.substr(0, s.length() / 2);
	}
	else 
	{
		h = s.substr((s.length() / 2) + 1, s.length() - 1);
		s = s.substr(0, (s.length() / 2));
	}
	reverse(h.begin(), h.end());
	if (h == s) cout << 1;
	else cout << 0;
	return 0;
}