#include <stdio.h>
#include <stdlib.h>

int a[15], b[15], c[15];

int main()
{
	//freopen("in.txt","r",stdin);
	int N, n, i, j, CAS = 1;
	while (scanf(" %d", &N) == 1 && N)
	{
		//printf("%d\n",N);
		for (n = 0; n < N; n++)
			scanf(" %d %d %d", &a[n], &b[n], &c[n]);
		int ans = 1 , wake, sleep;
		while (ans < 252000)
		{
			wake = 0;
			for (n = 0; n < N; n++)
				if (c[n] <= a[n])
					wake++;
			sleep = N - wake;
			if (sleep == 0)
				break;
			for (n = 0; n < N; n++)
			{
				c[n]++;
				if (c[n] == a[n] + b[n] + 1)
					c[n] = 1;
				if (c[n] == a[n] + 1 && wake >= sleep)
					c[n] = 1;
			}
			ans++;
		}
		if (ans == 252000) printf("Case %d: -1\n", CAS++);
		else printf("Case %d: %d\n", CAS++, ans);
	}
	return 0;
}
