#include <bits/stdc++.h>
using namespace std;

string a, ans;
int b;
int names[50];
string r, l;
int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);
	cin >> a;
	sort(a.begin(), a.end());
	for(int i = 0; i < a.length(); i++) { 
		if (names[a[i] - 'A'] > 0) {
			r += a[i];
			names[a[i] - 'A']--;			
		}
		else names[a[i] - 'A']++;
	}
	
	l = r;
	reverse(l.begin(), l.end());
	
	for (int i = 0; i < 50; i++) {
		if (b > 1) {
			cout << "I'm Sorry Hansoo";
			exit(0);
		}
		if (names[i] > 0) { 
			r += (i + 'A');
			b++;
		}
	}
	
	cout <<  r + l << endl;
	
	return 0;
}