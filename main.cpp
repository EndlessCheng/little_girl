#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
double pos[110], vr, v1, v2, c, l, t, d[110];
int n;
int main()
{
	while (~scanf("%lf", &l))
	{
		int i, j;
		scanf("%d%lf%lf", &n, &c, &t);
		scanf("%lf%lf%lf", &vr, &v1, &v2);
		for (i = 1; i <= n; i++) scanf("%lf", &pos[i]);
		pos[i] = l;
		d[0] = 0;
		for (i = 1; i <= n + 1; i++)
		{
			d[i] = pos[i] / v2;
			for (j = 0; j < i; j++)
			{
				double cost = (pos[i] - pos[j]) / v2;
				d[i] = min(d[j] + cost, d[i]);
				double ride;
				ride = min(c, pos[i] - pos[j]);
				cost = ride / v1 + (pos[i] - pos[j] - ride) / v2;
				if (j)cost += t;
				d[i] = min(d[j] + cost, d[i]);
			}
		}
		double rabbit = l / vr;
		if (d[n + 1] > rabbit) printf("Good job,rabbit!\n");
		else printf("What a pity rabbit!\n");
	}
	return 0;
}
