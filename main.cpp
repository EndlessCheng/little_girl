#include<iostream>
#include<vector>
#include<stdio.h>
#include<algorithm>
using namespace std;
int main ()
{
    int i,j,k,l,a[50010],N,Q;
    while(scanf("%d",&N)!=EOF){
    for(i=0;i<N;i++)scanf("%d",&a[i]);
    vector<int>v(a,a+N);
    vector<int>::iterator low,up;
    scanf("%d",&Q);
    for(i=1;i<=Q;i++)
    {
        scanf("%d",&l);
        low=lower_bound (v.begin(), v.end(), l);
        int pos_l=low-v.begin();
        int indx_l=pos_l-1;
        up= upper_bound (v.begin(), v.end(), l);
        int pos_u=up-v.begin();
        int indx_u=pos_u-1;
        if(indx_l<0)printf("X ");
        else{printf("%d ",a[indx_l]);}
        if(indx_u+1>N-1)printf("X\n");
        else{printf("%d\n",a[indx_u+1]);}
    }
    }
    return 0;
}
