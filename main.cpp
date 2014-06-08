#include<cstdio>
#include<cmath>
using namespace std;
const int maxn = 5000001;
int a1[maxn], a2[maxn];
int p[maxn], len = 0;
bool num[maxn];
void prime()
{
	num[0] = num[1] = 1;
	int st = (int)sqrt(maxn);
	for (int i = 2; i <= st; ++i)
		if (!num[i])
		{
			a1[i] = 1;
			for (int j = i * i; j < maxn; j += i)
			{num[j] = 1; a2[j] = i;}
		}
	for (int i = 2; i < maxn; ++i)
		a1[i] = a2[i] ? a1[i / a2[i]] + 1 : 1;
}
int f(int x)
{
	if (!x)return 0;
	if (x % 4 == 0)return x - 1;
	if (x % 4 == 3)return x + 1;
	return x;
}
int main()
{
	int n, a, b;
	prime();
	while (scanf("%d", &n) == 1)
	{
	    a=0;
		for (int i = 0; i < n; ++i)
		{
			scanf("%d", &b);
			a ^= f(a1[b]);
//printf("%d %d %d\n",b,a1[b],f(a1[b]));
		}
		puts(a ? "Alice" : "Bob");
	}
	return 0;
}
