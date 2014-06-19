#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
const int maxn = 8000;

struct segment
{
	int a, b, x;
	bool operator < (const segment& temp) const
	{
		return x < temp.x||x==temp.x&&a<temp.a;
	}
} a[maxn + 10];

int set[maxn << 3];
bool map[maxn + 10][maxn + 10];

void push_down(int o)
{
	if (set[o] != -1)
	{
		set[o << 1] = set[o];
		set[o << 1 | 1] = set[o];
		set[o] = -1;
	}
}

void query(int o, int L, int R, int i)
{
	if (set[o] != -1)
	{
		map[i][set[o]] = map[set[o]][i] = 1; /// 表示二者相邻
		return;
	}
	if (L == R) return;
	int m = (L + R) >> 1;
	if (a[i].a <= m) query(o << 1, L, m, i);
	if (a[i].b > m) query(o << 1 | 1, m + 1, R, i);
}

void insert(int o, int L, int R, int i)
{
	if (a[i].a <= L && a[i].b >= R)
	{
		set[o] = i;
		return;
	}
	push_down(o);
	int m = (L + R) >> 1;
	if (a[i].a <= m) insert(o << 1, L, m, i);
	if (a[i].b > m) insert(o << 1 | 1, m + 1, R, i);
}

int main()
{
	freopen("in.txt", "r", stdin);
	int T, n;
	scanf("%d", &T);
	while (T--)
	{
		scanf("%d", &n);
		memset(set, -1, sizeof(set));
		memset(map, false, sizeof(map));
		int L = (1 << 31) - 1, R = -1;
		for (int i = 0; i < n; i++)
		{
			scanf("%d%d%d", &a[i].a, &a[i].b, &a[i].x);
			a[i].a *= 2;
			a[i].b *= 2;
			L = min(L, a[i].a);
			R = max(R, a[i].b);
		}
		sort(a, a + n);
		for (int i = 0; i < n; i++)
		{
			query(1, L, R, i);
			insert(1, L, R, i);
		}
		int ans = 0;
		for (int i = 0; i < n - 2; i++)
		{
			for (int j = i + 1; j < n - 1; j++)
			{
				if (map[i][j])
				{
					printf("%d %d\n", i, j);
					for (int k = j + 1; k < n; k++)
					{
						printf(" %d %d %d\n",k, map[i][k], map[j][k]);
						if (map[i][k] && map[j][k])
						{
							ans++;
						}
					}
				}
			}
		}
		printf("%d\n", ans);
	}
	return 0;
}
