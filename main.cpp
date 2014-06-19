#include <iostream>
#include <string.h>
#include <queue>
#include <stdio.h>
#define max 10000
using namespace std;
int path[max];
bool vis[max];
int start,end;
int bfs(int start,int end)
{
    int w,h,k;
    bool r=false;
    queue<int>q;
    q.push(start);
    while(!q.empty())
    {
        w=q.front();
        q.pop();
        if(w==end)  return path[end];
        for(int i=1000;i>0;i/=10)
        {
            h=w/i%10;
            k=w-w/i%10*i+(h+1)%10*i;
            if(vis[k])
            {
                q.push(k);
                path[k]=path[w]+1;
                vis[k]=false;
            }
            k=w-w/i%10*i+(h-1+10)%10*i;
            if(vis[k])
            {
                q.push(k);
                path[k]=path[w]+1;
                vis[k]=false;
            }
        }
    }
    return -1;
}
int Getinput()
{
    int a,b;
    b=0;
    for(int i=0;i<4;i++)    cin>>a,b=b*10+a;
    return b;
}
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        start=Getinput();
        end=Getinput();
        memset(path,0,sizeof(path));
        memset(vis,true,max);
        int n;
        cin>>n;
        for(int i=0;i<n;i++)    vis[Getinput()]=false;
        cout<<bfs(start,end)<<endl;
    }
}
