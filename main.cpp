#include<stdio.h>
#include<string.h>
int n,x0,y0,mark[10][10],die[10][10];
int kk[8][2]={-2,-1,-2,1,-1,2,1,2,2,1,2,-1,1,-2,-1,-2};
int s1[4][2]={-1,0,0,1,1,0,0,-1};
struct node
{
    int x,y;
    char c;
}arr[20];
int judge1(int x,int y)
{
    if (x<0||x>9||y<0||y>8) return 0;
	return 1;
}
int judge2(int x,int y)
{
    if (x<0||x>2||y<3||y>5) return 0;
	return 1;
}
void work(node arr)
{
	int i,j;
	if(arr.c=='H')
    {
        for (i=0;i<8;i++)
		{
            if (judge1(arr.x+s1[i/2][0],arr.y+s1[i/2][1]))
			{
                if (!mark[arr.x+s1[i/2][0]][arr.y+s1[i/2][1]])
                {
                    if (judge1(arr.x+kk[i][0],arr.y+kk[i][1])) die[arr.x+kk[i][0]][arr.y+kk[i][1]]=1;
                }
			}
		}
    }
    else if((arr.c=='G')||(arr.c=='R'))
    {
        for (i=arr.x+1;i<10;i++)
        {
            die[i][arr.y]=1;
            if(mark[i][arr.y]==1) break;
        }
        for (i=arr.x-1;i>=0;i--)
        {
            die[i][arr.y]=1;
            if (mark[i][arr.y]==1) break;
        }
        for (i=arr.y+1;i<9;i++)
        {
            die[arr.x][i]=1;
            if(mark[arr.x][i]==1) break;
        }
        for (i=arr.y-1;i>=0;i--)
        {
            die[arr.x][i]=1;
            if (mark[arr.x][i]==1) break;
        }
    }
    else if(arr.c=='C')
    {
        for(i=arr.x+1;i<10;i++)
		{
            if(mark[i][arr.y]==1)
            {
                for(j=i+1;j<10;j++)
                {
                    die[j][arr.y]=1;
                    if(mark[j][arr.y]==1) break;
                }
                break;
            }
		}
		for (i=arr.x-1;i>=0;i--)
		{
			if(mark[i][arr.y]==1)
			{
				for(j=i-1;j>=0;j--)
				{
					die[j][arr.y]=1;
					if(mark[j][arr.y]==1) break;
				}
				break;
			}
		}
		for (i=arr.y+1;i<9;i++)
		{
			if (mark[arr.x][i]==1)
			{
				for (j=i+1;j<9;j++)
				{
					die[arr.x][j]=1;
					if(mark[arr.x][j]==1) break;
				}
				break;
			}
		}
		for (i=arr.y-1;i>=0;i--)
		{
			if (mark[arr.x][i]==1)
			{
				for (j=i-1;j>=0;j--)
				{
					die[arr.x][j]=1;
					if (mark[arr.x][j]==1) break;
				}
				break;
			}
		}
    }
}
int main()
{
	int i,a,b;
	char ss[5];
    while(~scanf("%d%d%d",&n,&x0,&y0))
    {
		memset(mark,0,sizeof(mark));
        memset(die,0,sizeof(die));
        if (n==0&&x0==0&&y0==0) break;
        x0--;y0--;
        for(i=0;i<n;i++)
		{
			scanf("%s %d %d",ss,&a,&b);
			arr[i].c =ss[0];
			arr[i].x=a-1;arr[i].y=b-1;
			mark[arr[i].x][arr[i].y]=1;
		}
        for(i=0;i<n;i++) work(arr[i]);
        int flag=0;
		for (i=0;i<4;i++)
		{
            if (judge2(x0+s1[i][0],y0+s1[i][1]))
			{
                if (!die[x0+s1[i][0]][y0+s1[i][1]]) flag=1;
			}
		}
		if (flag) puts("NO");
		else puts("YES");
    }
	return 0;
}
