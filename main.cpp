#include <stdio.h>
#include <string.h>
#include <algorithm>
#include <vector>

const int N = 100 + 5;
int n, m, path[N], plca[7][N], depth[N], count[N];
bool doge[N];
std::vector<int> edges[N], childs[N];


void dfs(int u, int fa)
{
	if (fa != -1)
	{
		depth[u] = depth[fa] + 1;
	}
	plca[0][u] = fa;
	for (int i = 1; i < 7; ++ i)
	{
		plca[i][u] = -1;
		if (plca[i - 1][u] != -1)
			plca[i][u] = plca[i - 1][plca[i - 1][u]];
	}
	count[u] = doge[u];
	for (int i = 0; i < (int)edges[u].size(); ++ i)
	{
		int v = edges[u][i];
		if (v == fa) continue;
		childs[u].push_back(v);
		dfs(v, u);
		count[u] += count[v];
	}
}

int jump(int u, int length)
{
	for (int i = 0; i < 7; ++ i)
	{
		if (length >> i & 1) u = plca[i][u];
	}
	return u;
}

int getLCA(int a, int b)
{
	if (depth[a] < depth[b]) std::swap(a, b);
	a = jump(a, depth[a] - depth[b]);
	for (int i = 6; i >= 0; -- i)
	{
		if (plca[i][a] != plca[i][b])
		{
			a = plca[i][a];
			b = plca[i][b];
		}
	}
	return a == b ? a : plca[0][a];
}

bool check()
{
	if (m && doge[1] && path[0] != 1)
	{
		return false;
	}
	int now = 1;
	for (int i = path[0] == 1; i < m; ++ i)
	{
		int next = path[i];
		int lca = getLCA(now, next);
		doge[now] = false;
		doge[next] = false;
		for (int u = now; ; u = plca[0][u])
		{
			if (doge[u]) return false;
			if (u == lca) break;
			if (count[u]) return false;
		}
		for (int u = next; ; u = plca[0][u])
		{
			if (doge[u]) return false;
			if (u == lca) break;
		}
		for (int u = next; u != -1; u = plca[0][u])
		{
			count[u] --;
		}
		now = next;
	}
	return true;
}

int main()
{
	int cas;
	scanf("%d", &cas);
	while (cas--)
	{
		scanf("%d", &n);
		for (int i = 1; i <= n; ++ i)
		{
			doge[i] = false;
			edges[i].clear();
			childs[i].clear();
		}
		for (int i = 0; i < n - 1; ++ i)
		{
			int a, b;
			scanf("%d%d", &a, &b);
			edges[a].push_back(b);
			edges[b].push_back(a);
		}
		scanf("%d", &m);
		for (int i = 0; i < m; ++ i)
		{
			scanf("%d", &path[i]);
			doge[path[i]] = true;
		}
		dfs(1, -1);
		puts(check() ? "YES" : "NO");
	}
	return 0;
}
