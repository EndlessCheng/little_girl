#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <vector>
#include<queue>
#include <algorithm>
#define Lo o<<1
#define Ro o << 1|1
#define lc Lo,L,mid
#define rc Ro,mid+1,R
typedef long long LL;
using namespace std;
const int mx = 100005;
int gcd[mx << 2],a[mx << 2];
int n ,am[mx];
int l,r,m;
int num,gd,b,c;
void build (int o = 1,int L = 1,int R = n)
{
    if (R == L)
    {
        gcd[o] = am[L];
        a[o] = 1;
        return;
    }
    int mid = (R + L) >> 1;
    build(rc);
    build(lc);
    gcd[o] = __gcd(gcd[o<<1],gcd[o<<1|1]);
    if (gcd[o] == gcd [Lo])
        a[o] += a[Lo];
    if (gcd[o] == gcd[Ro])
        a[o] += a[Ro];
   /// printf("gcd = %d a = %d L = %d R = %d\n",gcd[o],a[o],L,R);
}
void qu (int o = 1,int L = 1,int R = n)
{
    if (l <= L && r >= R)
    {
        if (gd == 0)
        {
            gd = gcd[o];
            num = a[o];
        }
        else
        {
            b = __gcd(gd,gcd[o]);
            if (b < gd)
                num = 0;
            if (b == gcd[o])
                num += a[o];
            gd = b;
        }
        return;
    }
    int mid = (R + L) >> 1;
    if (l <= mid) qu(lc);
    if (r > mid) qu(rc);
}
int main()
{
    scanf("%d",&n);
    for(int i = 1; i <= n; i++)
        scanf("%d",&am[i]);
    scanf("%d",&m);
    build ();
    while(m--)
    {
        scanf("%d%d",&l,&r);
        gd = 0;
        num = 0;
        qu();
        printf("%d\n",r - l + 1 - num);
    }
}
