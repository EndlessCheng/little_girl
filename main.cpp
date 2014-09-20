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
#include<complex>
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
//template<typename ... T> void RL(ll &head, T &... tail) {scanf("%I64d", &head), RI(tail ...);}

#define PI(a) printf("%d\n", a)
#define PII(a, b) printf("%d %d\n", a, b)
#define PIII(a, b, c) printf("%d %d %d\n", a, b, c)
#define PIIII(a, b, c, d) printf("%d %d %d %d\n", a, b, c, d)
#define PIIIII(a, b, c, d, e) printf("%d %d %d %d %d\n", a, b, c, d, e)
#define PL(a) printf("%I64d\n", a)
#define PLL(a, b) printf("%I64d %I64d\n", a, b)
#define PLLL(a, b, c) printf("%I64d %I64d %I64d\n", a, b, c)
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
#define DA(a, n) _set(); for(int iiiii = 0; iiiii < n; ++iiiii) printf(#a"[%2d] = ", iiiii), cout << a[iiiii] << endl; _unset()
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
//#define x first
//#define y second
//p2 operator + (const p2 &a, const p2 &b) {return p2(a.x + b.x, a.y + b.y);}
//p2 operator += (p2 &a, const p2 &b) {return a = a + b;}

//inline bool okC(char &c) {return c = getchar(), c != 10 && ~c;} //return (c = getchar()) == 32;
//inline bool okS(char *s) {return s = gets(s), s && *s;}
const double eps = 1e-8;

//const ll mod = ll(1e9) + 7; // *或int
//ll pow(ll a, ll r) {ll ans = 1LL; for (; r; r >>= 1) {if (r & 1) ans = ans * a % mod; a = a * a % mod;} return ans;} // *使用前特判m==1
//ll mul_mod(ll a, ll b, ll mod) {b %= mod; ll ret = 0; for (; b; b >>= 1) {if (b & 1) ret = (ret + a) % mod; a = (a + a) % mod;} return ret;} // *使用前特判m==1
//ll pow(ll a, ll r, ll mod) {ll ans = 1LL; for (; r; r >>= 1) {if (r & 1) ans = mul_mod(ans, a, mod); a = mul_mod(a, a, mod);} return ans;} // *使用前特判m==1
//ll powsum(ll a, int r) {ll ans = 1LL, tmp = 1LL; for (; r; r >>= 1) {if (r & 1) ans = (ans * a + tmp) % mod; tmp = tmp * (1LL + a) % mod; a = a * a % mod;} return ans;} // *使用前特判m==1

template<class T> inline T Qceil(T x, T y) {return (T)ceil(double(x) / y - 1e-8);}
//template<class T> inline T Qceil(T x, T y) {return x ? (x - 1) / y + 1 : 0;} // *y必须为正
inline double round(double x) {return x > 0.0 ? floor(x + 0.5) : ceil(x - 0.5);}
//template<class T> inline T gcd(T a, T b) {T c; while (b) c = a % b, a = b, b = c; return a;}
//void exgcd(ll a, ll b, ll& d, ll& x, ll& y) {b ? (exgcd(b, a % b, d, y, x), y -= x * (a / b)) : (d = a, x = 1LL, y = 0LL);}
//template<class T> inline T lcm(T a, T b) {return a / gcd(a, b) * b;}

//template<class T> inline T _len(T x) {int cnt = 0;  /* set<int> s; */  for (; x; ++cnt, x /= 10){   /* s.insert(x % 10); */   ;} return cnt; /* return s.size() == cnt;  */ }
//template<class T> inline T isSQ(T n) {T tmp = Sqrt(n); return sq(tmp) == n ? tmp : 0;} // 参数应为正数
//inline bool isint(double x) {return fabs(x - round(x)) < eps;}
//inline int sign(double x) {return x < -eps ? -1 : x > eps;} // *
//struct comp {bool operator()(const double &a, const double &b)const {return a + eps < b;}};
//template<class T> inline T Xor(const T &x, const T &y) {return x ^ y;}
#define TT int tttt; scanf("%d%*c", &tttt); while(tttt--) // TT{ ... }
#define QQ int qqqq; scanf("%d%*c", &qqqq); while(qqqq--) // QQ{ ... }
#define Pcas() printf("Case %d: ", ++cas) // *注意C的大小写，空输出注意去空格
int cas;
const int mx = 1e5 + 5;

struct Point
{
	double x, y;
	//double alpha; // 向量极角alpha = atan2(y, x); *注意范围是(-pi,pi]
	Point(double x = 0, double y = 0): x(x), y(y) {} // *必要时请手动改int
	void read() {SDD(x, y);}
	bool operator < (const Point &b) const
	{
		return x < b.x || x == b.x && y < b.y;
		//return x + eps < b.x || fabs(x - b.x) < eps && y + eps < b.y;
	}
	bool operator == (const Point &b) const
	{
		return x == b.x && y == b.y;
	}
} p[mx], ans1[mx], ans2[mx], you, him, dir_lp, dir_rp;

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
inline ll Len2(const Vec &a) {return sq(a.x) + sq(a.y);}
inline double Angle(const Vec &a, const Vec &b) {return acos(Dot(a, b) / Len(a) / Len(b));} // 向量夹角
inline double cosA(const Vec &a, const Vec &b) {return Dot(a, b) / Len(a) / Len(b);} // 向量夹角的余弦
inline Vec Rotate(const Vec &a, double rad) {return Vec(a.x * cos(rad) - a.y * sin(rad), a.x * sin(rad) + a.y * cos(rad));} // 逆时针旋转向量a

inline Vec NormalVec(Vec a) {return Vec(-a.y , a.x);} // 返回a的法向量
inline Vec UnitVec(Vec &a) {double l = Len(a); return Vec(-a.y / l, a.x / l);} // 返回a的单位法向量
inline Vec conj(Vec &a) {return Vec(a.x, -a.y);}
inline bool isCollinear(const Point &p1, const Point &p2, const Point &p3) {return fabs(Cross(p2 - p1, p3 - p1)) < eps;} // 共线

/// 角度转弧度 *注意正负
inline double deg2rad(double deg) {return deg / 180.0 * pi;}
/// 弧度转角度 *注意正负
inline double rad2deg(double rad) {return rad / pi * 180.0;}
/// 求向量极角 *注意范围是(-pi,pi] *有时要去掉引用
inline double PolarAngle(Vec &v) {return atan2(v.y, v.x);}

// 点到线段的距离
inline double PointToSeg(Point &P, Point &A, Point &B)
{
	Vec v1 = B - A, v2 = P - A, v3 = P - B;
	if (Dot(v1, v2) < -eps) return Len(v2);
	if (Dot(v1, v3) > eps) return Len(v3);
	return fabs(Cross(v1, v2)) / Len(v1);
}

// 凸包内部点距凸包的最近距离
// 注意事先p[n]=p[0]
double PointToConvexhull(Point &o, Point *p, int n)
{
	int i;
	double ans = 1e100;
	For(i, n) Qmin(ans, PointToSeg(o, p[i], p[i + 1]));
	return ans;
}



/// 求凸包, 返回凸包的逆时针顶点数, ***结果保存在ans中, 一定要注意！！
int convex_hull(Point *p, Point *ans, int n)
{
	sort(p, p + n);
// *判重的代码 at here //
//n = unique(p, p + n) - p; /// *去重，看题意
	int cnt = 0, i;
	For(i, n) ///构建一个下凸包，从0到n-1
	{
		while (cnt >= 2 && Cross(ans[cnt - 1] - ans[cnt - 2], p[i] - ans[cnt - 2]) < eps) // * < -eps 表示不去掉凸包边上的点
			--cnt;
		ans[cnt++] = p[i];
	}
///注意在构建上凸包的过程中我们用到了n-1这个点
///为什么0要算两次？因为我们要借助它来删去那些在凸包内的点
	int tmp = cnt;
	rFor(i, n - 2) ///构建一个上凸包，从n-2到0
	{
		while (cnt > tmp && Cross(ans[cnt - 1] - ans[cnt - 2], p[i] - ans[cnt - 2]) < eps) // * < -eps 表示不去掉凸包边上的点
			--cnt;
		ans[cnt++] = p[i];
	}
	if (cnt > 1) --cnt; /// 0算了两次
	ans[cnt] = ans[0]; /// *方便后续操作
	return cnt;
//return cnt == 1 ? 0 : cnt;
}


double lenc;
set<Point> s;

int get_directline(int n)
{
	convex_hull(p, ans1, n);
	int i;
	s.clear();
	For(i, n) s.insert(p[i]);
	int sz = convex_hull(p, ans2, n + 1);
	lenc = 0.0;
	For(i, sz) lenc += Len(ans2[i], ans2[i + 1]), s.erase(ans2[i]);
	For(i, sz) if (ans2[i] == you) break;
	//youpos=i;
	dir_lp = ans2[(i - 1 + sz) % sz], dir_rp = ans2[i + 1];
	return sz;
}

double t, vr, vs;
double racc;





struct Line
{
	Point p;
	Vec v;
	Line() {}
	Line(Point p, Vec v): p(p), v(v) {}
	Point point(double t) {return p + v * t;}
};

struct CC
{
	Point c; /// *o
	double r;
	CC() {}
	CC(Point c, double r): c(c), r(r) {}
	Point point(double a) {return Point(c.x + r * cos(a), c.y + r * sin(a));}
} cir;

inline int getLineCCIntersection(Line &L, CC &C, vector<Point> &ans)
{
	double a = L.v.x, b = L.p.x - C.c.x, c = L.v.y, d = L.p.y - C.c.y;
	double e = a * a + c * c, f = 2 * (a * b + c * d), g = b * b + d * d - C.r * C.r;
	double delta = f * f - 4 * e * g;
	if (delta < -eps) return 0; /// 相离
	if (fabs(delta) < eps) /// 相切
	{
		t1 = t2 = -f / (2 * e);
		if (t1 > -eps && t1 < 1 + eps) ans.push_back(t1);
		return ans.size();
	}
	/// 相交
	delta = sqrt(delta);
	t1 = (-f - delta) / (2 * e);
	t2 = (-f + delta) / (2 * e);
	if (t1 > t2) swap(t1, t2);
	if (t1 < eps) t1 = 0.0;
	if (t2 + eps > 1) t2 = 1.0;
	if (t1 > t2) return 0;
	ans.push_back(L.point(t1));
	ans.push_back(L.point(t2));
	return 2;
}

vector<Point> crossp;

double solve(double l,double r)
{

}

/// 点在直线上的投影(垂足)
inline double getLineProj(Point &p, Point &a, Point &b)
{
	Vec v = b - a;
	v = v / Len(v);
	return t = Dot(v, p - a);
	//return a + v * t;
}

double solvetime(Point &p1, Point &p2)
{
	crossp.clear();
	int num = getLineCCIntersection(Line(p1, p2 - p1), cir, crossp);
	if (num == 0) return 1e100;
	double len = 1e100;
	if (racc)
	{
		lacc = lenc - racc - Len(p1, p2);
		// 从右游

		// 从左游
	}
	else
	{
	    t1 = getLineProj(you,p1,p2);
	    t2 = getLineProj(him,p1,p2);
	    if(t1>t2) swap(t1,t2);
        midt = solve(t1,t2);

	}
	return ;
}

int main()
{
	int n, i;
	double mint;
	TT
	{
		SDDD(t, vr, vs);
		you.read();
		him.read();
		SI(n);
		For(i, n) p[i].read();
		p[n] = p[0];
		timepart2 = PointToConvexhull(him, p, n) * 2 / vs;
		t -= timepart2;
		if (t < 0)
		{
			PI(-1);
			continue;
		}
		cir = CC(him, t * vs);
		p[n] = you;
		get_directline();
		// 下面用ans1作答
		For(i, n)
		{
			if (ans1[i] == dir_lp) lpos = i;
			if (ans1[i] == dir_rp) rpos = i;
			ans1[i + n] = ans1[i];
		}
		mint = 1e100;
		racc = 0.0;
		if (lpos < rpos)
		{
			Forr(i, lpos, rpos)
			{
				Qmin(mint, solvetime(ans1[i], ans1[i + 1]));
			}
			racc = Len(you, ans1[rpos]);
			Forr(i, rpos, lpos + n)
			{
				Qmin(mint, solvetime(ans1[i], ans1[i + 1]));
				racc += Len(ans1[i], ans1[i + 1]);
			}
		}
		else
		{
			Forr(i, lpos, rpos + n)
			{
				Qmin(mint, solvetime(ans1[i], ans1[i + 1]));
			}
			racc = Len(you, ans1[rpos]);
			Forr(i, rpos, lpos)
			{
				Qmin(mint, solvetime(ans1[i], ans1[i + 1]));
				racc += Len(ans1[i], ans1[i + 1]);
			}
		}
		if (mint == 1e100) PI(-1);
		else printf("%.2f\n", mint + timepart2);
	}
	return 0;
}
