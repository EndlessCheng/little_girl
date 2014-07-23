
/*This is by Technical Bangla from University of Dhaka*/
#include <stdio.h>
#include <math.h>
#define max 500100

int pr[max],prime[41600],f_count[1000002];

void PrimeGen()
{
    int i,j,k,l;pr[0]=pr[1]=1;for(i=4;i<max;i+=2) pr[i]=1;
    for(i=3;i<710;i+=2)
    {
        if(!pr[i]) for(j=i*i,k=i<<1;j<max;j+=k) pr[j]=1;
    }
    for(i=j=0;i<max;i++) if(!pr[i]) prime[j++]=i;
}

int Factors_Count(int n)
{
    int i,p,count;
    for(i=count=0;(p=prime[i])<=n&&p<1007;)
    {
        if(n<500100)
        {
            if(!pr[n])
            {
                count++;
                break;
            }
        }
        if(n%p) i++;
        else
        {
            while(n%p==0)
            {
                n/=p;
                count++;
            }
            i++;
        }
    }
    if(count) return count;
    return 1;

}

void Factorial_Factors()
{
    int i;
    for(i=1,f_count[i]=0;i<1000000;i++) f_count[i+1]=f_count[i]+Factors_Count(i+1);
}

int main()
{
    int n;
    PrimeGen();
    Factorial_Factors();
    while(scanf("%d",&n)==1) printf("%d\n",f_count[n]);
    return 0;
}
