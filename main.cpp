/* 124 ms, 2324 KB */
#include<cstdio>

int a[300005], w[300005];

int main()
{
	int n, i, l, r, cnt = 0, maxd = 0;
	scanf("%d", &n);
	for (i = 0; i < n; i++) scanf("%d", &a[i]);
	for (i = 0; i < n;)
	{
		l = r = i;
		while (l && a[l - 1] % a[i] == 0) l--;
		while (r < n - 1 && a[r + 1] % a[i] == 0) r++;
		i = r + 1; // 关键一步，保证算法是O(n)的，这样做是因为在[l,r]内的数的「边界」就是[l,r]（可用反证法思考）
		r -= l;
		if (r > maxd) cnt = 0, maxd = r;
		if (r == maxd) w[cnt++] = l + 1;
	}
	printf("%d %d\n", cnt, maxd);
	for (i = 0; i < cnt; ++i) printf("%d ", w[i]);
	return 0;
}
