#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

const int N = 1e5 + 10;
int a[N];

set<int> s[20];
ll sum[20];

void one(int p, int v)
{
	s[p].erase(v);
	set<int>::iterator low = --s[p].lower_bound(v);
	set<int>::iterator up = s[p].upper_bound(v);
	sum[p] += ll(v - *low) * (*up - v);
}

void zero(int p, int v)
{
	s[p].insert(v);
	set<int>::iterator low = --s[p].lower_bound(v);
	set<int>::iterator up = s[p].upper_bound(v);
	sum[p] -= ll(v - *low) * (*up - v);
}

int main()
{
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < 20; i++) for (int j = 0; j <= n + 1; j++) s[i].insert(j); // об╠Й
	for (int i = 1; i <= n; i++) scanf("%d", &a[i]);
	for (int i = 0; i < 20; i++) for (int j = 0; j <= n + 1; j++) if (a[j] & (1 << i)) one(i, j);
	while (m--)
	{
		int p, v;
		scanf("%d%d", &p, &v);
		ll ans = 0;
		for (int i = 0; i < 20; i++)
		{
			if (v >> i & 1) {if (s[i].count(p)) one(i, p);}
			else if (!s[i].count(p)) zero(i, p);
		}
		for (int i = 0; i < 20; i++) ans += sum[i] * (1 << i);
		cout << ans << "\n";
	}
	return 0;
}
