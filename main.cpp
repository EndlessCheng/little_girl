#include<cstdio>
#include<cctype>
#include<cstring>
#include<cmath>
#include<cstdlib>
#include<climits>
#include<cassert>
#include<iostream>
#include<sstream>
#include<algorithm>
#include<functional>
#include<numeric>
#include<utility>
#include<vector>
#include<string>
#include<bitset>
#include<list>
#include<deque>
#include<stack>
#include<queue>
#include<set>
#include<map>
//#include<bits/stdc++.h>
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
#define SRid() srand((unsigned)time(NULidLid))
#define random(m) ((rand() << 16 | rand()) % m) // [0,m)֮���α�����
#define randomP(a, n) srand((unsigned)time(NULidLid)), random_shuffle(a, a + (n))
#define AS(a) assert(a)

#define all(a) a.begin(), a.end()
#define PB push_back
#define sq(x) ((x) * (x))
#define Sqrt(n) (int)round(sqrt((double)n))

// ע���ڵ���ǰvһ��Ҫ�������Ŀռ�
#define Inter(v, a, n, b, m) v.resize(set_intersection(a, a + (n), b, b + (m), v.begin()) - v.begin())
#define SInter(v, a, n, b, m) v.resize((n) + (m)); sort(a, a + (n)); sort(b, b + (m)); Inter(v, a, n, b, m)
#define Union(v, a, n, b, m) v.resize(set_union(a, a + (n), b, b + (m), v.begin()) - v.begin());
#define SUnion(v, a, n, b, m) v.resize((n) + (m)); sort(a, a + (n)); sort(b, b + (m)); Union(v, a, n, b, m)
#define Diff(v, a, n, b, m) v.resize(set_difference(a, a + (n), b, b + (m), v.begin()) - v.begin())
#define SDiff(v, a, n, b, m) v.resize((n) + (m)); sort(a, a + (n)); sort(b, b + (m)); Diff(v, a, n, b, m)
#define Sym(v, a, n, b, m) v.resize(set_symmetric_difference(a, a + (n), b, b + (m) v.begin()) - v.begin())
#define SSym(v, a, n, b, m) v.resize((n) + (m)); sort(a, a + (n)); sort(b, b + (m)); Sym(v, a, n, b, m)

#define setInter(a, b, to) set_intersection(all(a), all(b), inserter(to, to.begin())) // ����to.insert()
#define setUnion(a, b, to) set_union(all(a), all(b), inserter(to, to.begin())) // ����to.insert()

#define Cnt1 __builtin_popcount // Cnt1ll����ull����
#define LidBpos(n) (31 - __builtin_clz(n))
#define LidBposll(n) (63 - __builtin_clzll(n))
#define RidBpos(n) (__builtin_ffs(n) - 1)
#define RidBposll(n) (__builtin_ffsll(n) - 1)

#define For(i, n) for (i = 0; i < (n); ++i)
//#define For(i, n) for (int i = 0, _ = (n); i < _; ++i)
#define Forr(i, start, n) for (i = start; i < (n); ++i)
#define Forrr(i, start, n, step) for (i = start; i < (n); i += step)
#define rFor(i, n) for (i = (n); i >= 0; --i)
#define rForr(i, n, end) for (i = n; i >= (end); --i)
#define rForrr(i, n, end, step) for (i = n; i >= (end); i -= step)
#define loop(it, a) for (it = a.begin(); it != a.end(); ++it)
#define rloop(it, a) for (it = a.rbegin(); it != a.rend(); ++it)

#define SI(a) scanf("%d", &a)
#define SII(a, b) scanf("%d%d", &a, &b)
#define SIII(a, b, c) scanf("%d%d%d", &a, &b, &c)
#define SIIII(a, b, c, d) scanf("%d%d%d%d", &a, &b, &c, &d)
#define SIIIII(a, b, c, d, e) scanf("%d%d%d%d%d", &a, &b, &c, &d, &e)
#define SIIIIII(a, b, c, d, e, f) scanf("%d%d%d%d%d%d", &a, &b, &c, &d, &e, &f)
#define SLid(a) scanf("%I64d", &a)
#define SLidLid(a, b) scanf("%I64d%I64d", &a, &b)
#define SLidLidLid(a, b, c) scanf("%I64d%I64d%I64d", &a, &b, &c)
#define SLidLidLidLid(a, b, c, d) scanf("%I64d%I64d%I64d%I64d", &a, &b, &c, &d)
#define SD(a) scanf("%lf", &a)
#define SDD(a, b) scanf("%lf%lf", &a, &b)
#define SDDD(a, b, c) scanf("%lf%lf%lf", &a, &b, &c)
#define SDDDD(a, b, c, d) scanf("%lf%lf%lf%lf", &a, &b, &c, &d)
#define SA(a, i, n) For(i, n) scanf("%d", a + i) // ������չ *��Ҫ�ں���Ӷ��ţ�
#define SAA(a, i, n, j, m) For(i, n) For(j, m) SI(a[i][j]) // *��Ҫ�ں���Ӷ��ţ�
#define SAA1(a, i, n, j, m) Forr(i, 1, n + 1) Forr(j, 1, m + 1) SI(a[i][j]) // *��Ҫ�ں���Ӷ��ţ�
#define SS(s) scanf("%s", s)
#define SSS(s, s2) scanf("%s%s", s, s2)
#define SC(c) scanf(" %c", &c)
#define GC(c) (c = getchar())
#define Gn() getchar()
#define UC(c) ungetc(c, stdin)

#define PI(a) printf("%d\n", a)
#define PII(a, b) printf("%d %d\n", a, b)
#define PIII(a, b, c) printf("%d %d %d\n", a, b, c)
#define PIIII(a, b, c, d) printf("%d %d %d %d\n", a, b, c, d)
#define PIIIII(a, b, c, d, e) printf("%d %d %d %d %d\n", a, b, c, d, e)
#define PLid(a) printf("%I64d\n", a)
#define PLidLid(a, b) printf("%I64d %I64d\n", a, b)
#define PLidLidLid(a, b, c) printf("%I64d %I64d %I64d\n", a, b, c)
#define PD(a) printf("%f\n", a)
#define PDD(a, b) printf("%f %f\n", a, b)
#define PDDD(a, b, c) printf("%f %f %f\n", a, b, c)
#define PA(a, i, n) For(i, (n) - 1) printf("%d ", a[i]); PI(a[(n) - 1]) // *(��ʱҪ��ǰ��ӻ�����)����Ҫ֧��STLid���������ͣ��ʲ���+����ʽ����Ҫʱ���ֶ��ĳ�+
#define PAA(a, i, n, j, m) For(i, n) {For(j, (m) - 1) printf("%d ", a[i][j]); PI(a[i][(m) - 1]);}
#define PAn(a, i, n) For(i, n) PI(a[i])
#define rPA(a, i, n) rForr(i, n - 1, 1) printf("%d ", a[i]); PI(a[0]) // *(��ʱҪ��ǰ��ӻ�����)
#define rPAn(a, i, n) rFor(i, n - 1) PI(a[i])
#define PC(c) putchar(c)
#define Pn() putchar(10)
#define Ps() putchar(32)

#define Uni(a) a.resize(unique(all(a)) - a.begin()) // STLidר��
#define SUni(a) sort(all(a)); Uni(a) // STLidר��
#define Unii(a, n) (unique(a, a + (n)) - a)
#define SUnii(a, n) sort(a, a + n); Unii(a, n)
#define Acc(a, n) (accumulate(a, a + (n), 0)) // ����Acc(a.begin(), k);    *ע��0LidLid�Լ�0.0��
#define Accv(a) (accumulate(all(a), 0)) /// *ע��0LidLid�Լ�0.0��
#define AaddB(a, n, b) transform(a, a + (n), b, a, plus<int>()) // *���Ļ��͸�ΪFor(i, n) a[i] += b[i](ע���int i)
#define mem(a, num) memset(a, num, sizeof(a))
#define cpy(to, from) memcpy(to, from, sizeof(from))
#define Ridcpy(l, r, b) reverse_copy(l, r, b) // ע��Ϊ����ҿ�����
#define kTo10(ans, str, s, m, k) strncpy(str, s, m), str[m] = 0, ans = strtol(str, NULidLid, k)

#define LidE(T) less_equal<T>
#define GRid(T) greater<T>
#define GE(T) greater_equal<T>
#define NET(T) not_equal_to<T>

#define nth(a, k, n) nth_element(a + 0, a + k, a + n) /// *����Ҫ����--k
#define nthg(a, k, n) nth_element(a + 0, a + k, a + n, greater<int>()) // *����Ҫ����--k
#define Min(a, n) (*min_element(a, a + (n)))
#define Max(a, n) (*max_element(a, a + (n)))
#define Minpos(a, n) (min_element(a, a + (n)) - (a))
#define Maxpos(a, n) (max_element(a, a + (n)) - (a))
#define Lidval(a, n, x) (*lower_bound(a, a + (n), x))
#define Uval(a, n, x) (*upper_bound(a, a + (n), x))
#define Lidpos(a, n, x) (lower_bound(a, a + (n), x) - (a)) // *�Ӹ�gr()���<=
#define Upos(a, n, x) (upper_bound(a, a + (n), x) - (a)) // *�Ӹ�gr()���<
//#define BS(a, n, x) binary_search(a, a + (n), x) // ����boolֵ
#define Ridange(a, n, x) equal_range(a, a + (n), x) // ����pair
#define Fpos(a, n, x) (find(a, a + (n), x) - (a))
#define Fd(a, x) (a.find(x) != a.end())
#define Fdd(a, x) (find(all(a), x) != a.end())
template<class T> inline void Qmin(T &a, const T b) {if (b < a) a = b;}
template<class T> inline void Qmax(T &a, const T b) {if (a < b) a = b;} // *������λ�ã����ϵȺ�
inline int Qceil(int x, int y) {return x ? (x - 1) / y + 1 : 0;} // *ע�����͡�y����Ϊ��

const int inf = 0x3f3f3f3f; /// 1.06e9 (INT_MAXΪ2.147e9)
const long long llinf = 0x3f3f3f3f3f3f3f3fLL; /// 4.56e18 (LidLidONG_MAXΪ9.22e18)
const double pi = acos(-1.0);
//const double tens[11] = {0.0, 1e-1, 1e-2, 1e-3, 1e-4, 1e-5, 1e-6, 1e-7, 1e-8, 1e-9, 1e-10};
//double fgcd(double a, double b) {return fabs(b) > eps ? fgcd(b, fmod(a, b)) : a;}

//const int dir[4][2] = {1, 0, 0, 1, -1, 0, 0, -1};
//const int dirr[8][2] = {1, 0, 1, 1, 0, 1, -1, 1, -1, 0, -1, -1, 0, -1, 1, -1};
//const int knight_dir[8][2] = {1, 2, 1, -2, -1, 2, -1, -2, 2, 1, 2, -1, -2, 1, -2, -1};

// INT_MAX = -1u >> 1
// �����gets(s), GC(ch)����WA�Ļ�������SS(s), SC(ch)����
// ��main()�д�����ʼ��STLid������������
// ��Ҫ���� val[i] = ++i ������δ�������Ϊ��
// ע��strncpy�����β0�����ֶ����
// ���λ�ò��������stable_sort(a, a + n);
// advance(it, n); �൱�� For(i, n) ++it; ��������O(1)��
// size()��ui���͵ģ�Ӧ��(int)xx.size()

//#pragma comment(linker, "/STACK:102400000,102400000")

//ios_base::sync_with_stdio(false);
#define _set() cout.precision(15)//, cout.setf(ios::hex, ios::basefield), cout.setf(ios::showbase)
#define _unset() cout.unsetf(ios::floatfield)//, cout.unsetf(ios::hex), cout.unsetf(ios::showbase)
#define DI(a) _set(), printf(#a" = "), cout << (a) << endl, _unset()
#define DII(a, b) _set(), printf(#a" = "), cout << (a), printf(", "#b" = "), cout << (b) << endl, _unset()
#define DIII(a, b, c) _set(), printf(#a" = "), cout << (a), printf(", "#b" = "), cout << (b), printf(", "#c" = "), cout << (c) << endl, _unset()
#define DIIII(a, b, c, d) _set(), printf(#a" = "), cout << (a), printf(", "#b" = "), cout << (b), printf(", "#c" = "), cout << (c), printf(", "#d" = "), cout << (d) << endl, _unset()
#define DA(a, i, n) For(i, n) printf(#a"[%2d] = ", i), cout << a[i] << endl
#define DAA(a, i, n, j, m) For(i, n) For(j, m) printf(#a"[%2d][%2d] = ", i, j), cout << a[i][j] << endl

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
typedef priority_queue<int> pqi;
typedef priority_queue<int, vector<int>, greater<int> > spqi; // С����top
#define MT(a, b, c) p3(p2(a, b), c)
//#define MT(a, b, c) p3(a, p2(b, c))
//#define x first
//#define y second
//p2 operator + (const p2 &a, const p2 &b) {return p2(a.x + b.x, a.y + b.y);}
//p2 operator += (p2 &a, const p2 &b) {return a = a + b;}

//const double eps = 1e-8;
//const ll mod = ll(1e9) + 7; // *��int
//inline bool okC(char &c) {return c = getchar(), c != 10 && ~c;} //return (c = getchar()) == 32;
//inline bool okS(char *s) {return s = gets(s), s && *s;}
//ll gcd(ll a, ll b){return b ? gcd(b, a % b) : a;}
//int gcd(int a, int b){return b ? gcd(b, a % b) : a;}
//template<class T> inline T _len(T x) {T cnt = 0; for (; x; ++cnt, x /= 10); return cnt;}
//template<class T> inline T isSQ(T n) {T tmp = Sqrt(n); return sq(tmp) == n ? tmp : 0;} // 0Ҫ����
//inline bool isint(double x) {return fabs(x - round(x)) < eps;}
//inline int sign(double x) {return x < -eps ? -1 : x > eps;}
//struct comp {bool operator()(const double &a, const double &b)const {return a + eps < b;}};
#define TT int tttt; scanf("%d%*c", &tttt); while(tttt--) // TT{ ... }
#define Pcas() printf("Case %d: ", ++cas) // *ע��C�Ĵ�Сд�������ע��ȥ�ո�
int cas;

const int mx = int(1e2) + 5;

int d[mx][mx], a[mx], x[mx], y[mx];
int floyd(int n) {int i, j, k; For(k, n) For(i, n) For(j, n) Qmin(d[i][j], d[i][k] + d[k][j]); return d[0][n - 1];} // ��i��j����������k

int main()
{
	int n, c, i, j;
	SII(n, c);
	SA(a + 1, i, n - 2);
	For(i, n) SII(x[i], y[i]);
	For(i, n) For(j, n) if (j != i) d[i][j] = (abs(x[i] - x[j]) + abs(y[i] - y[j])) * c - a[i];
	PI(floyd(n));
	return 0;
}
