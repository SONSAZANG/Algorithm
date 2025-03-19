#include <bits/stdc++.h>
using namespace std;

int n, a, b, c, d;
vector<int> v, m, answerV; 

void Calculate(vector<int>& m, vector<int>& answerV) 
{
	int answer = 0;
	answer = v[0];
	for (int i = 0; i < m.size(); i++) 
	{
		if (m[i] == 0) answer += v[i + 1];
		if (m[i] == 1) answer -= v[i + 1];
		if (m[i] == 2) answer *= v[i + 1];
		if (m[i] == 3) answer /= v[i + 1];
	}
	answerV.push_back(answer);
}

int main() 
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int max = 0;
	int min = 0;
	
	cin >> n;
	for (int i = 0; i < n; i++) 
	{
		int j = 0;
		cin >> j;
		v.push_back(j);
	}
	cin >> a >> b >> c >> d;
	
	for (int i = 0; i < a; i++) 
	{
		m.push_back(0);
	}
	for (int i = 0; i < b; i++) 
	{
		m.push_back(1);
	}
	for (int i = 0; i < c; i++) 
	{
		m.push_back(2);
	}
	for (int i = 0; i < d; i++) 
	{
		m.push_back(3);
	}

	do 
	{
		Calculate(m, answerV);
	} while (next_permutation(m.begin(), m.end()));
	
	sort(answerV.begin(), answerV.end());

	cout << answerV.back() << '\n';
	cout << answerV.front() << '\n';
}