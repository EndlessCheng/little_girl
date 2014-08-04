#include <cstdio>
#include <cstring>
#include <cmath>
#include <iostream>
#include <algorithm>
#include <queue>
#include <map>
#include <stack>
#define LL long long
#define INF 0x3f3f3f3f

using namespace std;

//---===Flower for Mst. Shen !!!===----

using namespace std;

const int maxn=10000000;

//最大公约数、最小公倍数
int gcd(int a,int b){return b?gcd(b,a%b):a;}
int lcm(int a,int b){return a*b/gcd(a,b);}

//扩展欧几里得
void Extended_Euclid(LL a, LL b, LL &d, LL &x, LL &y){
	if (b == 0LL)
    {
        d = a;
        x = 1LL;
        y = 0LL;
    }
	else
    {
        Extended_Euclid(b, a % b, d, y, x);
        y -= x * (a / b);
    }
}


//-------素数与欧拉函数筛法-------
int n;
int prime[maxn],phi[maxn],e[maxn],div_num[maxn],nprime;
bool isprime[maxn];


//Eratosthenes筛法
void prime_table(){
    memset(isprime,true,sizeof(isprime));
    nprime=0;
    for (int i=2;i<n;i++)
        if (isprime[i])
        {
             prime[nprime++]=i;
             for (int j=i*i;j>0&&j<n;j+=i) isprime[j]=false;
        }
}

//线性时间筛法
void prime_table_plus(int n){
    nprime=0;
    memset(isprime,true,sizeof(isprime));
    for(int i=2;i<n;i++){
        if(isprime[i])prime[nprime++]=i;
        for(int j=0;j<nprime && prime[j]*i<n;j++){
            isprime[prime[j]*i]=false;
            if(i%prime[j]==0)break;
        }
    }
}

//线性时间-素数+欧拉函数
void phi_table(){
    int i,j;
    memset(isprime,true,sizeof(isprime));
    nprime=0;
    for(i=2;i<n;i++){
        if(isprime[i]){
            prime[nprime++]=i;
            phi[i]=i-1;
        }
        for(j=0;j<nprime&&i*prime[j]<n;j++){
            isprime[i*prime[j]]=false;
            if(i%prime[j]==0){
                phi[i*prime[j]]=phi[i]*prime[j];
                break;
            }
            else
                phi[i*prime[j]]=phi[i]*(prime[j]-1);
        }
    }
}

//线性时间-素数+约数个数
void div_num_table(){
    int i,j;
    memset(isprime,true,sizeof(isprime));
    nprime=0;
    for(i=2;i<n;i++){
        if(isprime[i]){
            prime[nprime++]=i;
            e[i]=1;
            div_num[i]=2;
        }
        for(j=0;j<nprime&&i*prime[j]<n;j++){
            isprime[i*prime[j]]=false;
            if(i%prime[j]==0){
                div_num[i*prime[j]]=div_num[i]/(e[i]+1)*(e[i]+2);
                e[i*prime[j]]=e[i]+1;
                break;
            }else{
                div_num[i*prime[j]]=div_num[i]*div_num[prime[j]];
                e[i*prime[j]]=1;
            }
        }
    }
}

char p[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};

bool ifp(unsigned int t)
{
    if (t == 1) return 0;
    for (int i = 0; i < nprime && (unsigned int)prime[i] * (unsigned int)prime[i] <= t; i ++)
        if (t % (unsigned int)prime[i] == 0) return false;
    return true;
}

int main()
{
    int n;
    prime_table_plus(1 << 17);
    while(~scanf("%d", &n))
    {
        int ans = 0, t;
        for (int i = 0; i < n; i ++)
        {
            scanf("%d", &t);
            ans += ifp(t);
        }
        printf("%d\n", ans);
    }
    return 0;
}
