#include <bits/stdc++.h>
using namespace std;
int r;
long long n;
string m;
vector<char> a;
int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> m;	
		for(int i = 0; i < m.length(); i++) {
			if (m[i] == m[i + 1]) i += 1;
			else {
				if (a.size() < 1) {
					a.push_back(m[i]);	
				}  
				else if (a.size() > 0) {
					if (a.back() == m[i]) a.pop_back();
					else a.push_back(m[i]);
				}		
			} 
		}
		if (a.empty()) r++;
		a.clear();
	} 
	cout << r;
	return 0;
}