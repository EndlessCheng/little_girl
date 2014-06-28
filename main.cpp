/*UVA10078
按顺序输入多边形上的点，判断它是一个凸边形还是凹多边形
整理出模板
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <string>
#include <iostream>
#include <sstream>
#include <vector>
#include <queue>
#include <stack>
#include <map>
#include <list>
#include <set>
#include <algorithm>
#define eps 1e-10
#define maxn 100+10

using namespace std;

struct Point
{
    double x,y;
    Point(){}
    Point(double xx,double yy){x=xx,y=yy;}
    bool operator < (const Point& p)const{
        return (x<p.x || (fabs(x-p.x)<eps && y<p.y));
    }
} P1[maxn],P2[maxn];


typedef Point Vector;
Vector operator - (Vector A, Vector B)
{
    return (Vector){A.x-B.x, A.y-B.y};
}
double Cross(Vector A, Vector B)
{
    return A.x*B.y - A.y*B.x;
}
int ConvexHull(Point *p, int n, Point* ch) //求凸包
{
    sort(p, p + n);//先按照 x，再按照 y
    int m = 0;
    for(int i = 0; i < n; i++)
    {
        while(m > 1 && Cross(ch[m-1] - ch[m-2], p[i] - ch[m-2]) < 0) m--;
        ch[m++] = p[i];
    }
    int k = m;
    for(int i = n-2; i >= 0; i--)
    {
        while(m > k && Cross(ch[m-1] - ch[m-2], p[i] - ch[m-2]) < 0) m--;
        ch[m++] = p[i];
    }
    if(n > 1) m--;
    return m;
}
int n1,n2;
int main()
{
    while(scanf("%d",&n1)!=EOF && n1>0)
    {
        for(int i=0; i<n1; i++)
        {
            int x,y;
            cin>>x>>y;
            P1[i].x=(double)x;
            P1[i].y=(double)y;
        }
        n2=ConvexHull(P1,n1,P2);
        if(n2==n1) cout<<"No"<<endl;else cout<<"Yes"<<endl;

    }
    return 0;
}
