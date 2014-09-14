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
#define random(m) ((rand() << 16 | rand()) % m) // [0,m)֮���α�����
#define randomm(a, b) (a + ((rand() << 16 | rand()) % (b - a))) // [a,b)֮���α�����
#define randomP(a, n) srand((unsigned)time(NULL)), random_shuffle(a, a + (n))
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
#define PA(a, n) for(int ii = 0; ii < n - 1; ++ii) printf("%f ", a[ii]); PD(a[(n) - 1]) // *���������Ҫ�û�����������
#define PAA(a, n, m) for(int ii = 0; ii < n; ++ii) {for(int jj = 0; jj < m - 1; ++jj) printf("%f ", a[ii][jj]); PD(a[ii][(m) - 1]);}
#define PAn(a, n) for(int i = 0; i < n; ++i) PI(a[i])
#define rPA(a, n) for(int i = n - 1; i > 0; --i) printf("%d ", a[i]); PI(a[0])
#define rPAn(a, n) for(int i = n - 1; i >= 0; --i) PI(a[i])
#define PC(c) putchar(c)
#define Pn() putchar(10)
#define Ps() putchar(32)

#define Uni(a) a.resize(unique(all(a)) - a.begin()) // STLר��
#define SUni(a) sort(all(a)); Uni(a) // STLר��
#define Unii(a, n) (unique(a, a + (n)) - a)
#define SUnii(a, n) sort(a, a + n); Unii(a, n)
#define Acc(a, n) (accumulate(a, a + (n), 0)) // ����Acc(a.begin(), k);    *ע��0LL�Լ�0.0��
#define Accv(a) (accumulate(all(a), 0)) /// *ע��0LL�Լ�0.0��
#define AaddB(a, n, b) transform(a, a + (n), b, a, plus<int>()) // *���Ļ��͸�ΪFor(i, n) a[i] += b[i](ע���int i)
#define mem(a, num) memset(a, num, sizeof(a))
#define cpy(to, from) memcpy(to, from, sizeof(from))
#define Rcpy(l, r, b) reverse_copy(l, r, b) // ע��Ϊ����ҿ�����
#define kTo10(ans, str, s, m, k) strncpy(str, s, m), str[m] = 0, ans = strtol(str, NULL, k)

#define LE(T) less_equal<T>
#define GR(T) greater<T>
#define GE(T) greater_equal<T>
#define NET(T) not_equal_to<T>

#define nth(a, k, n) nth_element(a + 0, a + k, a + n) /// *����Ҫ����--k
#define nthg(a, k, n) nth_element(a + 0, a + k, a + n, greater<int>()) // *����Ҫ����--k
#define Min(a, n) (*min_element(a, a + (n)))
#define Max(a, n) (*max_element(a, a + (n)))
#define Minpos(a, n) (min_element(a, a + (n)) - (a))
#define Maxpos(a, n) (max_element(a, a + (n)) - (a))
#define Lval(a, n, x) (*lower_bound(a, a + (n), x))
#define Uval(a, n, x) (*upper_bound(a, a + (n), x))
#define Lpos(a, n, x) (lower_bound(a, a + (n), x) - (a)) // *�Ӹ�gr()���<=
#define Upos(a, n, x) (upper_bound(a, a + (n), x) - (a)) // *�Ӹ�gr()���<
//#define BS(a, n, x) binary_search(a, a + (n), x) // ����boolֵ
#define Range(a, n, x) equal_range(a, a + (n), x) // ����pair
#define Fpos(a, n, x) (find(a, a + (n), x) - (a))
#define Fd(a, x) (a.find(x) != a.end())
#define Fdd(a, x) (find(all(a), x) != a.end())
template<class T> inline void Qmin(T &a, const T b) {if (b < a) a = b;}
template<class T> inline void Qmax(T &a, const T b) {if (a < b) a = b;} // *������λ�ã����ϵȺ�

const int inf = 0x3f3f3f3f; /// 1.06e9 (INT_MAXΪ2.147e9)
const long long llinf = 0x3f3f3f3f3f3f3f3fLL; /// 4.56e18 (LLONG_MAXΪ9.22e18)
const double pi = acos(-1.0);
//const double tens[11] = {0.0, 1e-1, 1e-2, 1e-3, 1e-4, 1e-5, 1e-6, 1e-7, 1e-8, 1e-9, 1e-10};
//double fgcd(double a, double b) {return fabs(b) > eps ? fgcd(b, fmod(a, b)) : a;}

//const int dir[4][2] = {1, 0, 0, 1, -1, 0, 0, -1};
//const int dirr[8][2] = {1, 0, 1, 1, 0, 1, -1, 1, -1, 0, -1, -1, 0, -1, 1, -1};
//const int knight_dir[8][2] = {1, 2, 1, -2, -1, 2, -1, -2, 2, 1, 2, -1, -2, 1, -2, -1};

// INT_MAX = -1u >> 1
// �����gets(s), GC(ch)����WA�Ļ�������SS(s), SC(ch)����
// ��main()�д�����ʼ��STL������������
// ��Ҫ���� val[i] = ++i ������δ�������Ϊ��
// ע��strncpy�����β0�����ֶ����
// ���λ�ò��������stable_sort(a, a + n);
// advance(it, n); �൱�� For(i, n) ++it; ��������O(1)��
// size()��ui���͵ģ�Ӧ��(int)xx.size()
// ��ȡ�������� trunc()

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
#define MT(a, b, c) p3(p2(a, b), c)
//#define MT(a, b, c) p3(a, p2(b, c))
//#define x first
//#define y second
//p2 operator + (const p2 &a, const p2 &b) {return p2(a.x + b.x, a.y + b.y);}
//p2 operator += (p2 &a, const p2 &b) {return a = a + b;}

//inline bool okC(char &c) {return c = getchar(), c != 10 && ~c;} //return (c = getchar()) == 32;
//inline bool okS(char *s) {return s = gets(s), s && *s;}
const double eps = 1e-8;

//const ll mod = ll(1e9) + 7; // *��int
//ll pow(ll a, ll r) {ll ans = 1LL; for (; r; r >>= 1) {if (r & 1) ans = ans * a % mod; a = a * a % mod;} return ans;} // *ʹ��ǰ����m==1
//ll mul_mod(ll a, ll b, ll mod) {b %= mod; ll ret = 0; for (; b; b >>= 1) {if (b & 1) ret = (ret + a) % mod; a = (a + a) % mod;} return ret;} // *ʹ��ǰ����m==1
//ll pow(ll a, ll r, ll mod) {ll ans = 1LL; for (; r; r >>= 1) {if (r & 1) ans = mul_mod(ans, a, mod); a = mul_mod(a, a, mod);} return ans;} // *ʹ��ǰ����m==1
//ll powsum(ll a, int r) {ll ans = 1LL, tmp = 1LL; for (; r; r >>= 1) {if (r & 1) ans = (ans * a + tmp) % mod; tmp = tmp * (1LL + a) % mod; a = a * a % mod;} return ans;} // *ʹ��ǰ����m==1

template<class T> inline T Qceil(T x, T y) {return (T)ceil(double(x) / y - 1e-8);}
//template<class T> inline T Qceil(T x, T y) {return x ? (x - 1) / y + 1 : 0;} // *y����Ϊ��
inline double round(double x) {return x > 0.0 ? floor(x + 0.5) : ceil(x - 0.5);}
//template<class T> inline T gcd(T a, T b) {T c; while (b) c = a % b, a = b, b = c; return a;}
//void exgcd(ll a, ll b, ll& d, ll& x, ll& y) {b ? (exgcd(b, a % b, d, y, x), y -= x * (a / b)) : (d = a, x = 1LL, y = 0LL);}
//template<class T> inline T lcm(T a, T b) {return a / gcd(a, b) * b;}

//template<class T> inline T _len(T x) {int cnt = 0;  /* set<int> s; */  for (; x; ++cnt, x /= 10){   /* s.insert(x % 10); */   ;} return cnt; /* return s.size() == cnt;  */ }
//template<class T> inline T isSQ(T n) {T tmp = Sqrt(n); return sq(tmp) == n ? tmp : 0;} // ����ӦΪ����
//inline bool isint(double x) {return fabs(x - round(x)) < eps;}
//inline int sign(double x) {return x < -eps ? -1 : x > eps;} // *
//struct comp {bool operator()(const double &a, const double &b)const {return a + eps < b;}};
//template<class T> inline T Xor(const T &x, const T &y) {return x ^ y;}
#define TT int tttt; scanf("%d%*c", &tttt); while(tttt--) // TT{ ... }
#define QQ int qqqq; scanf("%d%*c", &qqqq); while(qqqq--) // QQ{ ... }
#define Pcas() printf("Case %d: ", ++cas) // *ע��C�Ĵ�Сд�������ע��ȥ�ո�
int cas;
const int mx = 1e5 + 5;

double x[3];


inline vector<double> QuadraticEquation(double a, double b, double c)
{
	vector<double> ans;
//if (fabs(a) < eps) return ans.PB(-c / b), ans;
	double delta = b * b - 4 * a * c;
//	if (delta < -eps) return ans;
//	if (fabs(delta) < eps) return ans.PB(-b / (2 * a)), ans;
	delta = sqrt(delta);
	if (a > 0) ans.PB((-b - delta) / (2 * a)), ans.PB((-b + delta) / (2 * a));
	else ans.PB((-b + delta) / (2 * a)), ans.PB((-b - delta) / (2 * a));
	return ans;
}

double solve1(double l, double r, double b, double c, double d) /// bool ok(double x)
{
	double m;
	int i;
	For(i, 70)
	{
		m = (l + r) / 2.0;
		m*m*m + b*m*m + c*m + d < 0.0 ? l = m : r = m;
	}
	return l; //return calc(l);
}

double solve_1(double l, double r, double b, double c, double d) /// bool ok(double x)
{
	double m;
	int i;
	For(i, 70)
	{
		m = (l + r) / 2.0;
		m*m*m + b*m*m + c*m + d > 0.0 ? l = m : r = m;
	}
	return l; //return calc(l);
}

// a=1�ļ򻯰�
// <del>���ǿ��Ը���������ֵ�˻��ķ������ж���ĸ�����>0 1����==0 2����<0 3��</del>
void CubicEquation(double b, double c, double d)
{
	vector<double> x_ = QuadraticEquation(3, 2 * b, c);
	x[0] = solve1(-1000, x_[0], b, c, d);
	x[1] = solve_1(x_[0], x_[1], b, c, d);
	x[2] = solve1(x_[1], 1000, b, c, d);
	///
	printf("%.15f\n", d);
	DIII(b, c, d);
	DIII(x[0], x[1], x[2]);
	///
}

typedef vector<double> vec;
typedef vector<vec> Mat;



//struct matrix
//{
//	int n = 3, m = 3;
//	Mat mat = Mat(3, vec(3));
//
//	//matrix(int n = 0, int m = 0): n(n), m(m) {mem(mat, 0);}
//
//	matrix operator * (const matrix &b)
//	{
//		int i, j, k;
//		matrix tmp;
//		For(i, n) For(j, b.m) For(k, m) tmp.mat[i][j] += mat[i][k] * b.mat[k][j];
//		//For(i, n) For(j, b.m) For(k, m) tmp.mat[i][j] = (tmp.mat[i][j] + mat[i][k] * b.mat[k][j]) % mod; /// *ע��mat��ll
//		return tmp;
//	}
//
//	matrix trans() /// ת��
//	{
//		int i, j;
//		matrix tmp;
//		For(i, n) For(j, m) tmp.mat[j][i] = mat[i][j];
//		return tmp;
//	}
//
//} Q, AA, anss;

///// AΪn*n����
//vec gauss_jordan(Mat A)
//{
//	int n = A.size(), i, j, k, pivot;
//	Mat B(n, vec(n + 1)); /// ��A��b������B�д���
//	For(i, n) copy(all(A[i]), B[i].begin()), B[i][n] =1.0;
//	For(i, n)
//	{
//	  //  DI(i);
//		pivot = i; /// ����
//		Forr(j, i, n) if (fabs(B[j][i]) > fabs(B[pivot][i]) + eps) pivot = j;
//		swap(B[i], B[pivot]);
//		if (fabs(B[i][i]) < eps) return vec(3); /// ����������޽�
//		Forr(j, i + 1, n + 1) B[i][j] /= B[i][i];
//		For(j, n) if (i != j) Forr(k, i + 1, n + 1) B[j][k] -= B[j][i] * B[i][k];
//		//DI(i);
//	}
//	vec x = vec(n);
//	double sum = 0.0;
//	For(i, n) sum += sq(B[i][n]);
//	sum = sqrt(sum);
//	///
//DI(sum);
/////
//	For(i, n) x[i] = B[i][n] / sum;
//	return x;
//}
const int ttt[3][3] =
{
	1, 1, 1, 1, 1, -1, 1, -1, -1
};

void solve(double a[3][3])
{
	double tmp;
	int n = 3;
	int i, j, k;
	For(i, 3) For(j, 3) a[i][j] = ttt[i][j];
	For(i, n)
	{
		For(j, n) if (fabs(a[j][j]) < eps) break;
		if (j < n)
		{
			Forr(j, i + 1, n) if (fabs(a[i][j]) > eps) break;
			if (j == n) continue;
			For(k, n)
			{
				a[k][i] += a[k][j];
				a[i][k] += a[j][k];
			}
//			For(j, n) Forr(k, i, n)
//			{
//				a[k][i] += a[k][j];
//				a[i][k] += a[j][k];
//			}
			PAA(a, 3, 3);
			Pn();
		}
		Forr(j, i + 1, n)
		{
			// if(fabs(a[i][i])<eps) continue;
			tmp = -a[i][j] / a[i][i];
//		temp1[i][j] = -a[i][j] * b[i][i];
//		temp2[i][j] = b[i][j] * a[i][i];
//		//��ѭ��ȡ���� -aij / aii
			Forr(k, i, n)
			{
				a[k][j] += tmp * a[k][i];
//			m = temp1[i][j] * a[k][i];
//			n = temp2[i][j] * b[k][i];
//			// �����ӡ���ĸ�ֱ����
//			����a[k][j] = a[k][j] * n + m * b[k][j];
//			//�����������
//			����b[k][j] = b[k][j] * n��//��huajian(&a[k][j]��&b[k][j]); ����
//							����
			}
			Forr(k, i, n) //�����ƽ����б任����
			{
				a[j][k] += tmp * a[i][k];
//			m = temp1[i][j] * a[i][k];
//			n = temp2[i][j] * b[i][k];
//			a[j][k] = a[j][k] * n + m * b[j][k];
//			b[j][k] = b[j][k] * n;
//			// ajian��&a[j][k]��&b[j][k]��������
			}
		}
		PAA(a, 3, 3);
		Pn();
	}
}

int main()
{
	double a, b, c, d, e, f, aa;
	int i, j;
	double mat[3][3];
	//vec ans;
	//Mat A(3, vec(3));
	while (~scanf("%lf%lf%lf%lf%lf%lf", &a, &b, &c, &d, &e, &f))
	{
		aa = 0.0;
//		if (d != 0 || e != 0 || f != 0)
//		{
		mat[0][0] = a ;
		mat[1][1] = b ;
		mat[2][2] = c ;
		mat[0][1] = mat[1][0] = f / 2;
		mat[0][2] = mat[2][0] = e / 2;
		mat[1][2] = mat[2][1] = d / 2;
		solve(mat);
		PAA(mat, 3, 3);
//			CubicEquation(-a - b - c, a * b + a * c + b * c - (d * d + e * e + f * f) / 4, (a * d * d + b * e * e + c * f * f - d * e * f) / 4 - a * b * c);
//			A[0][1] = A[1][0] = f / 2;
//			A[0][2] = A[2][0] = e / 2;
//			A[1][2] = A[2][1] = d / 2;
//			For(i, 3)
//			{
//				A[0][0] = a - x[i];
//				A[1][1] = b - x[i];
//				A[2][2] = c - x[i];
//				ans = solve(A);
//				For(j, 3) Q.mat[j][i] = ans[j];
//			}
//			anss = Q.trans() * AA * Q;  // !!!!!!!!!
		For(i, 3) Qmax(aa, fabs(mat[i][i]));
//		}
//		else
//		{
//			Qmax(aa, a);
//			Qmax(aa, b);
//			Qmax(aa, c);
//		}
		printf("%.15f\n", 1.0 / sqrt(aa));
	}
	return 0;
}
