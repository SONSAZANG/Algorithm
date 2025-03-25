#include <bits/stdc++.h>
using namespace std;

const int max_n = 104;
int n, minValue, maxValue, a[max_n][max_n], visited[max_n][max_n], nx, ny, ret, maxRet;
vector<int> v;
int dy[4] = {-1, 0, 1, 0};
int dx[4] = {0, 1, 0, -1};

void dfs(int y, int x, int height) 
{
	visited[y][x] = 1;
	for (int i = 0; i < 4; i++)
	{
		ny = y + dy[i];
		nx = x + dx[i];
		if (ny < 0 || nx < 0 || ny >= n || nx >= n) continue;
		if (a[ny][nx] > height && !visited[ny][nx])
		{
			dfs(ny, nx, height);
		}
	}
	return;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin >> n;
	
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> a[i][j];
			v.push_back(a[i][j]);
		}
	}
	
	maxValue = *max_element(v.begin(), v.end());
	
	for (int h = 0; h < maxValue; h++) 
	{
		ret = 0;
		fill(&visited[0][0], &visited[0][0] + max_n * max_n, 0);
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (a[i][j] > h && !visited[i][j]) 
				{
					ret++; dfs(i, j, h);	
				}
			}
		}
		maxRet = max(ret, maxRet);
	}
	
	cout << maxRet;
	
	return 0;
}