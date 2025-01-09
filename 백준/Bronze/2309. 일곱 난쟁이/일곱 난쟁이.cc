#include <bits/stdc++.h>
using namespace std;

int n = 9, k = 7, t = 100;
vector<int> a, b, c;
void print(vector<int> v) {
	int sum = 0;
	for (int i : v) sum += a[i];	
	if (sum == t) {
		for (int i : v) c.push_back(a[i]);
		sort(c.begin(), c.end());
		for (int i : c) {
			cout << i << '\n';
		}
		exit(0);
	}
}
void combi(int start, vector<int> &v) {
	if (v.size() == k) {
		print(v);
		return;
	}
	for (int i = start + 1; i < n; i++) {
		v.push_back(i);
		combi(i, v);
		v.pop_back();
	}
	return;
}
int main() {	
	int i = 0;
	while(a.size() < 9) {
		cin >> i;
		a.push_back(i);
		i = 0;
	}
	
	vector<int> b;
	combi(-1, b);
	
	sort(c.begin(), c.end());
	for (int i : c) {
		cout << i << '\n';
	}

	return 0;
}