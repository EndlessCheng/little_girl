#include<cstdio>
#include<cmath>

inline double len(int n)
{
	return 0.5 * log10(2 * M_PI * n) + n * log10((double)n) - n / log(10);
}

inline int len(int n, int k)
{
	return int(len(n) - len(k) - len(n - k)) + 1;
}

int main()
{
	int n, k;
	while (~scanf("%d%d", &n, &k)) printf("%d\n", len(n, k));
}
