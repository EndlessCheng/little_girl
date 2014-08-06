#include<cstdio>
int m, x, y, ans = 1, fa[100005];
int find(int x){return fa[x] ? fa[x] = find(fa[x]) : x;}
int main()
{
	scanf("%*d%d", &m);
	for (int i = 0; i < m; i++)
	{
		scanf("%d%d", &x, &y);
		if (find(x) == find(y)) ans = ans * 2 % 1000000009;
		else fa[find(x)] = find(y);
		printf("%d\n", ans - 1);
	}
}
