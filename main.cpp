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
#define CI() fclose(stdin)
#define CO() fclose(stdout)
#define SR() srand((unsigned)time(NULL))
#define random(m) ((rand() << 16 | rand()) % m) // [0,m)之间的伪随机数
#define randomm(a, b) (a + ((rand() << 16 | rand()) % (b - a))) // [a,b)之间的伪随机数
#define randomP(a, n) srand((unsigned)time(NULL)), random_shuffle(a, a + (n))
#define AS(a) assert(a)

#define all(a) a.begin(), a.end()
#define PB push_back
#define sq(x) ((x) * (x))
#define Sqrt(n) (int)round(sqrt((double)n))

// 注意在调用前v一定要开足量的空间
#define Inter(v, a, n, b, m) v.resize(set_intersection(a, a + (n), b, b + (m), v.begin()) - v.begin())
#define SInter(v, a, n, b, m) v.resize((n) + (m)); sort(a, a + (n)); sort(b, b + (m)); Inter(v, a, n, b, m)
#define Union(v, a, n, b, m) v.resize(set_union(a, a + (n), b, b + (m), v.begin()) - v.begin());
#define SUnion(v, a, n, b, m) v.resize((n) + (m)); sort(a, a + (n)); sort(b, b + (m)); Union(v, a, n, b, m)
#define Diff(v, a, n, b, m) v.resize(set_difference(a, a + (n), b, b + (m), v.begin()) - v.begin())
#define SDiff(v, a, n, b, m) v.resize((n) + (m)); sort(a, a + (n)); sort(b, b + (m)); Diff(v, a, n, b, m)
#define Sym(v, a, n, b, m) v.resize(set_symmetric_difference(a, a + (n), b, b + (m) v.begin()) - v.begin())
#define SSym(v, a, n, b, m) v.resize((n) + (m)); sort(a, a + (n)); sort(b, b + (m)); Sym(v, a, n, b, m)

#define setInter(a, b, to) set_intersection(all(a), all(b), inserter(to, to.begin())) // 调用to.insert()
#define setUnion(a, b, to) set_union(all(a), all(b), inserter(to, to.begin())) // 调用to.insert()

#define Cnt1 __builtin_popcount // Cnt1ll就是ull的了
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
#define loop(it, a) for (it = a.begin(); it != a.end(); ++it)
#define rloop(it, a) for (it = a.rbegin(); it != a.rend(); ++it)

#define SI(a) scanf("%d", &a)
#define SII(a, b) scanf("%d%d", &a, &b)
#define SIII(a, b, c) scanf("%d%d%d", &a, &b, &c)
#define SIIII(a, b, c, d) scanf("%d%d%d%d", &a, &b, &c, &d)
#define SIIIII(a, b, c, d, e) scanf("%d%d%d%d%d", &a, &b, &c, &d, &e)
#define SIIIIII(a, b, c, d, e, f) scanf("%d%d%d%d%d%d", &a, &b, &c, &d, &e, &f)
#define SL(a) scanf("%I64d", &a)
#define SLL(a, b) scanf("%I64d%I64d", &a, &b)
#define SLLL(a, b, c) scanf("%I64d%I64d%I64d", &a, &b, &c)
#define SLLLL(a, b, c, d) scanf("%I64d%I64d%I64d%I64d", &a, &b, &c, &d)
#define SD(a) scanf("%lf", &a)
#define SDD(a, b) scanf("%lf%lf", &a, &b)
#define SDDD(a, b, c) scanf("%lf%lf%lf", &a, &b, &c)
#define SDDDD(a, b, c, d) scanf("%lf%lf%lf%lf", &a, &b, &c, &d)
#define SA(a, i, n) For(i, n) scanf("%d", a + i) // 便于扩展 *不要在后面加逗号！
#define SAA(a, i, n, j, m) For(i, n) For(j, m) SI(a[i][j]) // *不要在后面加逗号！
#define SAA1(a, i, n, j, m) Forr(i, 1, n + 1) Forr(j, 1, m + 1) SI(a[i][j]) // *不要在后面加逗号！
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
#define PL(a) printf("%I64d\n", a)
#define PLL(a, b) printf("%I64d %I64d\n", a, b)
#define PLLL(a, b, c) printf("%I64d %I64d %I64d\n", a, b, c)
#define PD(a) printf("%.3f\n", a)
#define PDD(a, b) printf("%f %f\n", a, b)
#define PDDD(a, b, c) printf("%f %f %f\n", a, b, c)
#define PA(a, i, n) For(i, (n) - 1) printf("%d ", a[i]); PI(a[(n) - 1]) // *(有时要在前面加花括号)由于要支持STL的数据类型，故不用+的形式，必要时请手动改成+
#define PAA(a, i, n, j, m) For(i, n) {For(j, (m) - 1) printf("%d ", a[i][j]); PI(a[i][(m) - 1]);}
#define PAn(a, i, n) For(i, n) PI(a[i])
#define rPA(a, i, n) rForr(i, n - 1, 1) printf("%d ", a[i]); PI(a[0]) // *(有时要在前面加花括号)
#define rPAn(a, i, n) rFor(i, n - 1) PI(a[i])
#define PC(c) putchar(c)
#define Pn() putchar(10)
#define Ps() putchar(32)

#define Uni(a) a.resize(unique(all(a)) - a.begin()) // STL专用
#define SUni(a) sort(all(a)); Uni(a) // STL专用
#define Unii(a, n) (unique(a, a + (n)) - a)
#define SUnii(a, n) sort(a, a + n); Unii(a, n)
#define Acc(a, n) (accumulate(a, a + (n), 0)) // 可以Acc(a.begin(), k);    *注意0LL以及0.0！
#define Accv(a) (accumulate(all(a), 0)) /// *注意0LL以及0.0！
#define AaddB(a, n, b) transform(a, a + (n), b, a, plus<int>()) // *慢的话就改为For(i, n) a[i] += b[i](注意加int i)
#define mem(a, num) memset(a, num, sizeof(a))
#define cpy(to, from) memcpy(to, from, sizeof(from))
#define Rcpy(l, r, b) reverse_copy(l, r, b) // 注意为左闭右开区间
#define kTo10(ans, str, s, m, k) strncpy(str, s, m), str[m] = 0, ans = strtol(str, NULL, k)

#define LE(T) less_equal<T>
#define GR(T) greater<T>
#define GE(T) greater_equal<T>
#define NET(T) not_equal_to<T>

#define nth(a, k, n) nth_element(a + 0, a + k, a + n) /// *可能要事先--k
#define nthg(a, k, n) nth_element(a + 0, a + k, a + n, greater<int>()) // *可能要事先--k
#define Min(a, n) (*min_element(a, a + (n)))
#define Max(a, n) (*max_element(a, a + (n)))
#define Minpos(a, n) (min_element(a, a + (n)) - (a))
#define Maxpos(a, n) (max_element(a, a + (n)) - (a))
#define Lval(a, n, x) (*lower_bound(a, a + (n), x))
#define Uval(a, n, x) (*upper_bound(a, a + (n), x))
#define Lpos(a, n, x) (lower_bound(a, a + (n), x) - (a)) // *加个gr()变成<=
#define Upos(a, n, x) (upper_bound(a, a + (n), x) - (a)) // *加个gr()变成<
//#define BS(a, n, x) binary_search(a, a + (n), x) // 返回bool值
#define Range(a, n, x) equal_range(a, a + (n), x) // 返回pair
#define Fpos(a, n, x) (find(a, a + (n), x) - (a))
#define Fd(a, x) (a.find(x) != a.end())
#define Fdd(a, x) (find(all(a), x) != a.end())
template<class T> inline void Qmin(T &a, const T b) {if (b < a) a = b;}
template<class T> inline void Qmax(T &a, const T b) {if (a < b) a = b;} // *若考虑位置，加上等号

const int inf = 0x3f3f3f3f; /// 1.06e9 (INT_MAX为2.147e9)
const long long llinf = 0x3f3f3f3f3f3f3f3fLL; /// 4.56e18 (LLONG_MAX为9.22e18)
const double pi = acos(-1.0);
//const double tens[11] = {0.0, 1e-1, 1e-2, 1e-3, 1e-4, 1e-5, 1e-6, 1e-7, 1e-8, 1e-9, 1e-10};
//double fgcd(double a, double b) {return fabs(b) > eps ? fgcd(b, fmod(a, b)) : a;}

//const int dir[4][2] = {1, 0, 0, 1, -1, 0, 0, -1};
//const int dirr[8][2] = {1, 0, 1, 1, 0, 1, -1, 1, -1, 0, -1, -1, 0, -1, 1, -1};
//const int knight_dir[8][2] = {1, 2, 1, -2, -1, 2, -1, -2, 2, 1, 2, -1, -2, 1, -2, -1};

// INT_MAX = -1u >> 1
// 如果用gets(s), GC(ch)读入WA的话，请用SS(s), SC(ch)代替
// 在main()中大量初始化STL类型容易死机
// 不要出现 val[i] = ++i 这样的未定义的行为！
// 注意strncpy不会加尾0，请手动添加
// 相对位置不变的排序stable_sort(a, a + n);
// advance(it, n); 相当于 For(i, n) ++it; 但是它是O(1)的
// size()是ui类型的，应该(int)xx.size()
// 截取整数部分 trunc()

//#pragma comment(linker, "/STACK:102400000,102400000")

//ios_base::sync_with_stdio(false);
#define _set() cout.precision(15)//, cout.setf(ios::hex, ios::basefield), cout.setf(ios::showbase)
#define _unset() cout.unsetf(ios::floatfield)//, cout.unsetf(ios::hex), cout.unsetf(ios::showbase)
#define DI(a) _set(), printf(#a" = "), cout << (a) << endl, _unset()
#define DII(a, b) _set(), printf(#a" = "), cout << (a), printf(", "#b" = "), cout << (b) << endl, _unset()
#define DIII(a, b, c) _set(), printf(#a" = "), cout << (a), printf(", "#b" = "), cout << (b), printf(", "#c" = "), cout << (c) << endl, _unset()
#define DIIII(a, b, c, d) _set(), printf(#a" = "), cout << (a), printf(", "#b" = "), cout << (b), printf(", "#c" = "), cout << (c), printf(", "#d" = "), cout << (d) << endl, _unset()
#define DA(a, n) for(int iiiii = 0; iiiii < n; ++iiiii) printf(#a"[%2d] = ", iiiii), cout << a[iiiii] << endl
#define DAA(a, n, m) for(int iiiii = 0; iiiii < n; ++iiiii) for(int jjjjj = 0; jjjjj < m; ++jjjjj) printf(#a"[%2d][%2d] = ", iiiii, jjjjj), cout << a[iiiii][jjjjj] << endl

// *修改模板参数
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
typedef priority_queue<int, vector<int>, greater<int> > spq; // 小的在top
#define MT(a, b, c) p3(p2(a, b), c)
//#define MT(a, b, c) p3(a, p2(b, c))
#define x first
#define y second
//p2 operator + (const p2 &a, const p2 &b) {return p2(a.x + b.x, a.y + b.y);}
//p2 operator += (p2 &a, const p2 &b) {return a = a + b;}


//const ll mod = ll(1e9) + 7; // *或int
//template<typename ... T> void RI(int &head, T &... tail) {scanf("%d", &head), RI(tail ...);}
template<class T> inline T Qceil(T x, T y) {return x ? (x - 1) / y + 1 : 0;} // *y必须为正
inline double round(double x) {return x > 0.0 ? floor(x + 0.5) : ceil(x - 0.5);}
//inline bool okC(char &c) {return c = getchar(), c != 10 && ~c;} //return (c = getchar()) == 32;
//inline bool okS(char *s) {return s = gets(s), s && *s;}
//template<class T> inline T gcd(T a, T b) {T c; while (b) c = a % b, a = b, b = c; return a;}
//template<class T> inline T lcm(T a, T b) {return a / gcd(a, b) * b;}
//template<class T> inline T _len(T x) {T cnt = 0; for (; x; ++cnt, x /= 10); return cnt;}
//template<class T> inline T isSQ(T n) {T tmp = Sqrt(n); return sq(tmp) == n ? tmp : 0;} // 参数应为正数
//inline bool isint(double x) {return fabs(x - round(x)) < eps;}
//inline int sign(double x) {return x < -eps ? -1 : x > eps;}
//struct comp {bool operator()(const double &a, const double &b)const {return a + eps < b;}};
//template<class T> inline T Xor(const T &x, const T &y) {return x ^ y;}
#define TT int tttt; scanf("%d%*c", &tttt); while(tttt--) // TT{ ... }
#define QQ int qqqq; scanf("%d%*c", &qqqq); while(qqqq--) // QQ{ ... }
#define Pcas() printf("Case %d: ", ++cas) // *注意C的大小写，空输出注意去空格
int cas;

/* 875ms, 268KB */

const double eps = 1e-8;
const int mx = 1e3 + 5;

struct Point
{
	double x, y;
	Point(double x = 0, double y = 0): x(x), y(y) {}
	void read() {SDD(x, y);}
	bool operator < (const Point &b) const
	{
		return x < b.x || x == b.x && y < b.y;
	}
} p[mx];
typedef Point Vec;

Vec operator + (const Vec &a, const Vec &b) {return Vec(a.x + b.x, a.y + b.y);}
Vec operator - (const Point &a, const Point &b) {return Vec(a.x - b.x, a.y - b.y);}
Vec operator - (const Point &a) {return Vec(-a.x, -a.y);}
Vec operator * (const Vec &a, double p) {return Vec(a.x * p, a.y * p);}
Vec operator / (const Vec &a, double p) {return Vec(a.x / p, a.y / p);}

Vec operator * (const Vec &a, const Vec &b) {return Vec(a.x * b.x - a.y * b.y, a.x * b.y + b.x * a.y);}
inline double Dot(const Vec &a, const Vec &b) {return a.x * b.x + a.y * b.y;}
inline double Cross(const Vec &a, const Vec &b) {return a.x * b.y - a.y * b.x;} // b在a左边为正，b在a右边为负，等于0就是平行
inline double Len(const Vec &a) {return hypot(a.x, a.y);}
inline bool isCollinear(const Point &p1, const Point &p2, const Point &p3) {return fabs(Cross(p2 - p1, p3 - p1)) < eps;}

inline bool cmp(const Point &a, const Point &b)
{
	return a.x < b.x;
}

double minTrianglePerimeter(int n)
{
	double ans = 1e100, a;
	int i, j, k;
	For(i, n - 2) Forr(j, i + 1, n - 1)
	{
		if (ans < 2 * (p[j].x - p[i].x) + eps) break; // p[i]太靠左了，直接换下一个p[i+1]
		a = Len(p[j] - p[i]);
		if (ans < 2 * a + eps) continue; // p[i]-p[j]太长了，换下一个p[j+1]
		if (p[i].x == p[j].x) k = upper_bound(p + j + 1, p + n, p[j], cmp) - p;
		// 对于有很多点横坐标相同的情况，我们可以二分找第三个点，不过此题数据太弱，并没有明显的优化
		else k = j + 1;
		for (; k < n; ++k)
		{
			if (ans < 2 * (p[k].x - p[i].x) + eps) break; // p[k]太靠右了，换下一个p[j+1]再循环
			if (isCollinear(p[i], p[j], p[k])) continue;
			Qmin(ans, a + Len(p[k] - p[i]) + Len(p[k] - p[j]));
		}
	}
	return ans;
}

int main()
{
	int n, i;
	double ans;
	TT
	{
		Pcas();
		SI(n);
		For(i, n) p[i].read();
		sort(p, p + n);
		ans = minTrianglePerimeter(n);
		ans == 1e100 ? puts("No Solution") : PD(ans);
	}
	return 0;
}
