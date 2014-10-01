#include<bits/stdc++.h>
using namespace std;

#define For(i, n) for (i = 0; i < (n); ++i)
//#define For(i, n) for (int i = 0, _ = (n); i < _; ++i)
#define Forr(i, start, n) for (i = start; i < (n); ++i)
#define Forrr(i, start, n, step) for (i = start; i < (n); i += step)
#define rFor(i, n) for (i = (n); i >= 0; --i)
#define rForr(i, n, end) for (i = n; i >= (end); --i)
#define rForrr(i, n, end, step) for (i = n; i >= (end); i -= step)
#define loop(it, a) for (__typeof(a.begin()) it = a.begin(); it != a.end(); ++it)
#define rloop(it, a) for (__typeof(a.rbegin()) it = a.rbegin(); it != a.rend(); ++it)

#define SI(a) scanf("%d", &a)
#define SII(a, b) scanf("%d%d", &a, &b)
#define SIII(a, b, c) scanf("%d%d%d", &a, &b, &c)
#define SIIII(a, b, c, d) scanf("%d%d%d%d", &a, &b, &c, &d)
#define SIIIII(a, b, c, d, e) scanf("%d%d%d%d%d", &a, &b, &c, &d, &e)
#define SIIIIII(a, b, c, d, e, f) scanf("%d%d%d%d%d%d", &a, &b, &c, &d, &e, &f)
#define SL(a) scanf("%lld", &a)
#define SLL(a, b) scanf("%lld%lld", &a, &b)
#define SLLL(a, b, c) scanf("%lld%lld%lld", &a, &b, &c)
#define SLLLL(a, b, c, d) scanf("%lld%lld%lld%lld", &a, &b, &c, &d)
#define SD(a) scanf("%lf", &a)
#define SDD(a, b) scanf("%lf%lf", &a, &b)
#define SDDD(a, b, c) scanf("%lf%lf%lf", &a, &b, &c)
#define SDDDD(a, b, c, d) scanf("%lf%lf%lf%lf", &a, &b, &c, &d)
#define SA(a, n) for(int i = 0; i < n; ++i) scanf("%d", a + i)
#define SAA(a, n, m) for(int i = 0; i < n; ++i) for(int j = 0; j < n; ++j) SI(a[i][j])
#define SAA1(a, n, m) for(int i = 1; i <= n; ++i) for(int j = 1; j <= n; ++j) SI(a[i][j])
#define SS(s) scanf("%s", s)
#define SSS(s, s2) scanf("%s%s", s, s2)
#define SC(c) scanf(" %c", &c)
#define GC(c) (c = getchar())
#define Gn() getchar()
#define UC(c) ungetc(c, stdin)
//template<typename ... T> void RI(int &head, T &... tail) {scanf("%d", &head), RI(tail ...);}
//template<typename ... T> void RL(ll &head, T &... tail) {scanf("%lld", &head), RI(tail ...);}

#define PI(a) printf("%d\n", a)
#define PII(a, b) printf("%d %d\n", a, b)
#define PIII(a, b, c) printf("%d %d %d\n", a, b, c)
#define PIIII(a, b, c, d) printf("%d %d %d %d\n", a, b, c, d)
#define PIIIII(a, b, c, d, e) printf("%d %d %d %d %d\n", a, b, c, d, e)
#define PL(a) printf("%lld\n", a)
#define PLL(a, b) printf("%lld %lld\n", a, b)
#define PLLL(a, b, c) printf("%lld %lld %lld\n", a, b, c)
#define PD(a) printf("%f\n", a)
#define PDD(a, b) printf("%f %f\n", a, b)
#define PDDD(a, b, c) printf("%f %f %f\n", a, b, c)
#define PA(a, n) for(int i = 0; i < n - 1; ++i) printf("%d ", a[i]); PI(a[(n) - 1]) // *函数体可能要用花括号括起来
#define PAA(a, n, m) for(int i = 0; i < n; ++i) {for(int j = 0; j < m - 1; ++j) printf("%d ", a[i][j]); PI(a[i][(m) - 1]);}
#define PAn(a, n) for(int i = 0; i < n; ++i) PI(a[i])
#define rPA(a, n) for(int i = n - 1; i > 0; --i) printf("%d ", a[i]); PI(a[0])
#define rPAn(a, n) for(int i = n - 1; i >= 0; --i) PI(a[i])
#define PC(c) putchar(c)
#define Pn() putchar(10)
#define Ps() putchar(32)

char numstr[200];

struct bign {
	int len, s[200];

	bign() {
		memset(s, 0, sizeof(s));
		len = 1;
	}

	bign(int num) {
		*this = num;
	}

	bign(const char* num) { /// 也就是说：b = a / "123";是允许的
		*this = num;
	}

	bign operator = (const int num) {
		char s[200];
		sprintf(s, "%d", num);
		*this = s;
		return *this;
	}

	bign operator = (const char* num) {
		len = strlen(num);
		for (int i = 0; i < len; i++) s[i] = num[len - i - 1] & 15;
		return *this;
	}

///输出
	const char* str() const {
		if (len) {
			for (int i = 0; i < len; i++)
				numstr[i] = '0' + s[len - i - 1];
			numstr[len] = '\0';
		} else strcpy(numstr, "0");
		return numstr;
	}

///去前导零
	void clear() {
		while (len > 1 && !s[len - 1]) len--;
	}

///加
	bign operator + (const bign& b) const {
		bign c;
		c.len = 0;
		for (int i = 0, g = 0; g || i < max(len, b.len); i++) {
			int x = g;
			if (i < len) x += s[i];
			if (i < b.len) x += b.s[i];
			c.s[c.len++] = x % 10;
			g = x / 10;
		}
		return c;
	}

///减
	bign operator - (const bign& b) const {
		bign c;
		c.len = 0;
		for (int i = 0, g = 0; i < len; i++) {
			int x = s[i] - g;
			if (i < b.len) x -= b.s[i];
			if (x >= 0) g = 0;
			else {
				g = 1;
				x += 10;
			}
			c.s[c.len++] = x;
		}
		c.clear();
		return c;
	}

///乘
	bign operator * (const bign& b) const {
		bign c;
		c.len = len + b.len;
		for (int i = 0; i < len; i++)
			for (int j = 0; j < b.len; j++)
				c.s[i + j] += s[i] * b.s[j];
		for (int i = 0; i < c.len - 1; i++) {
			c.s[i + 1] += c.s[i] / 10;
			c.s[i] %= 10;
		}
		c.clear();
		return c;
	}

///除
	bign operator / (const bign &b) const {
		bign ret, cur = 0;
		ret.len = len;
		for (int i = len - 1; i >= 0; i--) {
			cur = cur * 10;
			cur.s[0] = s[i];
			while (cur >= b) {
				cur -= b;
				ret.s[i]++;
			}
		}
		ret.clear();
		return ret;
	}

///模、余
	bign operator % (const bign &b) const {
		bign c = *this / b;
		return *this - c * b;
	}

	bool operator < (const bign& b) const {
		if (len != b.len) return len < b.len;
		for (int i = len - 1; i >= 0; i--)
			if (s[i] != b.s[i]) return s[i] < b.s[i];
		return false;
	}
	bool operator > (const bign& b) const {
		return b < *this;
	}
	bool operator <= (const bign& b) const {
		return !(b < *this);
	}
	bool operator >= (const bign &b) const {
		return !(*this < b);
	}
	bool operator == (const bign& b) const {
		return !(b < *this) && !(*this < b);
	}
	bool operator != (const bign &a) const {
		return *this > a || *this < a;
	}
	bign operator += (const bign &a) {
		*this = *this + a;
		return *this;
	}
	bign operator -= (const bign &a) {
		*this = *this - a;
		return *this;
	}
	bign operator *= (const bign &a) {
		*this = *this * a;
		return *this;
	}
	bign operator /= (const bign &a) {
		*this = *this / a;
		return *this;
	}
	bign operator %= (const bign &a) {
		*this = *this % a;
		return *this;
	}
};

int s[1000];
int cnt;

void init() {
	int i, j;
	bool vis[1000] = {0};
	Forr(i, 2, 1000) {
		if (!vis[i]) {
			s[++cnt] = i;
			Forrr(j, i * i, 1000, i) vis[j] = true;
		}
	}
}

const int mx = 105;
bool vis[mx][mx];

int main() {
	int n, m, i, j, k, t, x;
	init();
	SII(n, m);
	Forr(i, 1, m + 1) {
		SI(x);
		Forr(j, 1, n + 1) {
			while (x % s[j] == 0) {
				x /= s[j];
				vis[j][i] = !vis[j][i];
			}
		}
	}
	k = 1;
	Forr(i, 1, m + 1) {
		Forr(j, k, n + 1) if (vis[j][i]) break;
		if (j == n + 1) continue;
		Forr(t, 1, m + 1) {
			swap(vis[j][t], vis[k][t]);
		}
		Forr(j, k + 1, n + 1) {
			if (vis[j][i]) {
				Forr(t, i, m + 1) vis[j][t] ^= vis[k][t];
			}
		}
		++k;
	}
	--k;
	bign ans(1);
	k = m - k;
	while (k--) {
		ans *= 2;
	}
	ans -= 1;
	puts(ans.str());
	return 0;
}
