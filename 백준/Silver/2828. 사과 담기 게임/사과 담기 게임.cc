#include <bits/stdc++.h>
using namespace std;

int n, m, j, ret, target, front, back;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin >> n >> m;
	cin >> j;
	
	int front = 1;
	int back = m;
	for (int i = 0; i < j; i++)
	{
		cin >> target;
		if (target < front) 
		{
			ret += abs(front - target);
			front = target;
			back = front + (m - 1);
		}
		else if (target > back)
		{
			ret += abs(target - back);
			back = target;
			front = back - (m - 1);
		}
		else 
		{
			continue;
		}
	}
	
	cout << ret << '\n';
	return 0;
}