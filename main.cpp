#include<bits/stdc++.h>
using namespace std;

#define Fin(f) freopen(f, "r", stdin)
#define Fout(f) freopen(f, "w", stdout)
#define SR() srand((unsigned)time(NULL))
#define random(m) ((rand() << 16 | rand()) % m) /// [0,m)֮���α�����

#define all(s) s.begin(), s.end()

#define Inter(v, s, n, b, m) v.resize(set_intersection(s, s + (n), b, b + (m), v.begin()) - v.begin())
#define SInter(v, s, n, b, m) v.resize((n) + (m)); sort(s, s + (n)); sort(b, b + (m)); Inter(v, s, n, b, m)
#define Union(v, s, n, b, m) v.resize(set_union(s, s + (n), b, b + (m), v.begin()) - v.begin());
#define SUnion(v, s, n, b, m) v.resize((n) + (m)); sort(s, s + (n)); sort(b, b + (m)); Union(v, s, n, b, m)
#define Diff(v, s, n, b, m) v.resize(set_difference(s, s + (n), b, b + (m), v.begin()) - v.begin())
#define SDiff(v, s, n, b, m) v.resize((n) + (m)); sort(s, s + (n)); sort(b, b + (m)); Diff(v, s, n, b, m)
#define Sym(v, s, n, b, m) v.resize(set_symmetric_difference(s, s + (n), b, b + (m) v.begin()) - v.begin())
#define SSym(v, s, n, b, m) v.resize((n) + (m)); sort(s, s + (n)); sort(b, b + (m)); Sym(v, s, n, b, m)

#define PB push_back
#define MP make_pair
#define Cnt1(n) (__builtin_popcount(n))
#define Cntt1(n) (__builtin_popcountll(n)) /// ��������Ϊull����
#define cb(n) (32 - __builtin_clz(n))
#define cbb(n) (64 - __builtin_clzll(n)) /// ��������Ϊull����
#define sq(x) ((x) * (x))
#define Sqrt(n) (int)sqrt(0.5 + n)

#define PB push_back
#define MP make_pair
#define all(s) s.begin(), s.end()
#define Uni(s) s.resize(unique(all(s)) - s.begin()) /// STLר��
#define SUni(s) sort(all(s)); Uni(s) /// STLר��
#define Unii(s, n) (unique(s, s + (n)) - s) /// ʹ��ǰ��sort
#define Acc(s, n) (accumulate(s, s + (n), 0)) /// ע��0LL!!!!!�Լ�0.0!!!
#define AaddB(s, n, b) transform(s, s + (n), b, s, plus<int>()) /// *���Ļ��͸�ΪFor(i, n) s[i] += b[i](ע���int i)
#define Cnt1(n) (__builtin_popcount(n))
#define Cntt1(n) (__builtin_popcountll(n)) /// ��������Ϊull����
#define cb(n) (32 - __builtin_clz(n))
#define cbb(n) (64 - __builtin_clzll(n)) /// ��������Ϊull����
#define sq(x) ((x) * (x))
#define Sqrt(n) (int)sqrt(0.5 + n)
#define mem(s, num) memset(s, num, sizeof(s))
#define cpy(to, from) memcpy(to, from, sizeof(from))
#define Rcpy(l, r, b) reverse_copy(l, r, b) /// ע��Ϊ����ҿ�����

#define For(i, n) for (i = 0; i < (n); ++i)
#define Forr(i, start, n) for (i = start; i < (n); ++i)
#define Forrr(i, start, n, step) for (i = start; i < (n); i += (step))
#define rFor(i, n) for (i = (n); i >= 0; --i)
#define rForr(i, n, end) for (i = n; i >= (end); --i)
#define rForrr(i, n, end, step) for (i = n; i >= (end); i -= (step))

#define SI(s) scanf("%d", &s)
#define SII(s, b) scanf("%d%d", &s, &b)
#define SIII(s, b, c) scanf("%d%d%d", &s, &b, &c)
#define SIIII(s, b, c, d) scanf("%d%d%d%d", &s, &b, &c, &d)
#define SIIIII(s, b, c, d, e) scanf("%d%d%d%d%d", &s, &b, &c, &d, &e)
#define SIIIIII(s, b, c, d, e, f) scanf("%d%d%d%d%d%d", &s, &b, &c, &d, &e, &f)
#define SL(s) scanf("%lld", &s)
#define SLL(s, b) scanf("%lld%lld", &s, &b)
#define SLLL(s, b, c) scanf("%lld%lld%lld", &s, &b, &c)
#define SLLLL(s, b, c, d) scanf("%lld%lld%lld%lld", &s, &b, &c, &d)
#define SD(s) scanf("%lf", &s)
#define SDD(s, b) scanf("%lf%lf", &s, &b)
#define SDDD(s, b, c) scanf("%lf%lf%lf", &s, &b, &c)
#define SDDDD(s, b, c, d) scanf("%lf%lf%lf%lf", &s, &b, &c, &d)
#define SA(s, i, n) For(i, n) scanf("%d", s + i) /// ������չ *��Ҫ�ں���Ӷ��ţ�
#define SAA(s, i, n, j, m) For(i, n) For(j, m) SI(s[i][j]) /// *��Ҫ�ں���Ӷ��ţ�
#define GC(c) (c = getchar())
#define GCn() getchar()
#define UC(c) ungetc(c, stdin)
#define SS(s) scanf("%s", s)
#define SSS(s, s2) scanf("%s%s", s, s2)
#define SC(c) scanf(" %c", &c)

#define PI(s) printf("%d\n", s)
#define PII(s, b) printf("%d %d\n", s, b)
#define PIII(s, b, c) printf("%d %d %d\n", s, b, c)
#define PIIII(s, b, c, d) printf("%d %d %d %d\n", s, b, c, d)
#define PIIIII(s, b, c, d, e) printf("%d %d %d %d %d\n", s, b, c, d, e)
#define PL(s) printf("%lld\n", s)
#define PLL(s, b) printf("%lld %lld\n", s, b)
#define PLLL(s, b, c) printf("%lld %lld %lld\n", s, b, c)
#define PD(s) printf("%f\n", s)
#define PDD(s, b) printf("%f %f\n", s, b)
#define PDDD(s, b, c) printf("%f %f %f\n", s, b, c)
#define PA(s, i, n) For(i, (n) - 1) printf("%d ", s[i]); PI(s[(n) - 1]) /// *(��ʱҪ��ǰ��ӻ�����)����Ҫ֧��STL���������ͣ��ʲ���+����ʽ����Ҫʱ���ֶ��ĳ�+
#define PAA(s, i, n, j, m) For(i, n) {For(j, (m) - 1) printf("%d ", s[i][j]); PI(s[i][(m) - 1]);}
#define PAn(s, i, n) For(i, n) PI(s[i])
#define PiA(s, i, n) For(i, n) PII(i, s[i]) /// debug��
#define rPA(s, i, n) rForr(i, n - 1, 1) printf("%d ", s[i]); PI(s[0]) /// *(��ʱҪ��ǰ��ӻ�����)
#define rPAn(s, i, n) rFor(i, n - 1) PI(s[i])
#define PC(c) putchar(c)
#define Pn() putchar(10)
#define Ps() putchar(32)

#define Uni(s) s.resize(unique(all(s)) - s.begin()) /// STLר��
#define SUni(s) sort(all(s)); Uni(s) /// STLר��
#define Unii(s, n) (unique(s, s + (n)) - s)
#define SUnii(s, n) sort(s, s + n); Unii(s, n)
#define Acc(s, n) (accumulate(s, s + (n), 0)) /// ע��0LL!!!!!�Լ�0.0!!!
#define AaddB(s, n, b) transform(s, s + (n), b, s, plus<int>()) /// *���Ļ��͸�ΪFor(i, n) s[i] += b[i](ע���int i)
#define mem(s, num) memset(s, num, sizeof(s))
#define cpy(to, from) memcpy(to, from, sizeof(from))
#define Rcpy(l, r, b) reverse_copy(l, r, b) /// ע��Ϊ����ҿ�����

#define gr() greater<int>()
#define nth(s, k, n) nth_element(s + 0, s + k, s + n) /// *����Ҫ����--k
#define nthg(s, k, n) nth_element(s + 0, s + k, s + n, greater<int>()) /// *����Ҫ����--k
#define Min(s, n) (*min_element(s, s + (n)))
#define Max(s, n) (*max_element(s, s + (n)))
#define Minpos(s, n) (min_element(s, s + (n)) - (s))
#define Maxpos(s, n) (max_element(s, s + (n)) - (s))
#define Lowpos(s, n, x) (lower_bound(s, s + (n), x) - (s))
#define Upppos(s, n, x) (upper_bound(s, s + (n), x) - (s))
#define BS(s, n, x) binary_search(s, s + (n), x) /// ����boolֵ
#define Range(s, n, x) equal_range(s, s + (n), x) /// ����pair
#define Fpos(s, n, x) (find(s, s + (n), x) - (s))
#define Fd(s, x) (find(all(s), x) != s.end())

const int inf = 0x3f3f3f3f; /// 1.06e9 (INT_MAXΪ2.147e9)
const long long llinf = 0x3f3f3f3f3f3f3f3fLL; /// 4.56e18 (LLONG_MAXΪ9.22e18)
const double pi = acos(-1.0);
//const double tens[11] = {0.0, 1e-1, 1e-2, 1e-3, 1e-4, 1e-5, 1e-6, 1e-7, 1e-8, 1e-9, 1e-10};
//double fgcd(double s, double b) {return fabs(b) > eps ? fgcd(b, fmod(s, b)) : s;}

//const int dir[4][2] = {1, 0, 0, 1, -1, 0, 0, -1};
//const int dirr[8][2] = {1, 0, 1, 1, 0, 1, -1, 1, -1, 0, -1, -1, 0, -1, 1, -1};
//const int knight_dir[8][2] = {1, 2, 1, -2, -1, 2, -1, -2, 2, 1, 2, -1, -2, 1, -2, -1};

/// ����ʹ�����¼�ӱ����֣�rank, tm,time, write, j0,j1,jn,y0,y1,yn
/// �����gets(s), GC(ch)����WA�Ļ�������SS(s), scanf(" %c ", &ch)����
/// ��main()�д�����ʼ��STL������������
/// ע��strncpy�����β0�����ֶ����
/// ���λ�ò��������stable_sort(s, s + n);
/// C++�������������ת������G++����
/*G++��ջ
int __size__ = 256 << 20; // 256MB
char *__p__ = (char*)malloc(__size__) + __size__;
__asm__("movl %0, %%esp\n" :: "r"(__p__));
*/
//ios_base::sync_with_stdio(false);

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef vector<int>::iterator viter;
typedef set<ll>::iterator siter;
typedef map<int, int>::iterator miter;
typedef multiset<int>::iterator msiter;
typedef multimap<int, int>::iterator mmter;
typedef priority_queue<int> pqi;
typedef pair<int, int> p2; /// ��ֵʱֱ��SII(s[i].x, s[i].y)����, ��ʱ����LL
typedef pair<pair<int, int>, int> p3;
typedef pair<int, pair<int, int> > pi3;
//#define x first
//#define y second
//#define MT(s, b, c) make_pair(make_pair(s, b), c)
#define loop(it, a) for (it = a.begin(); it != a.end(); ++it)

//const double eps = 1e-8;
//const ll mod = ll(1e9) + 7; /// *��int
#define Pcas() printf("Case %d: ", ++cas) /// *ע��C�Ĵ�Сд

const int mxn = int(1e3);

set<ll> s;

inline ll f(ll a, ll b)
{
	return a * b + (a + b);
}

int init_closure(ll a0, ll a1)
{
    Pn();
	// PLL(a0,a1);
	s.clear();
	s.insert(a0), s.insert(a1);
	ll tmp;
	siter it, it2;
	loop(it, s) loop(it2, s)
	{
		//  PL(tmp);
		tmp = f(*it, *it2);
		if (tmp > mxn) break;
		s.insert(tmp);
	}
	loop(it, s) PL(*it);

	return s.size();
}

int main()
{
	int i;
	Forr(i, 2, 10) PI(init_closure(1, i));
	return 0;
}
