#include<stdio.h>
#include<string.h>
#include<stdio.h>
#include<math.h>

#define MAX 32000

char table [MAX];

void seive (void){
    int i,j;
    int k = sqrt(MAX);

    memset(table, 0, sizeof(table));
    table[0]=table[1]=1;
    for (i=2;i<=k;i++){
        if(table[i]==0){
            for(j=i+i;j<=MAX;j+=i){
                table[j]=1;
            }
        }
    }
    /*for(i=0;i<=MAX;i++){
        if(!table[i])printf("%d ",i);
    }*/
}
int totient(int m){
    int res = m;
    int i;
    if(!(m&1)){
        res = res- (res>>1);
        while(!(m&1)){
            m>>=1;
        }
    }
    for(i=3;i*i<=m;i+=2){
        if(!table[i] && !(m%i)){
            res = res - (res/i);
            while(!(m%i)){
                m/=i;
            }
        }
    }
    if(m>1)res = res - (res/m);
    return res ;
}
int main(){
    seive();
    int n;
    while(scanf("%d",&n)==1 && n){
        if(n==1){
            puts("0");
            continue;
        }else{
            printf("%d\n",totient(n));
        }
    }
    return 0;
}
