#include<bits/stdc++.h>
using namespace std;

const int max_n = 104;
int n, m, x, y, nx, ny, a[max_n][max_n], visited[max_n][max_n];
int dy[4] = {-1, 0, 1, 0};
int dx[4] = {0, 1, 0, -1};

int solution(vector<vector<int>> maps)
{
    int answer = 0;
    
    n = maps.size();
    m = maps[0].size();
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            a[i][j] = maps[i][j];
        }
    }
    
    queue<pair<int, int>> q;
    visited[y][x] = 1;
    q.push({y, x});
    while(q.size())
    {
        tie(y, x) = q.front(); q.pop();
        for (int i = 0; i < 4; i++)
        {
            ny = y + dy[i];
            nx = x + dx[i];
            if (ny < 0 || ny >= n || nx < 0 || nx >= m || a[ny][nx] == 0) continue;
            if (visited[ny][nx]) continue;
            visited[ny][nx] = visited[y][x] + 1;
            q.push({ny, nx});
        }
    }
    answer = visited[n - 1][m - 1] > 0 ? visited[n - 1][m - 1] : -1;
    
    return answer;
}