#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <algorithm>
#include <vector>
#include <map>
#include <set>
#include <iostream>
#include <string>
#include <queue>
#include <stack>

#define sqr(x) (x*x)
#define cube(x) (x*x*x)

using namespace std;

int n,m,x,y,result,mx;
char land[21][21],ch;
bool check[21][21];

int dirrection_r[]={0,0,1,-1};
int dirrection_c[]={1,-1,0,0};

inline bool validity (int i, int j)
{
    if (i<0 || i>=m) return false;
    if (check[i][j]) return false;
    if (land[i][j]!=ch) return false;

    return true;
}

void dfs(int i, int j)
{
    check[i][j]=true;
    result++;

    for (int k=0; k<4; k++)
    {
        int u = dirrection_r[k] + i , v = dirrection_c[k] + j;

        if (v>=n) v=0;
        else if (v<0) v=n-1;

        if ( validity(u,v) ) dfs(u,v);
    }
}

int main()
{
	//freopen("input.txt","r",stdin);

	while (cin>>m>>n)
	{
	    for (int i=0; i<m; i++)
        {
            cin>>land[i];
            memset(check[i],false,n+1);
        }

        cin>>x>>y;
        ch=land[x][y];

        mx=0;

        dfs(x,y);

        for (int i=0; i<m; i++)
            for (int j=0; j<n; j++)
                if (land[i][j]==ch && !check[i][j])
                {
                    result=0;
                    dfs(i,j);

                    if (result>mx) mx=result;
                }


        cout<<mx<<endl;
	}

	return 0;
}
