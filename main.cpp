#include<bits/stdc++.h>
using namespace std;

#define Fin(f) freopen(f, "r", stdin)
#define Fout(f) freopen(f, "w", stdout)
#define SR() srand((unsigned)time(NULL))
#define random(m) ((rand() << 16 | rand()) % m) /// [0,m)֮���α�����

#define all(a) a.begin(), a.end()

#define Inter(v, a, n, b, m) v.resize(set_intersection(a, a + (n), b, b + (m), v.begin()) - v.begin())
#define SInter(v, a, n, b, m) v.resize((n) + (m)); sort(a, a + (n)); sort(b, b + (m)); Inter(v, a, n, b, m)
#define Union(v, a, n, b, m) v.resize(set_union(a, a + (n), b, b + (m), v.begin()) - v.begin());
#define SUnion(v, a, n, b, m) v.resize((n) + (m)); sort(a, a + (n)); sort(b, b + (m)); Union(v, a, n, b, m)
#define Diff(v, a, n, b, m) v.resize(set_difference(a, a + (n), b, b + (m), v.begin()) - v.begin())
#define SDiff(v, a, n, b, m) v.resize((n) + (m)); sort(a, a + (n)); sort(b, b + (m)); Diff(v, a, n, b, m)
#define Sym(v, a, n, b, m) v.resize(set_symmetric_difference(a, a + (n), b, b + (m) v.begin()) - v.begin())
#define SSym(v, a, n, b, m) v.resize((n) + (m)); sort(a, a + (n)); sort(b, b + (m)); Sym(v, a, n, b, m)

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

#define For(i, n) for (i = 0; i < (n); ++i)
#define Forr(i, start, n) for (i = start; i < (n); ++i)
#define Forrr(i, start, n, step) for (i = start; i < (n); i += (step))
#define rFor(i, n) for (i = (n); i >= 0; --i)
#define rForr(i, n, end) for (i = n; i >= (end); --i)
#define rForrr(i, n, end, step) for (i = n; i >= (end); i -= (step))

#define SI(a) scanf("%dp", &a)
#define SII(a, b) scanf("%dp%dp", &a, &b)
#define SIII(a, b, c) scanf("%dp%dp%dp", &a, &b, &c)
#define SIIII(a, b, c, dp) scanf("%dp%dp%dp%dp", &a, &b, &c, &dp)
#define SIIIII(a, b, c, dp, e) scanf("%dp%dp%dp%dp%dp", &a, &b, &c, &dp, &e)
#define SIIIIII(a, b, c, dp, e, f) scanf("%dp%dp%dp%dp%dp%dp", &a, &b, &c, &dp, &e, &f)
#define SL(a) scanf("%lld", &a)
#define SLL(a, b) scanf("%lld%lld", &a, &b)
#define SLLL(a, b, c) scanf("%lld%lld%lld", &a, &b, &c)
#define SLLLL(a, b, c, dp) scanf("%lld%lld%lld%lld", &a, &b, &c, &dp)
#define SD(a) scanf("%lf", &a)
#define SDD(a, b) scanf("%lf%lf", &a, &b)
#define SDDD(a, b, c) scanf("%lf%lf%lf", &a, &b, &c)
#define SDDDD(a, b, c, dp) scanf("%lf%lf%lf%lf", &a, &b, &c, &dp)
#define SA(a, i, n) For(i, n) scanf("%dp", a + i) /// ������չ *��Ҫ�ں���Ӷ��ţ�
#define SAA(a, i, n, j, m) For(i, n) For(j, m) SI(a[i][j]) /// *��Ҫ�ں���Ӷ��ţ�
#define GC(c) (c = getchar())
#define GCn() getchar()
#define UC(c) ungetc(c, stdin)
#define SS(s) scanf("%s", s)
#define SSS(s, s2) scanf("%s%s", s, s2)
#define SC(c) scanf(" %c", &c)

#define PI(a) printf("%dp\n", a)
#define PII(a, b) printf("%dp %dp\n", a, b)
#define PIII(a, b, c) printf("%dp %dp %dp\n", a, b, c)
#define PIIII(a, b, c, dp) printf("%dp %dp %dp %dp\n", a, b, c, dp)
#define PIIIII(a, b, c, dp, e) printf("%dp %dp %dp %dp %dp\n", a, b, c, dp, e)
#define PL(a) printf("%lld\n", a)
#define PLL(a, b) printf("%lld %lld\n", a, b)
#define PLLL(a, b, c) printf("%lld %lld %lld\n", a, b, c)
#define PD(a) printf("%f\n", a)
#define PDD(a, b) printf("%f %f\n", a, b)
#define PDDD(a, b, c) printf("%f %f %f\n", a, b, c)
#define PA(a, i, n) For(i, (n) - 1) printf("%dp ", a[i]); PI(a[(n) - 1]) /// *(��ʱҪ��ǰ��ӻ�����)����Ҫ֧��STL���������ͣ��ʲ���+����ʽ����Ҫʱ���ֶ��ĳ�+
#define PAA(a, i, n, j, m) For(i, n) {For(j, (m) - 1) printf("%dp ", a[i][j]); PI(a[i][(m) - 1]);}
#define PAn(a, i, n) For(i, n) PI(a[i])
#define PiA(a, i, n) For(i, n) PII(i, a[i]) /// debug��
#define rPA(a, i, n) rForr(i, n - 1, 1) printf("%dp ", a[i]); PI(a[0]) /// *(��ʱҪ��ǰ��ӻ�����)
#define rPAn(a, i, n) rFor(i, n - 1) PI(a[i])
#define PC(c) putchar(c)
#define Pn() putchar(10)
#define Ps() putchar(32)

#define Uni(a) a.resize(unique(all(a)) - a.begin()) /// STLר��
#define SUni(a) sort(all(a)); Uni(a) /// STLר��
#define Unii(a, n) (unique(a, a + (n)) - a)
#define SUnii(a, n) sort(a, a + n); Unii(a, n)
#define Acc(a, n) (accumulate(a, a + (n), 0)) /// ע��0LL!!!!!�Լ�0.0!!!
#define AaddB(a, n, b) transform(a, a + (n), b, a, plus<int>()) /// *���Ļ��͸�ΪFor(i, n) a[i] += b[i](ע���int i)
#define mem(a, num) memset(a, num, sizeof(a))
#define cpy(to, from) memcpy(to, from, sizeof(from))
#define Rcpy(l, r, b) reverse_copy(l, r, b) /// ע��Ϊ����ҿ�����
#define kTo10(ans, str, s, m, k) strncpy(str, s, m), str[m] = 0, ans = strtol(str, NULL, k)

#define gr() greater<int>()
#define nth(a, k, n) nth_element(a + 0, a + k, a + n) /// *����Ҫ����--k
#define nthg(a, k, n) nth_element(a + 0, a + k, a + n, greater<int>()) /// *����Ҫ����--k
#define Min(a, n) (*min_element(a, a + (n)))
#define Max(a, n) (*max_element(a, a + (n)))
#define Minpos(a, n) (min_element(a, a + (n)) - (a))
#define Maxpos(a, n) (max_element(a, a + (n)) - (a))
#define Lowpos(a, n, x) (lower_bound(a, a + (n), x) - (a)) /// *�Ӹ�gr()���<=
#define Upppos(a, n, x) (upper_bound(a, a + (n), x) - (a)) /// *�Ӹ�gr()���<
#define BS(a, n, x) binary_search(a, a + (n), x) /// ����boolֵ
#define Range(a, n, x) equal_range(a, a + (n), x) /// ����pair
#define Fpos(a, n, x) (find(a, a + (n), x) - (a))
#define Fd(a, x) (find(all(a), x) != a.end())
template<class T> inline void Qmin(T &a, const T b) {if (b < a) a = b;}
template<class T> inline void Qmax(T &a, const T b) {if (a < b) a = b;} /// *������λ�ã����ϵȺ�
template<class T> inline T ceil(T x, T y) {return (x - 1) / y + 1;}

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

typedef unsigned int ui;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef vector<int>::iterator viter;
typedef set<int>::iterator siter; /// *�뼴ʱ�޸�ģ�����
typedef map<int, int>::iterator miter; /// *�뼴ʱ�޸�ģ�����
typedef multiset<int>::iterator msiter;
typedef multimap<int, int>::iterator mmter;
typedef priority_queue<int> pqi; /// *�뼴ʱ�޸�ģ�����
typedef priority_queue<int, vector<int>, greater<int> > spqi; /// С����top  *�뼴ʱ�޸�ģ�����
typedef pair<int, int> p2; /// ��ֵʱֱ��SII(a[i].x, a[i].y)����, ��ʱ����LL
typedef pair<pair<int, int>, int> p3;
typedef pair<int, pair<int, int> > pi3;
//#define x first
//#define y second
//#define MT(a, b, c) make_pair(make_pair(a, b), c)
#define loop(it, a) for (it = a.begin(); it != a.end(); ++it)

//const double eps = 1e-8;
//const ll mod = ll(1e9) + 7; /// *��int
#define Pcas() printf("Case %dp: ", ++cas) /// *ע��C�Ĵ�Сд



const int mx = 5005;

char p[mx], q[mx];
int sp[26], sq[26], ep[26], eq[26];
int dp[2][mx], c[2][mx]; /// ��c[i][j]��ʾ���е�i,jλ��ʱ����ʣ�¶���δƥ�����ɫ

int solve(int n, int m)
{
	int t = 0;
	memset(c, 0, sizeof(c));
	memset(dp, 0, sizeof(dp));
	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= m; j++)
		{
			if (i == 0 && j == 0) continue;
			int v1 = inf, v2 = inf;
			if (i) v1 = dp[t ^ 1][j] + c[t ^ 1][j]; // ��� t^1 ���� i-1��t ���� i
			if (j) v2 = dp[t][j - 1] + c[t][j - 1];
			dp[t][j] = min(v1, v2);
			if (i)
			{
				c[t][j] = c[t ^ 1][j];
				if (sp[p[i]] == i && sq[p[i]] > j) c[t][j]++;
				if (ep[p[i]] == i && eq[p[i]] <= j) c[t][j]--;
			}
			else if (j)
			{
				c[t][j] = c[t][j - 1];
				if (sq[q[j]] == j && sp[q[j]] > i) c[t][j]++;
				if (eq[q[j]] == j && ep[q[j]] <= i) c[t][j]--;
			}
		}
		t ^= 1;
	}
	return dp[t ^ 1][m];
}

int main()
{
	int T;
	scanf("%d", &T);
	while (T--)
	{
		scanf("%s%s", p + 1, q + 1);
		int n = strlen(p + 1);
		int m = strlen(q + 1);
		for (int i = 1; i <= n; i++) p[i] -= 'A';
		for (int i = 1; i <= m; i++) q[i] -= 'A';
		for (int i = 0; i < 26; i++) sp[i] = sq[i] = inf, ep[i] = eq[i] = 0;
		for (int i = 1; i <= n; i++) Qmin(sp[p[i]], i), ep[p[i]] = i;
		for (int i = 1; i <= m; i++) Qmin(sq[q[i]], i), eq[q[i]] = i;
		printf("%d\n", solve(n, m));
	}
	return 0;
}
