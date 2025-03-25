#include <bits/stdc++.h>
using namespace std;

const int max_n = 54;
int dy[4] = {-1, 0, 1, 0};
int dx[4] = {0, 1, 0, -1};
int t, m, n, a[max_n][max_n], y, x, ny, nx, k;
vector<int> retV;
bool visited[max_n][max_n];

void dfs(int y, int x) 
{
	visited[y][x] = 1;
	for (int i = 0; i < 4; i++)
	{
		ny = y + dy[i];
		nx = x + dx[i];
		if (ny < 0 || nx < 0 || ny >= n || nx >= m) continue;
		if (a[ny][nx] == 1 && !visited[ny][nx]) 
		{
			dfs(ny, nx);
		}
	}
	return;
}

void testCase()
{
	int ret = 0;
	cin >> m >> n >> k;
	for (int i = 0; i < k; i++)
	{
		cin >> x >> y;
		a[y][x] = 1;
	}
	
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (a[i][j] == 1 && !visited[i][j])
			{
				ret++; 
				dfs(i, j);
			}
		}
	}
	
	retV.push_back(ret);
}

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> t;
	
	for (int i = 0; i < t; i++)
	{
		fill(&a[0][0], &a[max_n - 1][max_n], 0);
		fill(&visited[0][0], &visited[max_n - 1][max_n], 0);
		testCase();
	}
	
	for (int i : retV) cout << i << '\n';
		
	return 0;
}