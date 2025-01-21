#include <bits/stdc++.h>
using namespace std;
int n, a, k = 2, r = 0;
unsigned long long m;
vector<int> vc;

void combi(int start, vector<int> &b) {
	if (b.size() == k) {
		if(vc[b[0]] + vc[b[1]] == m) r++;
		return;
	}
	for (int i = start + 1; i < n; i++) {
		b.push_back(i);
		combi(i, b);
		b.pop_back();
	}
} 
int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);
	cin >> n;
	cin >> m;
	
	for (int i = 0; i < n; i++) {
		cin >> a;
		vc.push_back(a); 
	}
	vector<int> B;
	combi(-1, B);
	
	cout << r;
	return 0;
}