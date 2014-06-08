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

typedef long long ll;
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
typedef pair<pair<int, int>, int> p3;
typedef pair<int, pair<int, int> > pi3;
//#define x first
//#define y second
//#define MT(a, b, c) make_pair(make_pair(a, b), c)

typedef priority_queue<int> pqi;
//const double eps = 1e-8;
const ll mod = ll(1e9) + 7LL;
#define Pcas() printf("Case #%d: ", ++cas) /// *注意case的大小写
const int mx = int(1e5) + 5;

const ull B = 1e8 + 7; /// 哈希基数
const int mx_s_num = 1;

char s[mx_s_num][mx]; /// 注意，一定要用gets(s[i] + 1)，从下标1开始读
ull ha[mx_s_num][mx]; /// ha[i]从1开始，一直到ha[i][n]，对于只给mx_s_num * mx范围的题目，建议用vector<ull> ha[mx];
ull bp[mx] = {1ULL}; /// B^i数组
int len[mx_s_num]; /// len[i] = strlen(s[i] + 1); 一定要是s[i] + 1，否则n会是0

void init_bp()
{
	int i;
	Forr(i, 1, mx) bp[i] = bp[i - 1] * B;
}

void init_hash(int s_num) /// 请在main()中完成len的求取
{
	int i, j;
	For(i, s_num) Forr(j, 1, len[i] + 1) ha[i][j] = ha[i][j - 1] * B + s[i][j];
	int n = Max(len, s_num); /// 调用#define的Max()
}

ull get_hash(char *s) /// 直接返回整个字符串的hash，必要时可自定义mod值
{
	ull ha = 0ULL;
	for (int i = 0; s[i]; ++i) ha = ha * B + s[i];
	return ha;
}

ull get_hash(int *a, int n) /// 返回整个int数组的hash值，若要求桶很小，则可自定义mod值
{
	int i;
	ull ha = 0ULL;
	For(i, n) ha = ha * B + (ull)a[i];
	return ha;
}

/// 注意pos一定不能是0!!!!
inline ull get_hash(ull *Ha, int pos, int l) /// 返回Ha[pos...pos+l-1]的值，pos与l必须是正数
{
	return Ha[pos + l - 1] - Ha[pos - 1] * bp[l];
}

inline ull merge_hash(ull ha1, ull ha2, int len2) /// 返回s1+s2拼接后的hash值
{
	return ha1 * bp[len2] + ha2;
}

bool contain(int ida, int idb) /// b是否为a的子串 ，ida和idb为字符串下标，若只有两个字符串，使用时传入参数(0, 1)、(1, 0)就行
{
	if (len[ida] < len[idb]) return false;
	ull hab = ha[idb][len[idb]];
	for (int i = 1; i + len[idb] <= len[ida]; ++i)
		if (get_hash(ha[ida], i, len[idb]) == hab) return true;
	return false;
}

int overlap(int ida, int idb) /// 求a后缀与b前缀的最长公共子串，ida和idb为字符串下标，若只有两个字符串，使用时传入参数(0, 1)、(1, 0)就行
{
	int ans = 0, i;
	Forr(i, 1, min(len[ida], len[idb]) + 1)
	if (get_hash(ha[ida], len[ida] - i + 1, i) == get_hash(ha[idb], 1, i)) ans = i;
// 可在if中加上 && strncmp(s[ida] + len[ida] - i + 1, s[idb] + 1, i) == 0(不过这就失去意义了，还不如双hash)
	return ans;
}

int lcp(int i)
{
	int l = 0, r = len[0] - i + 2, m;
	while (l + 1 < r)
	{
		m = (l + r) >> 1;
		get_hash(ha[0], 1, m) == get_hash(ha[0], i, m) ? l = m : r = m;
	}
	return l;
}

long long CaculateFibonacci(int n)
{
	if (n == 0) return 0;
	//if(n==1)
	long long ans_arr[2][2] = { 1, 0, 0, 1 };
	long long base_arr[2][2] = { 0, 1, 1, 1 };
	long long temp00 = 0, temp01 = 0, temp10 = 0, temp11 = 0;
	while (n)
	{
		if (n & 1)  //当前最低位为1,将目标矩阵与当前基矩阵对应的幂阵相乘
		{
			temp00 = ans_arr[0][0], temp01 = ans_arr[0][1], temp10 = ans_arr[1][0], temp11 = ans_arr[1][1];
			ans_arr[0][0] = (temp00 * base_arr[0][0] + temp01 * base_arr[1][0]) % mod;
			ans_arr[0][1] = (temp00 * base_arr[0][1] + temp01 * base_arr[1][1]) % mod;
			ans_arr[1][0] = (temp10 * base_arr[0][0] + temp11 * base_arr[1][0]) % mod;
			ans_arr[1][1] = (temp10 * base_arr[0][1] + temp11 * base_arr[1][1]) % mod;
		}
		//从基矩阵计算当前相应的幂阵
		temp00 = base_arr[0][0], temp01 = base_arr[0][1], temp10 = base_arr[1][0], temp11 = base_arr[1][1];
		base_arr[0][0] = (temp00 * temp00 + temp01 * temp10) % mod;
		base_arr[0][1] = (temp00 * temp01 + temp01 * temp11) % mod;
		base_arr[1][0] = (temp10 * temp00 + temp11 * temp10) % mod;
		base_arr[1][1] = (temp10 * temp01 + temp11 * temp11) % mod;
		n >>= 1;
	}
	return ans_arr[0][1];
}

int a[mx];

int main()
{
	int i;
	ll sum;
	//For(i,5) PL(CaculateFibonacci(i));
	init_bp();
	while (gets(s[0] + 1))
	{
		len[0] = strlen(s[0] + 1);
		init_hash(1);
		a[len[0]] = (s[0][1] == s[0][len[0]]);
		rForr(i, len[0] - 1, 1)
		{
			a[i] = a[i + 1] + lcp(i);
		}
		sum = 0;
		//Forr(i,1,len[0]+1) PI(a[i]);
		Forr(i, 1, len[0] + 1) sum = (sum + CaculateFibonacci(a[i])) % mod;
		PI(sum);
	}
	return 0;
}
