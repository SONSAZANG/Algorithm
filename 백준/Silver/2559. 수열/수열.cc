#include <bits/stdc++.h>
using namespace std;
int N, K, a, b;
vector<int> Nv;
int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cin >> N >> K;
	b = 0;
	for(int i = 0; i < N; i++) {
		cin >> a;
		Nv.push_back(a);
	}

	for(int i = 0; i < N - K + 1; i++) {
		int temp = 0;
		for(int j = 0; j < K; j++) {
			temp += Nv[i + j];
		}
		if (b == 0) b = temp;
		if (temp > b) {
			b = temp;
		}
	}
	
	cout << b;
}