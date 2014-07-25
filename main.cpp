#include<stdio.h>
#include<string.h>
#include<math.h>
#include<algorithm>
#include<iostream>
#include<string>
using namespace std;

struct node
{
	int x, y;
} v[10005];

bool cmp(node p, node q)
{
	if (p.x == q.x) return p.y < q.y;
	return p.x < q.x;
}

int b[10005];

int main()
{
	int n, i, j, t, k;
	while (scanf("%d", &n), n)
	{
		for (i = 0; i < n; i++)
			scanf("%d%d", &v[i].x, &v[i].y);
		sort(v, v + n, cmp);
		t = 1;
		b[0] = v[0].y;
		for (i = 1; i < n; i++)
            if (v[i].y < b[t - 1])
			{
				for (j = 0; j < t; j++) if (b[j] > v[i].y)
					{
						b[j] = v[i].y;
						break;
					}
			}
			else b[t++] = v[i].y;
		printf("%d\n", t);
	}
	printf("*\n");
	return 0;
}
