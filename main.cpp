/*
* this code is made by yuzhou627
* Problem: 1101
* Verdict: Accepted
* Submission Date: 2014-06-14 19:45:25
* Time: 3340 MS
* Memory: 12528 KB
*/
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cstring>
#include <ctime>
#include <bitset>
#include <algorithm>
#include <set>
#include <string>
#include <vector>
#include <map>
#include <list>
#include <stack>
#include <queue>
#include <deque>
#define dou double
#define mem(a) memset(a, 0, sizeof(a))
#define memm(a) memset(a, -1, sizeof(a))
#define LL long long
#define PB push_back
#define MP make_pair
#define PII pair<int, int>
#define FI first
#define SE second
#define SZ(a) ((int) a.size())
#define ALL(a) a.begin(), a.end()
#define RI(a) scanf("%d", &(a))
#define RII(a, b) scanf("%d%d", &(a), &(b))
#define RIII(a, b, c) scanf("%d%d%d", &(a), &(b), &(c))
#define RL(a) scanf("%lld", &(a))
#define RLL(a, b) scanf("%lld%lld", &(a), &(b))
#define RLLL(a, b, c) scanf("%lld%lld%lld", &(a), &(b), &(c))
#define PI(r) printf("%d\n", (r))
#define PL(r) printf("%lld\n", (r))
#define RS(s) scanf("%s", (s))
#define SL(a) strlen(a)
#define REP(i, n) for (int i = 0; i < (int) (n); ++i)
#define REPP(i, a, b) for (int i = (int) (a); i <= (int) (b); ++i)
#define FOR(c,itr) for(__typeof((c).begin()) itr=(c).begin();itr!=(c).end();itr++)
#define mid ((l + r) >> 1)
#define lo (o << 1)
#define ro ((o << 1) | 1)
#define LC lo, l, mid
#define RC ro, mid + 1, r
#define LB(o) ((o) & (-(o)))
#pragma warning (disable : 4996)
//#pragma comment(linker, "/STACK:102400000,102400000")
#define EPS 1e-8
#define INF 2000000000
#define LIM (1ll << 60)
#define MOD 1000000007
#define N 111111

using namespace std;

int n, m;
int mleft[4 * N], mright[4 * N], middle[4 * N], lx[4 * N], rx[4 * N], setv[4 * N], a[N], ql, qr, qd, ans;
char s[5];

void merge(int o, int l, int r)
{
	mleft[o] = mleft[lo] + (mleft[lo] == mid - l + 1 && rx[lo] < lx[ro] ? mleft[ro] : 0);
	mright[o] = mright[ro] + (mright[ro] == r - mid && rx[lo] < lx[ro] ? mright[lo] : 0);
	lx[o] = lx[lo], rx[o] = rx[ro];
	int m = (rx[lo] < lx[ro] ? mright[lo] + mleft[ro] : 0);
	middle[o] = max(m, max(middle[lo], middle[ro]));
}

void bld(int o, int l, int r)
{
	if (l == r)
	{
		mleft[o] = mright[o] = middle[o] = 1;
		lx[o] = rx[o] = a[l];
		return;
	}
	bld(LC), bld(RC);
	merge(o, l, r);
}

inline void push(int o, int l, int r)
{
	if (setv[o])
	{
		setv[lo] = setv[ro] = setv[o];
		mleft[lo] = middle[lo] = mright[lo] = 1, lx[lo] = rx[lo] = setv[o];
		mleft[ro] = middle[ro] = mright[ro] = 1, lx[ro] = rx[ro] = setv[o];
		setv[o] = 0;
	}
}


void upd(int o, int l, int r)
{
	if (ql <= l && qr >= r)
	{
		setv[o] = qd;
		mleft[o] = mright[o] = middle[o] = 1;
		lx[o] = rx[o] = qd;
		return;
	}
	push(o, l, r);
	if (ql <= mid) upd(LC);
	if (qr > mid) upd(RC);
	merge(o, l, r);
}

void que(int o, int l, int r)
{
	if (ql <= l && qr >= r)
	{
		ans = max(ans, middle[o]);
		return;
	}
	push(o, l, r);
	if (ql <= mid) que(LC);
	if (qr > mid) que(RC);
	if (rx[lo] < lx[ro])
	{
		/// 关键！取最小值！
		int ll = min(mid - ql + 1, mright[lo]) + min(qr - mid, mleft[ro]);
		ans = max(ans, ll);
	}
}

/// 修改下头文件typedef位置

int main()
{
	int t, o, y, z, ca = 1;
	RII(n, m);
	REPP(i, 1, n) RI(a[i]);
	bld(1, 1, n);
	while (m--)
	{
		scanf("%s", s);
		if (s[0] == 'Q')
		{
			RII(ql, qr);
			ans = 0;
			que(1, 1, n);
			PI(ans);
		}
		else
		{
			RIII(ql, qr, qd);
			upd(1, 1, n);
		}
	}
	return 0;
}
