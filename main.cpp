#include<cstdio>
#include<sstream>
#include<cstdlib>
#include<cctype>
#include<cmath>
#include<algorithm>
#include<set>
#include<queue>
#include<stack>
#include<list>
#include<iostream>
#include<fstream>
#include<numeric>
#include<string>
#include<vector>
#include<cstring>
#include<map>
#include<iterator>
using namespace std;
#define PI  2 * acos (0.0)//3.1415926535898
#define E 2.718281828459
#define INF 1<<30
#define exp (1e-8)
#define mx 1005

struct edge {
    int u, v;
    double w;
    bool operator < (const edge& p) const {return w<p.w;}
};

vector <edge> e;
/*
bool cmp(edge a,edge b)
{
    return a.w<b.w;
}
*/

struct point {
    int x, y;
} nodes[mx];

int par[mx];

int find_par(int r)
{
    if(r==par[r]) return par[r];

    return par[r]=find_par(par[r]);
}

void make_set(int n)
{
    for(int i=0; i<=n ;i++) par[i]=i;
}

double mst(int n)
{
    int i, j, k, val;
    double dist;
    sort(e.begin(),e.end());
    int sz = e.size();
    make_set(n);
    edge tmp;
    for(i=0; i<sz; i++) {
        tmp.u = e[i].u;
        tmp.v = e[i].v;

        int u = find_par(tmp.u);
        int v = find_par(tmp.v);
        if(u!=v) {
            par[v]=u;

            if(find_par(par[1])==find_par(par[2])) {dist = e[i].w; break;}
        }

    }
    return dist;
}

void read_input(int n)
{
    int i, j, k;

    for(i=1; i<=n; i++) scanf("%d %d", &nodes[i].x, &nodes[i].y);

    for(i=1; i<n; i++)
    for(j=i+1; j<=n; j++) {
        edge tmp;
        tmp.u = i;
        tmp.v = j;
        int val = ((nodes[i].x - nodes[j].x)*(nodes[i].x - nodes[j].x) + (nodes[i].y - nodes[j].y)*(nodes[i].y - nodes[j].y));
        tmp.w = sqrt(val);
        e.push_back(tmp);
    }
}

int main()
{
    int i, j, k=0, num, factoring, val, rough, tests, n;
    while(scanf("%d", &n)==1 && n) {
        read_input(n);
        double ans = mst(n);
        printf("Scenario #%d\n",++k);
        printf("Frog Distance = %.3lf\n\n",ans);
        e.clear();
    }
    return 0;
}
