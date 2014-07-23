#include <iostream>
#include <string>
#include <cstring>
#include <map>
#include <cstdio>
#include <vector>
#include <queue>
using namespace std;
int main()
{
    int n,i,k,f=1;
    while(scanf("%d",&n)==1)
    {
        if(!f) printf("\n");
        f=0;
        vector<int>G[1000];
        string s1, s2;
        string s[1000];
        int par[1000],taken[1000]={0};
        map<string,int>mymap;
        for(i=1,k=1;i<=n;i++)
        {
            cin>>s1>>s2;
            int x,y;
            if(!(x=mymap[s1]))
            {
                s[k]=s1;
                x=mymap[s1]=k;
                k++;
            }
            if(!(y=mymap[s2]))
            {
                s[k]=s2;
                y=mymap[s2]=k++;
            }
            if(y!=x)
            {
                G[x].push_back(y);
                G[y].push_back(x);
            }
        }
        cin>>s1>>s2;
        if(s1==s2)
        {
            cout<<s1<<" "<<s2<<endl;
        }

       else
        {
            int tar, src;
            if(!(tar=mymap[s1])) tar=mymap[s1]=k++;
            if(!(src=mymap[s2])) src=mymap[s2]=k++;
            queue<int>Q;
            if(src!=tar)
            {
                Q.push(src);
                taken[src]=src;
                while(!Q.empty())
                {
                    int u=Q.front();
                    for(i=0;i<G[u].size();i++)
                    {
                        int v=G[u][i];
                        if(v==tar)
                        {
                            taken[v]=u;
                            if(v==tar) break;
                        }
                        if(!taken[v])
                        {
                            taken[v]=u;
                            Q.push(v);
                        }

                    }
                    if(i<G[u].size()) break;
                    Q.pop();
                }
                if(!Q.empty())
                while(tar!=src)
                {
                    cout<<s[tar]<<" "<<s[taken[tar]]<<endl;
                    tar=taken[tar];
                }
                else printf("No route\n");
            }
        }

    }
    return 0;
}
