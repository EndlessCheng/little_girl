#include<bits/stdc++.h>
using namespace std;

#define Fin(f) freopen(f, "r", stdin)
#define Fout(f) freopen(f, "w", stdout)
#define SR() srand((unsigned)time(NULL))
#define random(m) ((rand() << 16 | rand()) % m) /// [0,m)֮���α�����

#define all(a) a.begin(), a.end()

#define Inter(u, a, n, b, m) u.resize(set_intersection(a, a + (n), b, b + (m), u.begin()) - u.begin())
#define SInter(u, a, n, b, m) u.resize((n) + (m)); sort(a, a + (n)); sort(b, b + (m)); Inter(u, a, n, b, m)
#define Union(u, a, n, b, m) u.resize(set_union(a, a + (n), b, b + (m), u.begin()) - u.begin());
#define SUnion(u, a, n, b, m) u.resize((n) + (m)); sort(a, a + (n)); sort(b, b + (m)); Union(u, a, n, b, m)
#define Diff(u, a, n, b, m) u.resize(set_difference(a, a + (n), b, b + (m), u.begin()) - u.begin())
#define SDiff(u, a, n, b, m) u.resize((n) + (m)); sort(a, a + (n)); sort(b, b + (m)); Diff(u, a, n, b, m)
#define Sym(u, a, n, b, m) u.resize(set_symmetric_difference(a, a + (n), b, b + (m) u.begin()) - u.begin())
#define SSym(u, a, n, b, m) u.resize((n) + (m)); sort(a, a + (n)); sort(b, b + (m)); Sym(u, a, n, b, m)

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
#define SC(c) scanf(" %c", &c)

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
#define PA(a, i, n) For(i, (n) - 1) printf("%d ", a[i]); PI(a[(n) - 1]) /// *(��ʱҪ��ǰ��ӻ�����)����Ҫ֧��STL���������ͣ��ʲ���+����ʽ����Ҫʱ���ֶ��ĳ�+
#define PAA(a, i, n, j, m) For(i, n) {For(j, (m) - 1) printf("%d ", a[i][j]); PI(a[i][(m) - 1]);}
#define PAn(a, i, n) For(i, n) PI(a[i])
#define PiA(a, i, n) For(i, n) PII(i, a[i]) /// debug��
#define rPA(a, i, n) rForr(i, n - 1, 1) printf("%d ", a[i]); PI(a[0]) /// *(��ʱҪ��ǰ��ӻ�����)
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
#define Qmin(a, b) if(a > (b)) a = (b)
#define Qmax(a, b) if(a < (b)) a = (b) /// *��ʱ��Ҫ���ȼ���(b)��������

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
/*id++��ջ
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
#define Pcas() printf("Case %d: ", ++cas) /// *ע��C�Ĵ�Сд
const int mx = int(1e2) + 5;

vector<int> G[mx];
int dfs_clock, intime[mx];
bool iscut[mx];

int dfs(int u, int fa)
{
	int child = 0, min_subtree_fatime_u = intime[u] = ++dfs_clock, min_subtree_fatime_v, i, v;
	For(i, G[u].size())
	{
		v = G[u][i];
		if (!intime[v]) /// ���û���ʹ�v
		{
			++child;
			min_subtree_fatime_v = dfs(v, u);
			//PII(v,min_subtree_fatime_v);
			Qmin(min_subtree_fatime_u, min_subtree_fatime_v); /// �ú����low����u��low
			if (min_subtree_fatime_v >= intime[u]) /// u��һ����vΪ���������޷�(ͨ�������)����u������
			{
				iscut[u] = true;
				// if (min_subtree_fatime_v > intime[u]) isbridge[u][v] = isbridge[v][u] = true;
			}
		}
		else if (intime[v] < intime[u] && v != fa) /// ������ʹ�v���������ʱ���жϳ����Ƿ���ߣ���ô�͸���low (������Ϊu-fa�����ߣ�����v!=fa)
			Qmin(min_subtree_fatime_u, intime[v]);
	}
	if (fa == -1 && child == 1) iscut[u] = 0;
	return min_subtree_fatime_u;
}

#define IO /// *������ɾ��!
int main()
{
#ifdef IO
//	Fin("in.txt");
#endif
	int n, i, u, v;
	while (SI(n), n)
	{
		Forr(i, 1, n + 1) G[i].clear();
		while (SI(u), u) while (GCn() != 10) SI(v), G[u].PB(v), G[v].PB(u);
		mem(intime, 0), mem(iscut, 0);
		Forr(i, 1, n + 1) if (!intime[i]) dfs(i, -1);
		PI(Acc(iscut + 1, n));
	}
	return 0;
}
