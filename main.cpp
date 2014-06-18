#include<iostream>
#include<cstdio>
using namespace std;

const int MAXN = 100005;
int n, p[MAXN], q[MAXN];

bool run(int x)
{
	int pp = 0, qq = 0, cnt = 0;
	for(int i = x; cnt < n; i = (i+1)%n)
	{
		pp += p[i]; qq += q[i];
		if(pp < qq) return false;
		cnt ++;
	}
	return true;
}

int solve()
{
	for(int i = 0; i < n; i ++)
		if(run(i))
			return i+1;
}

int main()
{
	int cas;
	scanf("%d", &cas);
	for(int t = 1; t <= cas; t ++)
	{
		scanf("%d", &n);

		int sp = 0, sq = 0;

		for(int i = 0; i < n; i ++) { scanf("%d", &p[i]); sp += p[i]; }
		for(int i = 0; i < n; i ++) { scanf("%d", &q[i]); sq += q[i]; }

		printf("Case %d: ", t);
		if(sp < sq) printf("Not possible\n");
		else printf("Possible from station %d\n", solve());
	}
	return 0;
}
