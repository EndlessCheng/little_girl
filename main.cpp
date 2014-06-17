#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <algorithm>
using namespace std;

typedef struct List{
    double x,y,z,r;
}LIST;
LIST a[110];
double s[110][110];

int main()
{
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);

    int N,n,i,j,cnt=1,k;
    while(scanf(" %d",&N)==1 && N!=-1){
        for(n=0;n<N;n++)
            scanf(" %lf %lf %lf %lf",&a[n].x,&a[n].y,&a[n].z,&a[n].r);
        scanf(" %lf %lf %lf",&a[N].x,&a[N].y,&a[N].z);
        scanf(" %lf %lf %lf",&a[N+1].x,&a[N+1].y,&a[N+1].z);
        a[N].r = 0;
        a[N+1].r = 0;
        N += 2;
        //for(n=0;n<N;n++)
            //printf("%.0lf %.0lf %.0lf %.0lf\n",a[n].x,a[n].y,a[n].z,a[n].r);
        for(i=0;i<N;i++){
            for(j=0;j<N;j++){
                if(i==j)
                    continue;
                double dx = a[i].x-a[j].x;
                double dy = a[i].y-a[j].y;
                double dz = a[i].z-a[j].z;
                double dis = sqrt(dx*dx+dy*dy+dz*dz);
                dis -= a[i].r;
                dis -= a[j].r;
                if(dis<=0)
                    s[i][j] = 0;
                else
                    s[i][j] = dis;
            }
            s[i][i] = 0;
        }
        for(k=0;k<N;k++)
            for(i=0;i<N;i++)
                for(j=0;j<N;j++)
                    s[i][j] = min(s[i][j],s[i][k]+s[k][j]);
        printf("Cheese %d: Travel time = %.0lf sec\n",cnt++,(s[N-1][N-2]*10));
    }

    return 0;
}
