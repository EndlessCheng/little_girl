#include<bits/stdc++.h>
using namespace std;

#define tm ttttttt
#define j0 jjjjjjj
#define j1 jjjjjjjj
#define jn jjjjjjjjj
#define y0 yyyyyyy
#define y1 yyyyyyyy
#define yn yyyyyyyyy
#define arg aaaaaaa

#define Fin(f) freopen(f, "r", stdin)
#define Fout(f) freopen(f, "w", stdout)
#define SR() srand((unsigned)time(NULL))
#define random(m) ((rand() << 16 | rand()) % m) // [0,m)֮���α�����
#define randomP(l, n) srand((unsigned)time(NULL)), random_shuffle(l, l + (n))
#define AS(l) assert(l)

#define all(l) l.begin(), l.end()
#define PB push_back
#define sq(x) ((x) * (x))
#define Sqrt(n) (int)round(sqrt((double)n))

// ע���ڵ���ǰvһ��Ҫ�������Ŀռ�
#define Inter(o, l, n, r, m) o.resize(set_intersection(l, l + (n), r, r + (m), o.begin()) - o.begin())
#define SInter(o, l, n, r, m) o.resize((n) + (m)); sort(l, l + (n)); sort(r, r + (m)); Inter(o, l, n, r, m)
#define Union(o, l, n, r, m) o.resize(set_union(l, l + (n), r, r + (m), o.begin()) - o.begin());
#define SUnion(o, l, n, r, m) o.resize((n) + (m)); sort(l, l + (n)); sort(r, r + (m)); Union(o, l, n, r, m)
#define Diff(o, l, n, r, m) o.resize(set_difference(l, l + (n), r, r + (m), o.begin()) - o.begin())
#define SDiff(o, l, n, r, m) o.resize((n) + (m)); sort(l, l + (n)); sort(r, r + (m)); Diff(o, l, n, r, m)
#define Sym(o, l, n, r, m) o.resize(set_symmetric_difference(l, l + (n), r, r + (m) o.begin()) - o.begin())
#define SSym(o, l, n, r, m) o.resize((n) + (m)); sort(l, l + (n)); sort(r, r + (m)); Sym(o, l, n, r, m)

#define setInter(l, r, to) set_intersection(all(l), all(r), inserter(to, to.begin()))
#define setUnion(l, r, to) set_union(all(l), all(r), inserter(to, to.begin()))

#define Cnt1 __builtin_popcount /// Cnt1ll����ull����
#define LBpos(n) (31 - __builtin_clz(n))
#define LBposll(n) (63 - __builtin_clzll(n))
#define RBpos(n) (__builtin_ffs(n) - 1)
#define RBposll(n) (__builtin_ffsll(n) - 1)

#define For(i, n) for (i = 0; i < (n); ++i)
//#define For(i, n) for (int i = 0, _ = (n); i < _; ++i)
#define Forr(i, start, n) for (i = start; i < (n); ++i)
#define Forrr(i, start, n, step) for (i = start; i < (n); i += step)
#define rFor(i, n) for (i = (n); i >= 0; --i)
#define rForr(i, n, end) for (i = n; i >= (end); --i)
#define rForrr(i, n, end, step) for (i = n; i >= (end); i -= step)
#define loop(it, l) for (it = l.begin(); it != l.end(); ++it)
#define rloop(it, l) for (it = l.rbegin(); it != l.rend(); ++it)

#define SI(l) scanf("%d", &l)
#define SII(l, r) scanf("%d%d", &l, &r)
#define SIII(l, r, c) scanf("%d%d%d", &l, &r, &c)
#define SIIII(l, r, c, d) scanf("%d%d%d%d", &l, &r, &c, &d)
#define SIIIII(l, r, c, d, e) scanf("%d%d%d%d%d", &l, &r, &c, &d, &e)
#define SIIIIII(l, r, c, d, e, f) scanf("%d%d%d%d%d%d", &l, &r, &c, &d, &e, &f)
#define SL(l) scanf("%lld", &l)
#define SLL(l, r) scanf("%lld%lld", &l, &r)
#define SLLL(l, r, c) scanf("%lld%lld%lld", &l, &r, &c)
#define SLLLL(l, r, c, d) scanf("%lld%lld%lld%lld", &l, &r, &c, &d)
#define SD(l) scanf("%lf", &l)
#define SDD(l, r) scanf("%lf%lf", &l, &r)
#define SDDD(l, r, c) scanf("%lf%lf%lf", &l, &r, &c)
#define SDDDD(l, r, c, d) scanf("%lf%lf%lf%lf", &l, &r, &c, &d)
#define SA(l, i, n) For(i, n) scanf("%d", l + i) // ������չ *��Ҫ�ں���Ӷ��ţ�
#define SAA(l, i, n, j, m) For(i, n) For(j, m) SI(l[i][j]) // *��Ҫ�ں���Ӷ��ţ�
#define SAA1(l, i, n, j, m) Forr(i, 1, n + 1) Forr(j, 1, m + 1) SI(l[i][j]) // *��Ҫ�ں���Ӷ��ţ�
#define SS(s) scanf("%s", s)
#define SSS(s, s2) scanf("%s%s", s, s2)
#define SC(c) scanf(" %c", &c)
#define GC(c) (c = getchar())
#define Gn() getchar()
#define UC(c) ungetc(c, stdin)

#define PI(l) printf("%d\n", l)
#define PII(l, r) printf("%d %d\n", l, r)
#define PIII(l, r, c) printf("%d %d %d\n", l, r, c)
#define PIIII(l, r, c, d) printf("%d %d %d %d\n", l, r, c, d)
#define PIIIII(l, r, c, d, e) printf("%d %d %d %d %d\n", l, r, c, d, e)
#define PL(l) printf("%lld\n", l)
#define PLL(l, r) printf("%lld %lld\n", l, r)
#define PLLL(l, r, c) printf("%lld %lld %lld\n", l, r, c)
#define PD(l) printf("%f\n", l)
#define PDD(l, r) printf("%f %f\n", l, r)
#define PDDD(l, r, c) printf("%f %f %f\n", l, r, c)
#define PA(l, i, n) For(i, (n) - 1) printf("%d ", l[i]); PI(l[(n) - 1]) // *(��ʱҪ��ǰ��ӻ�����)����Ҫ֧��STL���������ͣ��ʲ���+����ʽ����Ҫʱ���ֶ��ĳ�+
#define PAA(l, i, n, j, m) For(i, n) {For(j, (m) - 1) printf("%d ", l[i][j]); PI(l[i][(m) - 1]);}
#define PAn(l, i, n) For(i, n) PI(l[i])
#define rPA(l, i, n) rForr(i, n - 1, 1) printf("%d ", l[i]); PI(l[0]) // *(��ʱҪ��ǰ��ӻ�����)
#define rPAn(l, i, n) rFor(i, n - 1) PI(l[i])
#define PC(c) putchar(c)
#define Pn() putchar(10)
#define Ps() putchar(32)

#define Uni(l) l.resize(unique(all(l)) - l.begin()) // STLר��
#define SUni(l) sort(all(l)); Uni(l) // STLר��
#define Unii(l, n) (unique(l, l + (n)) - l)
#define SUnii(l, n) sort(l, l + n); Unii(l, n)
#define Acc(l, n) (accumulate(l, l + (n), 0)) /// ����Acc(l.begin(), k); *ע��0LL�Լ�0.0��
#define Accv(l) (accumulate(all(l), 0)) // *ע��0LL�Լ�0.0��
#define AaddB(l, n, r) transform(l, l + (n), r, l, plus<int>()) // *���Ļ��͸�ΪFor(i, n) l[i] += r[i](ע���int i)
#define mem(l, num) memset(l, num, sizeof(l))
#define cpy(to, from) memcpy(to, from, sizeof(from))
//#define Rcpy(l, r, r) reverse_copy(l, r, r) // ע��Ϊ����ҿ�����
#define kTo10(ans, str, s, m, k) strncpy(str, s, m), str[m] = 0, ans = strtol(str, NULL, k)

#define LE(T) less_equal<T>
#define GR(T) greater<T>
#define GE(T) greater_equal<T>
#define NET(T) not_equal_to<T>

#define nth(l, k, n) nth_element(l + 0, l + k, l + n) // *����Ҫ����--k
#define nthg(l, k, n) nth_element(l + 0, l + k, l + n, greater<int>()) // *����Ҫ����--k
#define Min(l, n) (*min_element(l, l + (n)))
#define Max(l, n) (*max_element(l, l + (n)))
#define Minpos(l, n) (min_element(l, l + (n)) - (l))
#define Maxpos(l, n) (max_element(l, l + (n)) - (l))
#define Lval(l, n, x) (*lower_bound(l, l + (n), x))
#define Uval(l, n, x) (*upper_bound(l, l + (n), x))
#define Lpos(l, n, x) (lower_bound(l, l + (n), x) - (l)) // *�Ӹ�gr()���<=
#define Upos(l, n, x) (upper_bound(l, l + (n), x) - (l)) // *�Ӹ�gr()���<
//#define BS(l, n, x) binary_search(l, l + (n), x) // ����boolֵ
#define Range(l, n, x) equal_range(l, l + (n), x) // ����pair
#define Fpos(l, n, x) (find(l, l + (n), x) - (l))
#define Fd(l, x) (l.find(x) != l.end())
#define Fdd(l, x) (find(all(l), x) != l.end())
template<class T> inline void Qmin(T &l, const T r) {if (r < l) l = r;}
template<class T> inline void Qmax(T &l, const T r) {if (l < r) l = r;} // *������λ�ã����ϵȺ�
inline int Qceil(int x, int y) {return x ? (x - 1) / y + 1 : 0;} // *ע�����͡�y����Ϊ��

const int inf = 0x3f3f3f3f; // 1.06e9 (INT_MAXΪ2.147e9)
const long long llinf = 0x3f3f3f3f3f3f3f3fLL; // 4.56e18 (LLONG_MAXΪ9.22e18)
const double pi = acos(-1.0);
//const double tens[11] = {0.0, 1e-1, 1e-2, 1e-3, 1e-4, 1e-5, 1e-6, 1e-7, 1e-8, 1e-9, 1e-10};
//double fgcd(double l, double r) {return fabs(r) > eps ? fgcd(r, fmod(l, r)) : l;}

//const int dir[4][2] = {1, 0, 0, 1, -1, 0, 0, -1};
//const int dirr[8][2] = {1, 0, 1, 1, 0, 1, -1, 1, -1, 0, -1, -1, 0, -1, 1, -1};
//const int knight_dir[8][2] = {1, 2, 1, -2, -1, 2, -1, -2, 2, 1, 2, -1, -2, 1, -2, -1};

// INT_MAX = -1u >> 1
// �����gets(s), GC(ch)����WA�Ļ�������SS(s), SC(ch)����
// ��main()�д�����ʼ��STL������������
// ��Ҫ���� val[i] = ++i ������δ�������Ϊ��
// ע��strncpy�����β0�����ֶ����
// ���λ�ò��������stable_sort(l, l + n);
// advance(it, n); �൱�� For(i, n) ++it; ��������O(1)��
// size()��ui���͵ģ�Ӧ��(int)xx.size()

/*G++��ջ
int __size__ = 256 << 20; // 256MB
char *__p__ = (char*)malloc(__size__) + __size__;
__asm__("movl %0, %%esp\n" :: "r"(__p__));
*/

//ios_base::sync_with_stdio(false);
#define _set() cout.precision(15)//, cout.setf(ios::hex, ios::basefield), cout.setf(ios::showbase)
#define _unset() cout.unsetf(ios::floatfield)//, cout.unsetf(ios::hex), cout.unsetf(ios::showbase)
#define DI(l) _set(), printf(#l" = "), cout << (l) << endl, _unset()
#define DII(l, r) _set(), printf(#l" = "), cout << (l), printf(", "#r" = "), cout << (r) << endl, _unset()
#define DIII(l, r, c) _set(), printf(#l" = "), cout << (l), printf(", "#r" = "), cout << (r), printf(", "#c" = "), cout << (c) << endl, _unset()
#define DIIII(l, r, c, d) _set(), printf(#l" = "), cout << (l), printf(", "#r" = "), cout << (r), printf(", "#c" = "), cout << (c), printf(", "#d" = "), cout << (d) << endl, _unset()
#define DA(l, i, n) For(i, n) printf(#l"[%2d] = ", i), cout << l[i] << endl
#define DAA(l, i, n, j, m) For(i, n) For(j, m) printf(#l"[%2d][%2d] = ", i, j), cout << l[i][j] << endl

// *�޸�ģ�����
typedef unsigned int ui;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<int, int> p2;
typedef pair<pair<int, int>, int> p3;
typedef pair<int, pair<int, int> > pi3;
typedef vector<int>::iterator viter;
typedef set<int>::iterator siter;
typedef map<int, int>::iterator miter;
typedef multiset<int>::iterator msiter;
typedef multimap<int, int>::iterator mmter;
typedef priority_queue<int> pq;
typedef priority_queue<int, vector<int>, greater<int> > spq; // С����top
#define MT(l, r, c) p3(p2(l, r), c)
//#define MT(l, r, c) p3(l, p2(r, c))
//#define x first
//#define y second
//p2 operator + (const p2 &l, const p2 &r) {return p2(l.x + r.x, l.y + r.y);}
//p2 operator += (p2 &l, const p2 &r) {return l = l + r;}

//const double eps = 1e-8;
//const ll mod = ll(1e9) + 7; // *��int
//inline bool okC(char &c) {return c = getchar(), c != 10 && ~c;} //return (c = getchar()) == 32;
//inline bool okS(char *s) {return s = gets(s), s && *s;}
//ll gcd(ll l, ll r){return r ? gcd(r, l % r) : l;}
//int gcd(int l, int r){return r ? gcd(r, l % r) : l;}
//ll lcm(ll l, ll r){return l / gcd(l, r) * r;}
//template<class T> inline T _len(T x) {T cnt = 0; for (; x; ++cnt, x /= 10); return cnt;}
//template<class T> inline T isSQ(T n) {T tmp = Sqrt(n); return sq(tmp) == n ? tmp : 0;} // ����ӦΪ����
//inline bool isint(double x) {return fabs(x - round(x)) < eps;}
//inline int sign(double x) {return x < -eps ? -1 : x > eps;}
//struct comp {bool operator()(const double &l, const double &r)const {return l + eps < r;}};
#define TT int tttt; scanf("%d%*c", &tttt); while(tttt--) // TT{ ... }
#define Pcas() printf("Case %d: ", ++cas) // *ע��C�Ĵ�Сд�������ע��ȥ�ո�
int cas;






const int mx = 1e5 + 5;


/* 0.178s */
struct node
{
	int l, r, maxh;
	bool isLeaf;
	node() {}
	node(int l, int r, int h, bool f = true) : l(l), r(r), maxh(h), isLeaf(f) {}
} v[2000005];

#define lo (o << 1)
#define ro ((o << 1) | 1)

inline void D(int o, int x)
{
	v[o].isLeaf = false;
	v[lo] = node(v[o].l, x, v[o].maxh);
	v[ro] = node(x, v[o].r, v[o].maxh); // ��̬���ڵ�
}

int U(int o, int l, int r, int h)
{
	Qmax(l, v[o].l), Qmin(r, v[o].r);
	if (l >= r) return 0;
	if (!v[o].isLeaf) return U(lo, l, r, h) + U(ro, l, r, h);
	if (h < v[o].maxh) return 0;
	if (v[o].l < l) return D(o, l), U(o, l, r, h);
	if (v[o].r > r) return D(o, r), U(o, l, r, h);
	v[o].maxh = h;
	return r - l;
}

int main()
{
	int n, sum, l, r, h;
	scanf("%*d");
	while (SI(n), n)
	{
		v[1] = node(1, 100000, 0);
		sum = 0;
		while (n--) SIII(l, r, h), sum += U(1, l, r, h);
		PI(sum);
	}
	return 0;
}
