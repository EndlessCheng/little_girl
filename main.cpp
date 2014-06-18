#include<iostream>
#include<cstdio>
#include<string>
#include<cstdlib>
#include<cmath>
#include<queue>
#include<stack>
#include<vector>
#include<algorithm>
#include<iomanip>
using namespace std;

#define lim 9
#define PI 3.1415926535
#define Len sizeof(struct node)

int xx[8]={-1, 0 , 1,-1, 1,-1, 0, 1};
int yy[8]={ 1, 1 , 1, 0, 0,-1,-1,-1};
int min(int x,int y){return x>y?y:x;}
int max(int x,int y){return x>y?x:y;}

typedef struct node
{
	int num;
}node;


int main()
{
    int i,j,k,n,t,x,y,hl,vl,pos,m;
    char ch;
    t=0;
    while(scanf("%d",&n)!=EOF)
    {
        int hlines[lim+1][lim+1]={0},vlines[lim+1][lim+1]={0};
		int hspan[lim+1][lim+1]={0},vspan[lim+1][lim+1]={0};
		int square[lim+1]={0};
        scanf("%d",&m);
        for(k=0;k<m;k++)
        {
            scanf(" %c %d %d",&ch,&x,&y);
            if(ch=='H')
            {
                hlines[x-1][y-1]=1;
            }
            else
            {
                vlines[y-1][x-1]=1;
            }
        }

        for(i=n-1;i>=0;i--)
        {
            hl=vl=0;
            for(j=n-1;j>=0;j--)
            {
                if(hlines[i][j]==1)
                {
                    hl++;
                }
                else
                {
                    hl=0;
                }
                hspan[i][j]=hl;
                if(vlines[j][i]==1)
                {
                    vl++;
                }
                else
                {
                    vl=0;
                }
                vspan[j][i]=vl;
            }
        }
        for(i=0;i<n-1;i++)
        {
            for(j=0;j<n-1;j++)
            {
                for(k=min(vspan[i][j],hspan[i][j]);k>0;k--)
                {
                    if((vspan[i][j+k]>=k)&&(hspan[i+k][j]>=k))
                    {
                        square[k-1]++;
                    }
                }
            }
        }
        pos=-1;
        for(i=0;i<n;i++)
        {
            if(square[i])
            {
                pos=i;
                break;
            }
        }
        if(t>0)
        {
            printf("\n");
            printf("**********************************\n\n");
        }
        printf("Problem #%d\n\n",++t);
        if(pos!=-1)
        {
			for(i=pos;i<n;i++)
				if(square[i])
					printf("%d square (s) of size %d\n",square[i],i+1);
        }
        else
        {
            printf("No completed squares can be found.\n");
        }
    }
    return 0;
}
