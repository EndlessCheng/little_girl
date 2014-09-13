#include <cstdlib>
#include <cctype>
#include <cstring>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>
#include <iostream>
#include <sstream>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <fstream>
#include <numeric>
#include <iomanip>
#include <bitset>
#include <list>
#include <stdexcept>
#include <functional>
#include <utility>
#include <ctime>
#include <cassert>
#include <complex>
using namespace std;
#define rep(i,a,n) for (int i=a;i<n;i++)
#define per(i,a,n) for (int i=n-1;i>=a;i--)
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(),(x).end()
#define fi first
#define se second
#define SZ(x) ((int)(x).size())
#define ACCU accumulate
#define TWO(x) (1<<(x))
#define TWOL(x) (1ll<<(x))
#define clr(a) memset(a,0,sizeof(a))
#define POSIN(x,y) (0<=(x)&&(x)<n&&0<=(y)&&(y)<m)
#define PRINTC(x) cout<<"Case #"<<++__<<": "<<x<<endl
#define POP(x) (__builtin_popcount(x))
#define POPL(x) (__builtin_popcountll(x))
typedef vector<int> VI;
typedef vector<string> VS;
typedef vector<double> VD;
typedef long long ll;
typedef long double LD;
typedef pair<int,int> PII;
typedef pair<ll,ll> PLL;
typedef vector<ll> VL;
typedef vector<PII> VPII;
typedef complex<double> CD;
const int inf=0x20202020;
const ll mod=1000000007;
const double eps=1e-9;
const double pi=3.1415926535897932384626;
const int DX[]={1,0,-1,0},DY[]={0,1,0,-1};
ll powmod(ll a,ll b) {ll res=1;a%=mod;for(;b;b>>=1){if(b&1)res=res*a%mod;a=a*a%mod;}return res;}
ll powmod(ll a,ll b,ll mod) {ll res=1;a%=mod;for(;b;b>>=1){if(b&1)res=res*a%mod;a=a*a%mod;}return res;}
ll gcd(ll a,ll b) { return b?gcd(b,a%b):a;}
// head

const int N=40100;
int _,n,m,s,t,cnt;
int f[N],F[N],u[N],v[N],c[N],conc[N],pps[N],pos[N];
LD g[300][300];
int find(int *f,int u) { return f[u]==u?u:f[u]=find(f,f[u]);}
void gauss(int n) {
    rep(i,0,n) {
        int p=i;
        rep(j,i+1,n) if (fabs(g[j][i])>=fabs(g[p][i])) p=j;
        rep(j,i,n+1) swap(g[i][j],g[p][j]);
        rep(k,i+1,n+1) g[i][k]/=g[i][i]; g[i][i]=1;
        rep(j,i+1,n) {
            LD cof=-g[j][i];
            rep(k,i,n+1) g[j][k]+=cof*g[i][k];
        }
    }
    per(i,0,n) {
        rep(j,0,i) g[j][n]-=g[j][i]*g[i][n];
    }
}
int main() {
    for (scanf("%d",&_);_;_--) {
        scanf("%d%d%d%d",&n,&m,&s,&t);
        rep(i,1,n+1) f[i]=i,F[i]=i;
        rep(i,0,m) {
            scanf("%d%d%d",u+i,v+i,c+i);
            if (c[i]==0) f[find(f,u[i])]=find(f,v[i]);
            F[find(F,u[i])]=find(F,v[i]);
        }
        if (find(F,s)!=find(F,t)) {
            puts("inf");
            continue;
        }
        if (find(f,s)==find(f,t)) {
            puts("0.000000");
            continue;
        }
        cnt=0;
        rep(i,1,n+1) conc[i]=find(F,s)==find(F,i);
        rep(i,1,n+1) if (find(f,i)==i&&conc[i]) pos[i]=cnt++;
        rep(i,0,cnt) rep(j,0,cnt+1) g[i][j]=0;
        rep(i,1,n+1) pps[i]=pos[find(f,i)];
        rep(i,0,m) if (c[i]!=0&&conc[u[i]]&&conc[v[i]]&&pps[u[i]]!=pps[v[i]])
            g[pps[u[i]]][pps[v[i]]]++,g[pps[v[i]]][pps[u[i]]]++;
        rep(i,0,cnt) rep(j,0,cnt) if (i!=j) g[i][i]-=g[i][j];
        g[pps[s]][cnt]=-1; rep(i,0,cnt) g[pps[t]][i]=0; g[pps[t]][pps[t]]=1;
        gauss(cnt);
        printf("%.6f\n",(double)g[pps[s]][cnt]);
    }
}
