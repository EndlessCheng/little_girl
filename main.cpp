/* *********************************************************************
   *                       Problem: --------------                     *
   *                   Runtime: 0.000 sec; Rank: 0000                  *
   *                     Algo Used: ----------------                   *
   *                    Solved By : Niloy - JU-CSE-21                  *
   ********************************************************************* */
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <sstream>
#include <map>
#include <vector>
#include <stack>
#include <queue>
#include <deque>
#include <set>
#include <list>
#include <iterator>
/* ********************
   *     Defines      *
   ******************** */
#define max(a,b) ((a>b)?a:b)                        //finding max
#define min(a,b) ((a<b)?a:b)                        //finding min
#define Max(a,b,c) max(a,max(b,c))                  //finding max between 3 numbers
#define Min(a,b,c) min(a,min(b,c))                  //finding min between 3 numbers
#define Pi acos(-1.0)                               //defining Pi for mathematical uses
#define Clear(a) memset(a,0,sizeof(a))              //clearing memory of an array
#define setfalse(a) memset(a,false,sizeof(a))       //setting the array into false
#define settrue(a) memset(a,true,sizeof(a))         //setting the array into true
#define clrstr(a) memset(a,'\0',sizeof(a))          //setting string array to null
#define open freopen("input.txt","r",stdin)         //opening input file
#define close freopen ("output.txt","w",stdout)     //opening output file
#define Case(a) printf("Case %d: ",a)               //printing case number
#define caseh(a) printf("Case #%d: ",a)             //printing case number having '#'
#define getcase(a) scanf("%d",&a)                   //scanning case number
#define CHR getchar()                               //avoid the newline character problem
#define caseloop(a,b) for(a=1;a<=b;a++)             //making case loop
#define EPS 1e-9                                    //small value for avoiding preccesion error
#define LL long long                                //long long short form
#define MX 750                                      //MAX size/value
#define PB(x) push_back(x)                          //push in vector/string
#define PP pop_back()                               //pop from vector
#define PF(x) push_front(x)                         //push in vector/string/deque from front
#define PPF(x) pop_front()                          //pop from vector/deque from front
#define IN(x) insert(x)                             //insert element in set
#define PS(x) push(x)                               //push element in stack/queue
#define P() pop()                                   //pop element from stack/queue
#define MOD 1000003                                 //mod value
#define INF (1<<30)                                 //infinity value

using namespace std;

struct point
{
    int x,y;
};

struct edge
{
    int u,v;
    double cost;

    bool operator <(const edge& p)const
    {
        return cost < p.cost;
    }
};

double dis (point a,point b)
{
    return sqrt((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y));
}

point p[MX+5];
int parent[MX+5];
vector<edge> data;

int find_parent(int n)
{
    if (parent[n] == n)
        return n;

    return parent[n] = find_parent(parent[n]);
}

void MST_Kruskal(int n,int cnt)
{
    sort(data.begin(),data.end());

    for (int i=0;i<data.size() && cnt<n-1;i++)
    {
        int u = find_parent(data[i].u),v = find_parent(data[i].v);

        if (u!=v)
        {
            cnt++;

            cout << data[i].u << " " << data[i].v << endl;

            parent[u] = v;
        }
    }
}

int main ()
{
    int n,m,t,c;

    getcase(t);
    caseloop(c,t)
    {
        cin >> n;

        for (int i=1;i<=n;i++)
        {
            cin >> p[i].x >> p[i].y;
        }

        for (int i=1;i<=n;i++)
        {
            for (int j=i+1;j<=n;j++)
            {
                //cout << i << " " << j << endl;

                edge d;

                d.u = i;
                d.v = j;
                d.cost = dis(p[i],p[j]);

                data.PB(d);
            }
        }

        Clear(parent);

        for (int i=0;i<=n;i++)
            parent[i] = i;

        cin >> m;

        int cnt = 0;

        for (int i=0;i<m;i++)
        {
            int x,y;

            cin >> x >> y;

            int u = find_parent(x),v = find_parent(y);

            if (u!=v)
            {
                parent[u] = v;
                cnt++;
            }
        }

        if (c!=1)
            cout << endl;

        if (cnt == n-1)
        {
            cout << "No new highways need\n";

            continue;
        }

        MST_Kruskal(n,cnt);

        data.clear();
    }
    return (0);
}
