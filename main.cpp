#include <algorithm>
#include <iostream>
#include <string.h>
#include <stdio.h>
#include <vector>
#include <queue>
#include <list>
using namespace std;

const int INF = 0x3B9ACA00;//1000000000 decimal
const int maxn = 0x69;//105 decimal

typedef pair <int,int> ii;

int dis[maxn][maxn],n;
bool vis[maxn][maxn];
char mat[maxn][maxn];
int dx[]={-1,+1, 0, 0};
int dy[]={ 0, 0,+1,-1};

inline bool correct_pos(int r,int c){
   return r>=0 && r<n && c>=0 && c<n;
}

int bfs(ii source){
   memset(vis,0,sizeof vis);
   memset(dis,-1,sizeof dis);
   vis[source.first][source.second]=1;
   dis[source.first][source.second]=0;
   queue <ii> q;
   q.push(source);

   while(!q.empty())
   {
      ii cur=q.front();
      q.pop();

      if(mat[cur.first][cur.second]=='3')return dis[cur.first][cur.second];
      int r,c;
      for(int i=0;i<4;i++){
         r=dx[i]+cur.first;
         c=dy[i]+cur.second;
         if(correct_pos(r,c) && !vis[r][c]){
            vis[r][c]=true;
            dis[r][c]=dis[cur.first][cur.second]+1;
            q.push(make_pair(r,c));
         }
      }
   }
}

int main(){
   while(scanf("%d",&n)==1){
      getchar();
      for(int i=0;i<n;i++){
         gets(mat[i]);
      }
      int ans=-1;
      for(int i=0;i<n;i++){
         for(int j=0;j<n;j++){
            if(mat[i][j]=='1')
               ans=max(ans,bfs(make_pair(i,j)));
         }
      }
      printf("%d\n",ans);
   }
   return 0;
}
