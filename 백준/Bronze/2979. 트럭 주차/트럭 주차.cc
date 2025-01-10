#include <bits/stdc++.h>
using namespace std;

int ap, bp, cp;
int as, ae;
int bs, be;
int cs, ce;
map<int, int> m;
int result;
int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	cin >> ap >> bp >> cp >> as >> ae >> bs >> be >> cs >> ce;

	for(int i = as; i < ae; i++) m[i]++;
	for(int i = bs; i < be; i++) m[i]++;
	for(int i = cs; i < ce; i++) m[i]++;
	for(auto i : m) 
	{
		if(i.second == 1) result += ap;
		if(i.second == 2) result += bp * 2;
		if(i.second == 3) result += cp * 3; 
	} 
	cout << result;
	return 0;
}