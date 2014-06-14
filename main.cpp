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

typedef int ll;
#define PB push_back
#define MP make_pair
#define all(a) a.begin(), a.end()
#define Uni(a) a.resize(unique(all(a)) - a.begin()) /// STL专用
#define SUni(a) sort(all(a)); Uni(a) /// STL专用
#define Unii(a, n) (unique(a, a + (n)) - a) /// 使用前请sort
#define Acc(a, n) (accumulate(a, a + (n), 0)) /// 注意0LL!!!!!以及0.0!!!
#define AaddB(a, n, b) transform(a, a + (n), b, a, plus<int>()) /// *慢的话就改为For(i, n) a[i] += b[i](注意加int i)
#define Cnt1(n) (__builtin_popcount(n))
#define Cntt1(n) (__builtin_popcountll(n)) /// 参数必须为ull类型
#define cb(n) (32 - __builtin_clz(n))
#define cbb(n) (64 - __builtin_clzll(n)) /// 参数必须为ull类型
#define sq(x) ((x) * (x))
#define Sqrt(n) (int)sqrt(0.5 + n)
#define mem(a, num) memset(a, num, sizeof(a))
#define cpy(to, from) memcpy(to, from, sizeof(from))
#define Rcpy(l, r, b) reverse_copy(l, r, b) /// 注意为左闭右开区间

typedef unsigned long long ull;
#define gr() greater<int>()
#define nth(a, k, n) nth_element(a + 0, a + k, a + n) /// *可能要事先--k
#define nthg(a, k, n) nth_element(a + 0, a + k, a + n, greater<int>()) /// *可能要事先--k
#define Min(a, n) (*min_element(a, a + (n)))
#define Max(a, n) (*max_element(a, a + (n)))
#define Minpos(a, n) (min_element(a, a + (n)) - (a))
#define Maxpos(a, n) (max_element(a, a + (n)) - (a))
#define Lowpos(a, n, x) (lower_bound(a, a + (n), x) - (a))
#define Upppos(a, n, x) (upper_bound(a, a + (n), x) - (a))
#define BS(a, n, x) binary_search(a, a + (n), x) /// 返回bool值
#define Range(a, n, x) equal_range(a, a + (n), x) /// 返回pair
#define Fpos(a, n, x) (find(a, a + (n), x) - (a))

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
#define SA(a, i, n) For(i, n) scanf("%d", a + i) /// 便于扩展 *不要在后面加逗号！
#define SAA(a, i, n, j, m) For(i, n) For(j, m) SI(a[i][j]) /// *不要在后面加逗号！
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
#define PIIIII(a, b, c, d, e) printf("%d %d %d %d %d\n", a, b, c, d, e)
#define PL(a) printf("%lld\n", a)
#define PLL(a, b) printf("%lld %lld\n", a, b)
#define PLLL(a, b, c) printf("%lld %lld %lld\n", a, b, c)
#define PD(a) printf("%f\n", a)
#define PDD(a, b) printf("%f %f\n", a, b)
#define PDDD(a, b, c) printf("%f %f %f\n", a, b, c)
#define PA(a, i, n) For(i, (n) - 1) printf("%d ", a[i]); PI(a[(n) - 1]) /// *(有时要在前面加花括号)由于要支持STL的数据类型，故不用+的形式，必要时请手动改成+
#define PAA(a, i, n, j, m) For(i, n) {For(j, (m) - 1) printf("%d ", a[i][j]); PI(a[i][(m) - 1]);}
#define PAn(a, i, n) For(i, n) PI(a[i])
#define PiA(a, i, n) For(i, n) PII(i, a[i]) /// debug用
#define rPA(a, i, n) rForr(i, n - 1, 1) printf("%d ", a[i]); PI(a[0]) /// *(有时要在前面加花括号)
#define rPAn(a, i, n) rFor(i, n - 1) PI(a[i])
#define PC(c) putchar(c)
#define Pn() putchar(10)
#define Ps() putchar(32)

#define FI freopen("in.txt", "r", stdin)
#define FO freopen("out.txt", "w", stdout)
#define Fin(f) freopen(f, "r", stdin) /// 请手动加.in
#define Fout(f) freopen(f, "w", stdout) /// 请手动加.out
#define random(m) ((rand() << 16 | rand()) % m) /// [0,m)之间的伪随机数
#define SR() srand((unsigned)time(NULL))

typedef long double ld;
const int inf = 0x3f3f3f3f; /// 1.06e9 (INT_MAX为2.147e9)
const long long llinf = 0x3f3f3f3f3f3f3f3fLL; /// 4.56e18 (LLONG_MAX为9.22e18)
const double pi = acos(-1.0);
//const double tens[11] = {0.0, 1e-1, 1e-2, 1e-3, 1e-4, 1e-5, 1e-6, 1e-7, 1e-8, 1e-9, 1e-10};
//double fgcd(double a, double b) {return fabs(b) > eps ? fgcd(b, fmod(a, b)) : a;}

//const int dir[4][2] = {1, 0, 0, 1, -1, 0, 0, -1};
//const int dirr[8][2] = {1, 0, 1, 1, 0, 1, -1, 1, -1, 0, -1, -1, 0, -1, 1, -1};
//const int knight_dir[8][2] = {1, 2, 1, -2, -1, 2, -1, -2, 2, 1, 2, -1, -2, 1, -2, -1};

/// 不可使用如下间接保留字：rank, tm,time, write, j0,j1,jn,y0,y1,yn
/// 如果用gets(s), GC(ch)读入WA的话，请用SS(s), scanf(" %c ", &ch)代替
/// 在main()中大量初始化STL类型容易死机
/// 注意strncpy不会加尾0，请手动添加
/// 相对位置不变的排序stable_sort(a, a + n);
/// C++会帮你往上类型转换，但G++不会
/*G++扩栈
int __size__ = 256 << 20; // 256MB
char *__p__ = (char*)malloc(__size__) + __size__;
__asm__("movl %0, %%esp\n" :: "r"(__p__));
*/
//ios_base::sync_with_stdio(false);

typedef pair<int, int> p2; /// 赋值时直接SII(a[i].x, a[i].y)就行, 有时候用LL

typedef pair<int, pair<int, int> > pi3;
typedef pair<pair<int, int>, pi3 > p5;
#define x first
#define y second
#define MT(a, b, c,d,e) make_pair(make_pair(a, b), make_pair(c,make_pair(d, e)))

typedef priority_queue<int> pqi;
//const double eps = 1e-8;
//const ll mod = ll(1e9) + 7;
#define Pcas() printf("Case %d: ", ++cas) /// *注意C的大小写
const int mx = int(1e5);

#define lson rt << 1, l, m
#define rson rt << 1 | 1, m + 1, r
#define root 1, 1, n /// *不要0, 0, n - 1

int lsum[mx << 2], rsum[mx << 2], msum[mx << 2], Set[mx << 2];
int lnum[mx << 2], rnum[mx << 2];

///加个define吧
/// 加个「标准测试」debug吧
inline void pushup(int rt)
{
    if (rnum[rt << 1] < lnum[rt << 1 | 1]) msum[rt] = rsum[rt << 1] + lsum[rt << 1 | 1];
	else msum[rt] = max(rsum[rt << 1] , lsum[rt << 1 | 1]);

	lsum[rt] = lsum[rt << 1], rsum[rt] = rsum[rt << 1 | 1];

	if(lsum[rt]+rsum[rt]==msum[rt]) lsum[rt]=rsum[rt]=msum[rt];

	//if()

    lnum[rt] = lnum[rt << 1], rnum[rt] = rnum[rt << 1 | 1];

	PIIIII(lnum[rt],rnum[rt],lsum[rt],msum[rt],rsum[rt]);
}

inline void pushdown(int rt, int m) /// *随题目变动
{
	if (Set[rt])
	{
		Set[rt << 1] = Set[rt];
		Set[rt << 1 | 1] = Set[rt];
		lsum[rt << 1] = msum[rt << 1] = rsum[rt << 1] = 1;
		lsum[rt << 1 | 1] = msum[rt << 1 | 1] = rsum[rt << 1 | 1] = 1;
		lnum[rt << 1] = rnum[rt << 1] = lnum[rt << 1 | 1] = rnum[rt << 1 | 1] = m;
		//msum[rt << 1 | 1] = 1; ///平分父节点add，更新左右子区间和
		Set[rt] = 0; ///父节点add清零
	}
}

void build(int rt, int l, int r)
{
	Set[rt] = 0;
	if (l == r)
	{
		SI(lnum[rt]); /// *随题目变化
		rnum[rt] = lnum[rt];
		lsum[rt]=msum[rt]=rsum[rt]=1;
		return;
	}
	int m = (l + r) >> 1;
	build(lson);
	build(rson);
	pushup(rt);
}

void update(int ql, int qr, int c, int rt, int l, int r)
{
	if (ql <= l && r <= qr)
	{
		Set[rt] = c; /// 存至此，不再往下更新 *随题目变动
		//sum[rt] = 1; /// *随题目变动
		return;
	}
	pushdown(rt , c);///用父节点add往下细分计算
	int m = (l + r) >> 1;
	if (ql <= m) update(ql, qr, c, lson);
	if (qr > m) update(ql, qr, c, rson);
	pushup(rt);
}

p5 query(int ql, int qr, int rt, int l, int r)
{
	if (ql <= l && r <= qr)
	{
		return MT(lsum[rt], rsum[rt], msum[rt], lnum[rt], rnum[rt]);
	}
	pushdown(rt , r - l + 1);///用父节点add往下细分计算
	int m = (l + r) >> 1;
	p5 p = MT(-1, -1, -1, -1, -1), p2 = MT(-1, -1, -1, -1, -1), ans; /// *注意这里的类型
	if (ql <= m) p = query(ql, qr, lson); /// *随题目变动
	if (qr > m) p2 = query(ql, qr, rson);
	if (p.x.x == -1) return p2;
	if (p2.x.x == -1) return p;
	ans.x.x = p.x.x;
	ans.y.x = p2.y.x;
	if (p.y.y.y < p2.y.y.x) ans.y.x = p.x.y + p2.x.x;
	else ans.y.x = max(p.x.y, p2.x.x);

	return ans;
}

#define IO /// *别忘了删掉!
int main()
{
#ifdef IO
	FI;
#endif
	int n, q, ql, qr, x;
	p5 p;
	SII(n, q);
	build(root);
	char ch;
	while (q--)
	{
		scanf(" %c ", &ch);
		SII(ql, qr);
		if (ch == 'U') SI(x), update(ql, qr, x, root);
		else
		{
			p = query(ql, qr, root);
			PI(max(max(p.x.x, p.x.y), p.y.x));
		}
	}
	return 0;
}
