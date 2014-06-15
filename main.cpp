/*
* this code is made by endless
* Problem: 1107
* Verdict: Accepted
* Submission Date: 2014-06-14 22:44:01
* Time: 0 MS
* Memory: 1688 KB
*/
#include<bits/stdc++.h>
using namespace std;

#define Inter(v, a, n, b, m) v.resize(set_intersection(a, a + (n), b, b + (m), v.begin()) - v.begin())
#define SInter(v, a, n, b, m) v.resize((n) + (m)); sort(a, a + (n)); sort(b, b + (m)); Inter(v, a, n, b, m)
#define Union(v, a, n, b, m) v.resize(set_union(a, a + (n), b, b + (m), v.begin()) - v.begin());
#define SUnion(v, a, n, b, m) v.resize((n) + (m)); sort(a, a + (n)); sort(b, b + (m)); Union(v, a, n, b, m)
#define Diff(v, a, n, b, m) v.resize(set_difference(a, a + (n), b, b + (m), v.begin()) - v.begin())
#define SDiff(v, a, n, b, m) v.resize((n) + (m)); sort(a, a + (n)); sort(b, b + (m)); Diff(v, a, n, b, m)
#define Sym(v, a, n, b, m) v.resize(set_symmetric_difference(a, a + (n), b, b + (m) v.begin()) - v.begin())
#define SSym(v, a, n, b, m) v.resize((n) + (m)); sort(a, a + (n)); sort(b, b + (m)); Sym(v, a, n, b, m)

typedef long long ll;
#define PB push_back
#define MP make_pair
#define all(a) a.begin(), a.end()
#define Uni(a) a.resize(unique(all(a)) - a.begin()) /// STLר��
#define SUni(a) sort(all(a)); Uni(a) /// STLר��
#define Unii(a, n) (unique(a, a + (n)) - a) /// ʹ��ǰ��sort
#define Acc(a, n) (accumulate(a, a + (n), 0)) /// ע��0LL!!!!!�Լ�0.0!!!
#define AaddB(a, n, b) transform(a, a + (n), b, a, plus<int>()) /// *���Ļ��͸�ΪFor(i, n) a[i] += b[i](ע���int i)
#define Cnt1(n) (__builtin_popcount(n))
#define Cntt1(n) (__builtin_popcountll(n)) /// ��������Ϊull����
#define cb(n) (32 - __builtin_clz(n))
#define cbb(n) (64 - __builtin_clzll(n)) /// ��������Ϊull����
#define sq(x) ((x) * (x))
#define Sqrt(n) (int)sqrt(0.5 + n)
#define mem(a, num) memset(a, num, sizeof(a))
#define cpy(to, from) memcpy(to, from, sizeof(from))
#define Rcpy(l, r, b) reverse_copy(l, r, b) /// ע��Ϊ����ҿ�����

typedef unsigned long long ull;
#define gr() greater<int>()
#define nth(a, k, n) nth_element(a + 0, a + k, a + n) /// *����Ҫ����--k
#define nthg(a, k, n) nth_element(a + 0, a + k, a + n, greater<int>()) /// *����Ҫ����--k
#define Min(a, n) (*min_element(a, a + (n)))
#define Max(a, n) (*max_element(a, a + (n)))
#define Minpos(a, n) (min_element(a, a + (n)) - (a))
#define Maxpos(a, n) (max_element(a, a + (n)) - (a))
#define Lowpos(a, x) (lower_bound(all(a), x) - (a.begin()))
#define Upppos(a, x) (upper_bound(all(a), x) - (a.begin()))
#define BS(a, n, x) binary_search(a, a + (n), x) /// ����boolֵ
#define Range(a, n, x) equal_range(a, a + (n), x) /// ����pair
#define Fpos(a, x) (find(all(a), x) - (a.begin()))

typedef vector<int>::iterator viter;
#define For(i, n) for (i = 0; i < (n); ++i)
#define Forr(i, start, n) for (i = start; i < (n); ++i)
#define Forrr(i, start, n, step) for (i = start; i < (n); i += (step))
#define rFor(i, n) for (i = (n); i >= 0; --i)
#define rForr(i, n, end) for (i = n; i >= (end); --i)
#define rForrr(i, n, end, step) for (i = n; i >= (end); i -= (step))
#define loop(a) for (it = a.begin(); it != a.end(); ++it)

typedef set<int>::iterator siter;
typedef map<int, int>::iterator miter;
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
#define SA(a, i, n) For(i, n) scanf("%d", a + i) /// ������չ *��Ҫ�ں���Ӷ��ţ�
#define SAA(a, i, n, j, m) For(i, n) For(j, m) SI(a[i][j]) /// *��Ҫ�ں���Ӷ��ţ�
#define GC(c) (c = getchar())
#define GCn() getchar()
#define UC(c) ungetc(c, stdin)
#define SS(s) scanf("%s", s)
#define SSS(s, s2) scanf("%s%s", s, s2)

typedef multiset<int>::iterator msiter;
typedef multimap<int, int>::iterator mmter;
#define PI(a) printf("%d\n", a)
#define PII(a, b) printf("%d %d\n", a, b)
#define PIII(a, b, c) printf("%d %d %d\n", a, b, c)
#define PIIII(a, b, c, d) printf("%d %d %d %d\n", a, b, c, d)
#define PL(a) printf("%lld\n", a)
#define PLL(a, b) printf("%lld %lld\n", a, b)
#define PLLL(a, b, c) printf("%lld %lld %lld\n", a, b, c)
#define PD(a) printf("%f\n", a)
#define PDD(a, b) printf("%f %f\n", a, b)
#define PDDD(a, b, c) printf("%f %f %f\n", a, b, c)
#define PA(a, i, n) For(i, (n) - 1) printf("%d ", a[i]); PI(a[(n) - 1]) /// *(��ʱҪ��ǰ��ӻ�����)����Ҫ֧��STL���������ͣ��ʲ���+����ʽ����Ҫʱ���ֶ��ĳ�+
#define PAA(a, i, n, j, m) For(i, n) {For(j, (m) - 1) printf("%d ", a[i][j]); PI(a[i][(m) - 1]);}
#define PAn(a, i, n) For(i, n) PI(a[i])
#define PiA(a, i, n) For(i, n) PII(i, a[i]) /// debug��
#define rPA(a, i, n) rForr(i, n - 1, 1) printf("%d ", a[i]); PI(a[0]) /// *(��ʱҪ��ǰ��ӻ�����)
#define rPAn(a, i, n) rFor(i, n - 1) PI(a[i])
#define PC(c) putchar(c)
#define Pn() putchar(10)
#define Ps() putchar(32)

#define FI freopen("in.txt", "r", stdin)
#define FO freopen("out.txt", "w", stdout)
#define Fin(f) freopen(f, "r", stdin) /// ���ֶ���.in
#define Fout(f) freopen(f, "w", stdout) /// ���ֶ���.out
#define random(m) ((rand() << 16 | rand()) % m) /// [0,m)֮���α�����
#define SR() srand((unsigned)time(NULL))

typedef long double ld;
const int inf = 0x3f3f3f3f; /// 1.06e9 (INT_MAXΪ2.147e9)
const long long llinf = 0x3f3f3f3f3f3f3f3fLL; /// 4.56e18 (LLONG_MAXΪ9.22e18)
const double pi = acos(-1.0);
//const double tens[11] = {0.0, 1e-1, 1e-2, 1e-3, 1e-4, 1e-5, 1e-6, 1e-7, 1e-8, 1e-9, 1e-10};
//double fgcd(double a, double b) {return fabs(b) > eps ? fgcd(b, fmod(a, b)) : a;}

//const int dir[4][2] = {1, 0, 0, 1, -1, 0, 0, -1};
//const int dirr[8][2] = {1, 0, 1, 1, 0, 1, -1, 1, -1, 0, -1, -1, 0, -1, 1, -1};
//const int knight_dir[8][2] = {1, 2, 1, -2, -1, 2, -1, -2, 2, 1, 2, -1, -2, 1, -2, -1};

/// ����ʹ�����¼�ӱ����֣�rank, tm,time, write, j0,j1,jn,y0,y1,yn
/// �����gets(s), GC(ch)����WA�Ļ�������SS(s), scanf(" %c ", &ch)����
/// ��main()�д�����ʼ��STL������������
/// ע��strncpy�����β0�����ֶ����
/// ���λ�ò��������stable_sort(a, a + n);
/// C++�������������ת������G++����
/*G++��ջ
int __size__ = 256 << 20; // 256MB
char *__p__ = (char*)malloc(__size__) + __size__;
__asm__("movl %0, %%esp\n" :: "r"(__p__));
*/
//ios_base::sync_with_stdio(false);

typedef pair<ll, ll> p2; /// ��ֵʱֱ��SII(a[i].x, a[i].y)����, ��ʱ����LL
typedef pair<pair<int, int>, int> p3;
typedef pair<int, pair<int, int> > pi3;
#define x first
#define y second
//#define MT(a, b, c) make_pair(make_pair(a, b), c)

typedef priority_queue<int> pqi;
const double eps = 1e-6;
//const ll mod = ll(1e9) + 7;
#define Pcas() printf("Case %d: ", ++cas) /// *ע��C�Ĵ�Сд
const int mx = int(1e3) + 5;

ll xx, yy;
vector<p2> p;

void init()
{
    int n;
	ll xi, yi;
	SLL(xx, yy), p.PB(MP(xx, yy));
	SI(n);
	while (n--) SLL(xi, yi), p.PB(MP(xi, yi));
}

bool ok(vector<p2> &p)
{
	SUni(p);
	int n = p.size();
	if (n == 1) return true;
	if (p[0] != MP(xx, yy) && p.back() != MP(xx, yy)) return false; /// �����㲻�ڿ�ͷ��β
	if (p.back() == MP(xx, yy)) reverse(all(p));
	int i;
	For(i, n - 1) if (p[i].x == p[i + 1].x) return false;
	ll a1 = sq(p[1].x) - sq(xx), b1 = p[1].x - xx, c1 = p[1].y - yy;
	ll a2 = sq(p[2].x) - sq(xx), b2 = p[2].x - xx, c2 = p[2].y - yy;
	/// *���a2���Ѿ��ܴ��ˣ������滹�Ǹ�Ϊdouble��
	ll d = a1 * b2 - a2 * b1, d1 = -(c2 * b1 - c1 * b2), d2 = a1 * c2 - a2 * c1;
	if (d == 0 || d1 == 0 || d < 0 && d1 < 0 || d > 0 && d1 > 0) return false;
	double tmpp, aa, bb, cc;
	Forr(i, 3, n)
	{
		aa = sq(p[i].x) - sq(xx), bb = p[i].x - xx, cc = p[i].y - yy;
		tmpp = aa * d1 + bb * d2 - cc * d;
		if (fabs(tmpp) > eps) return false;
	}
	return true;
}

int main()
{
	init();
	puts(ok(p) ? "Yes" : "No");
	return 0;
}
