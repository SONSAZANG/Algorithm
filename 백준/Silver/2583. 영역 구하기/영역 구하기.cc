#include <bits/stdc++.h>
using namespace std;
int dy[4] = {-1, 0, 1, 0};
int dx[4] = {0, 1, 0, -1};
int m, n, k, nx, ny, a[104][104], visited[104][104], leftX, leftY, rightX, rightY, ret;
vector<int> retV;

int dfs(int y, int x)
{
	visited[y][x] = 1;
	int ret = 1;	
	for(int i = 0; i < 4; i++)
	{
		ny = y + dy[i];
		nx = x + dx[i];
		if (ny < 0 || ny >= m || nx < 0 || nx >= n) continue;
		if (a[ny][nx] == 0 && !visited[ny][nx]) 
		{
			ret += dfs(ny, nx); 
		}
	}
	
	return ret;
}

int main() 
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin >> m >> n >> k;
	
	vector<int> retV;
	
	for (int cnt = 0; cnt < k; cnt++)
	{
		cin >> leftX >> leftY >> rightX >> rightY;
		for (int i = leftY; i < rightY; i++)
		{
			for (int j = leftX; j < rightX; j++)
			{
				a[i][j] = 1;
			}
		}
	}
	
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i][j] == 0 && !visited[i][j])
			{
				retV.push_back(dfs(i, j));
			}
		}
	}
	sort(retV.begin(), retV.end());
	cout << retV.size() << '\n';
	for (int i : retV) cout << i << " ";
	return 0;
}