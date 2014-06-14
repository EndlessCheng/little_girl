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
#define MID ((l + r) >> 1)
#define L (x << 1)
#define R ((x << 1) | 1)
#define LC L, l, MID
#define RC R, MID + 1, r
#define LB(x) ((x) & (-(x)))
#pragma warning (disable : 4996)
//#pragma comment(linker, "/STACK:102400000,102400000")
#define EPS 1e-8
#define INF 2000000000
#define LIM (1ll << 60)
#define MOD 1000000007
#define N 111111

using namespace std;

int n, m;
int mleft[4 * N], mright[4 * N], middle[4 * N], lx[4 * N], rx[4 * N], fl[4 * N], a[N], ql, qr, qd, ans;
char s[5];

void merge(int x, int l, int r) {
    mleft[x] = mleft[L] + (mleft[L] == MID - l + 1 && rx[L] < lx[R] ? mleft[R] : 0);
    mright[x] = mright[R] + (mright[R] == r - MID && rx[L] < lx[R] ? mright[L] : 0);
    lx[x] = lx[L], rx[x] = rx[R];
    int m = (rx[L] < lx[R] ? mright[L] + mleft[R] : 0);
    middle[x] = max(m, max(middle[L], middle[R]));
}

void bld(int x, int l, int r) {
    if (l != r) {
        bld(LC), bld(RC);
        merge(x, l, r);
    }
    else {
        mleft[x] = mright[x] = middle[x] = 1;
        lx[x] = rx[x] = a[l];
    }
}

void push(int x, int l, int r) {
    fl[L] = fl[R] = fl[x];
    mleft[L] = middle[L] = mright[L] = 1, lx[L] = rx[L] = fl[x];
    mleft[R] = middle[R] = mright[R] = 1, lx[R] = rx[R] = fl[x];
    fl[x] = 0;
}


void upd(int x, int l, int r) {
    if (ql <= l && qr >= r) {
        fl[x] = qd;
        mleft[x] = mright[x] = middle[x] = 1;
        lx[x] = rx[x] = qd;
    }
    else {
        if (fl[x]) push(x, l, r);
        if (ql <= MID) upd(LC);
        if (qr > MID) upd(RC);
        merge(x, l, r);
    }
}

void que(int x, int l, int r) {
    if (ql <= l && qr >= r) {
        ans = max(ans, middle[x]);
    }
    else {
        if (fl[x]) push(x, l, r);
        if (ql <= MID) que(LC);
        if (qr > MID) que(RC);
        if (rx[L] < lx[R]) {
            int ll = min(MID - ql + 1, mright[L]) + min(qr - MID, mleft[R]);
            ans = max(ans, ll);
        }
    }
}


int main(){
    int t, x, y, z, ca = 1;
    // freopen("D:/Contest/1.in", "r", stdin);
    //freopen("1.ans", "w", stdout);
    //ios :: sync_with_stdio(false);
    RII(n, m);
    REPP(i, 1, n) RI(a[i]);
    bld(1, 1, n);
    while (m--) {
        scanf("%s", s);
        if (s[0] == 'Q') {
            RII(ql, qr);
            ans = 0;
            que(1, 1, n);
            PI(ans);
        }
        else {
            RIII(ql, qr, qd);
            upd(1, 1, n);
        }
    }


    return 0;
}
