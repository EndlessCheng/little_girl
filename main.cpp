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
#define AS(a) assert(a)

#define all(a) a.begin(), a.end()
#define PB push_back
#define sq(x) ((x) * (x))
#define Sqrt(n) (int)sqrt(0.5 + n)

// ע���ڵ���ǰvһ��Ҫ�������Ŀռ�
#define Inter(v, a, n, b, m) v.resize(set_intersection(a, a + (n), b, b + (m), v.begin()) - v.begin())
#define SInter(v, a, n, b, m) v.resize((n) + (m)); sort(a, a + (n)); sort(b, b + (m)); Inter(v, a, n, b, m)
#define Union(v, a, n, b, m) v.resize(set_union(a, a + (n), b, b + (m), v.begin()) - v.begin());
#define SUnion(v, a, n, b, m) v.resize((n) + (m)); sort(a, a + (n)); sort(b, b + (m)); Union(v, a, n, b, m)
#define Diff(v, a, n, b, m) v.resize(set_difference(a, a + (n), b, b + (m), v.begin()) - v.begin())
#define SDiff(v, a, n, b, m) v.resize((n) + (m)); sort(a, a + (n)); sort(b, b + (m)); Diff(v, a, n, b, m)
#define Sym(v, a, n, b, m) v.resize(set_symmetric_difference(a, a + (n), b, b + (m) v.begin()) - v.begin())
#define SSym(v, a, n, b, m) v.resize((n) + (m)); sort(a, a + (n)); sort(b, b + (m)); Sym(v, a, n, b, m)

#define setInter(a, b, to) set_intersection(all(a), all(b), inserter(to, to.begin()))
#define setUnion(a, b, to) set_union(all(a), all(b), inserter(to, to.begin()))

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
#define PL(a) printf("%lld\n", a)
#define PLL(a, b) printf("%lld %lld\n", a, b)
#define PLLL(a, b, c) printf("%lld %lld %lld\n", a, b, c)
#define PD(a) printf("%f\n", a)
#define PDD(a, b) printf("%f %f\n", a, b)
#define PDDD(a, b, c) printf("%f %f %f\n", a, b, c)
#define PA(a, i, n) For(i, (n) - 1) printf("%d ", a[i]); if(n) PI(a[(n) - 1]) // *(��ʱҪ��ǰ��ӻ�����)����Ҫ֧��STL���������ͣ��ʲ���+����ʽ����Ҫʱ���ֶ��ĳ�+
#define PAA(a, i, n, j, m) For(i, n) {For(j, (m) - 1) printf("%d ", a[i][j]); PI(a[i][(m) - 1]);}
#define PAn(a, i, n) For(i, n) PI(a[i])
#define PiA(a, i, n) For(i, n) PII(i, a[i]) // debug��
#define rPA(a, i, n) rForr(i, n - 1, 1) printf("%d ", a[i]); PI(a[0]) // *(��ʱҪ��ǰ��ӻ�����)
#define rPAn(a, i, n) rFor(i, n - 1) PI(a[i])
#define PC(c) putchar(c)
#define Pn() putchar(10)
#define Ps() putchar(32)

#define Uni(a) a.resize(unique(all(a)) - a.begin()) // STLר��
#define SUni(a) sort(all(a)); Uni(a) // STLר��
#define Unii(a, n) (unique(a, a + (n)) - a)
#define SUnii(a, n) sort(a, a + n); Unii(a, n)
#define Acc(a, n) (accumulate(a, a + (n), 0)) /// ����Acc(a.begin(), k);    *ע��0LL�Լ�0.0��
#define Accv(a) (accumulate(all(a), 0)) // *ע��0LL�Լ�0.0��
#define AaddB(a, n, b) transform(a, a + (n), b, a, plus<int>()) // *���Ļ��͸�ΪFor(i, n) a[i] += b[i](ע���int i)
#define mem(a, num) memset(a, num, sizeof(a))
#define cpy(to, from) memcpy(to, from, sizeof(from))
#define Rcpy(l, r, b) reverse_copy(l, r, b) // ע��Ϊ����ҿ�����
#define kTo10(ans, str, s, m, k) strncpy(str, s, m), str[m] = 0, ans = strtol(str, NULL, k)

#define LE(T) less_equal<T>()
#define GR(T) greater<T>()
#define GE(T) greater_equal<T>()

#define nth(a, k, n) nth_element(a + 0, a + k, a + n) // *����Ҫ����--k
#define nthg(a, k, n) nth_element(a + 0, a + k, a + n, greater<int>()) // *����Ҫ����--k
#define Min(a, n) (*min_element(a, a + (n)))
#define Max(a, n) (*max_element(a, a + (n)))
#define Minpos(a, n) (min_element(a, a + (n)) - (a))
#define Maxpos(a, n) (max_element(a, a + (n)) - (a))
#define Lval(a, n, x) (*lower_bound(a, a + (n), x))
#define Uval(a, n, x) (*upper_bound(a, a + (n), x))
#define Lpos(a, n, x) (lower_bound(a, a + (n), x) - (a)) // *�Ӹ�gr()���<=
#define Upos(a, n, x) (upper_bound(a, a + (n), x) - (a)) // *�Ӹ�gr()���<
#define BS(a, n, x) binary_search(a, a + (n), x) // ����boolֵ
#define Range(a, n, x) equal_range(a, a + (n), x) // ����pair
#define Fpos(a, n, x) (find(a, a + (n), x) - (a))
#define Fd(a, x) (find(all(a), x) != a.end())
template<class T> inline void Qmin(T &a, const T b) {if (b < a) a = b;}
template<class T> inline void Qmax(T &a, const T b) {if (a < b) a = b;} // *������λ�ã����ϵȺ�
inline int Qceil(int x, int y) {return x ? (x - 1) / y + 1 : 0;} // *ע�����͡�y����Ϊ��

const int inf = 0x3f3f3f3f; // 1.06e9 (INT_MAXΪ2.147e9)
const long long llinf = 0x3f3f3f3f3f3f3f3fLL; // 4.56e18 (LLONG_MAXΪ9.22e18)
const double pi = acos(-1.0);
//const double tens[11] = {0.0, 1e-1, 1e-2, 1e-3, 1e-4, 1e-5, 1e-6, 1e-7, 1e-8, 1e-9, 1e-10};
//double fgcd(double a, double b) {return fabs(b) > eps ? fgcd(b, fmod(a, b)) : a;}

//const int dir[4][2] = {1, 0, 0, 1, -1, 0, 0, -1};
//const int dirr[8][2] = {1, 0, 1, 1, 0, 1, -1, 1, -1, 0, -1, -1, 0, -1, 1, -1};
//const int knight_dir[8][2] = {1, 2, 1, -2, -1, 2, -1, -2, 2, 1, 2, -1, -2, 1, -2, -1};

long long gcd(long long a, long long b) {return b ? gcd(b, a % b) : a;}

// INT_MAX = -1u >> 1
// �����gets(s), GC(ch)����WA�Ļ�������SS(s), scanf(" %c ", &ch)����
// ��main()�д�����ʼ��STL������������
// ��Ҫ���� val[i] = ++i ��������Ϊ��
// ע��strncpy�����β0�����ֶ����
// ���λ�ò��������stable_sort(a, a + n);
// C++�������������ת������G++����
// advance(it, n); �൱�� For(i, n) ++it;

/*G++��ջ
int __size__ = 256 << 20; // 256MB
char *__p__ = (char*)malloc(__size__) + __size__;
__asm__("movl %0, %%esp\n" :: "r"(__p__));
*/

//ios_base::sync_with_stdio(false);

typedef unsigned int ui;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef vector<int>::iterator viter;
typedef set<int>::iterator siter; // *�޸�ģ�����
typedef map<int, int>::iterator miter; // *�޸�ģ�����
typedef multiset<int>::iterator msiter;
typedef multimap<int, int>::iterator mmter;
typedef priority_queue<int> pqi; // *�޸�ģ�����
typedef priority_queue<int, vector<int>, greater<int> > spqi; // С����top  *�޸�ģ�����
// ��ֵʱֱ��SII(a[i].x, a[i].y)����, ��ʱ����LL
typedef pair<pair<int, int>, int> p3;
typedef pair<int, pair<int, int> > pi3;

//p2 operator + (const p2 &a, const p2 &b) {return p2(a.x + b.x, a.y + b.y);}
//p2 operator += (p2 &a, const p2 &b) {return a = a + b;}
#define loop(it, a) for (it = a.begin(); it != a.end(); ++it)

//const double eps = 1e-8;
//const ll mod = ll(1e9) + 7; // *��int

#define TT int tttt; scanf("%d%*c", &tttt); while(tttt--) // TT{ ... }
inline bool okC(char &c) {return c = getchar(), c != 10 && ~c;} //return (c = getchar()) == 32;
inline bool okS(char *s) {return s = gets(s), s && *s;}
inline int _len(int x) {int cnt = 0; for (; x; ++cnt, x /= 10); return cnt;}
#define _set() cout.precision(15)//, cout.setf(ios::hex, ios::basefield), cout.setf(ios::showbase)
#define _unset() cout.unsetf(ios::floatfield)//, cout.unsetf(ios::hex), cout.unsetf(ios::showbase)
#define DI(a) _set(), printf(#a" = "), cout << (a) << endl, _unset()
#define DII(a, b) _set(), printf(#a" = "), cout << (a), printf(", "#b" = "), cout << (b) << endl, _unset()
#define DIII(a, b, c) _set(), printf(#a" = "), cout << (a), printf(", "#b" = "), cout << (b), printf(", "#c" = "), cout << (c) << endl, _unset()
#define DIIII(a, b, c, d) _set(), printf(#a" = "), cout << (a), printf(", "#b" = "), cout << (b), printf(", "#c" = "), cout << (c), printf(", "#d" = "), cout << (d) << endl, _unset()
#define DA(a, i) printf(#a"[%2d] = ", i), cout << a[i] << endl
#define DAA(a, i, j) printf(#a"[%2d][%2d] = ", i, j), cout << a[i][j] << endl
#define DF(a, i, n) For(i, n) DA(a, i);
#define Pcas() printf("Case %d: ", ++cas) // *ע��C�Ĵ�Сд�������ע��ȥ�ո�
int cas;
const int mx = int(1e5) + 5;

pair<vector<int>, bool> man[mx];
vector<int> ans;
int mes;

bool ok(vector<int> &t, bool in)
{
	int j = 0;
	if (in)
	{
		if (t[0] != 1) return false;
		j = 1;
	}
	for (; j < t.size(); j += 2) // '-'
	{
		if (j + 1 < t.size())
		{
			if (t[j + 1] != t[j] + 1) return false;
		}
		else
		{
			return t[j] == mes;
		}
	}
}

#define t first
#define in second

int main()
{
#ifndef ONLINE_JUDGE
	Fin("in.txt"); // *
#endif
//DI(1);
	int n, i, id;
	char c;
	while (~SII(n, mes))
	{
		For(i, n + 1) man[i].t.clear();
		Forr(i, 1, mes + 1)
		{
			SC(c), SI(id);
			if (man[id].t.empty()) man[id].in = (c == '+');
			man[id].t.PB(i);
			//DI(i);
		}
		ans.clear();
		Forr(i, 1, n + 1) if (man[i].t.empty() || ok(man[i].t, man[i].in)) ans.PB(i);
		PI(ans.size());
		PA(ans,i,(int)ans.size());
	}
	return 0;
}
