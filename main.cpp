
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<map>
#include<queue>
#include<stack>
#include<vector>
#include<algorithm>
#include<cstring>
#include<string>
#include<iostream>
const int MAXN=30+10;
using namespace std;
char s[MAXN][MAXN][MAXN];
int vis[MAXN][MAXN][MAXN];
int x1,Y1,z1,x2,y2,z2;
int l,r,c;
int ok;
int go[MAXN][3]={0,0,1,0,0,-1,1,0,0,-1,0,0,0,-1,0,0,1,0};

struct P
{
	int x,y,z,step;
};

int bfs()
{
	P cur,next;
	cur.x=x1; cur.y=Y1; cur.z=z1; cur.step=0;
	vis[x1][Y1][z1]=1;
	queue<P>q;
	q.push(cur);
	while(!q.empty())
	{
		cur=q.front();
		q.pop();
		if(cur.x==x2 && cur.y==y2 && cur.z==z2){
			return cur.step;
		}
		for(int i=0; i<6; i++){
			int x,y,z;
			next.x=x=cur.x+go[i][0];
			next.y=y=cur.y+go[i][1];
			next.z=z=cur.z+go[i][2];
			if(x<0 || x>=r || y<0 || y>=c || z<0 || z>=l) continue;
			if(vis[x][y][z] || s[x][y][z]=='#') continue;
			vis[x][y][z]=1;
			next.step=cur.step+1;
			q.push(next);
		}
	}
	return 0;
}

int main()
{
	//freopen("in.txt","r",stdin);
	while(cin>>l>>r>>c, l+r+c)
	{
		memset(vis,0,sizeof(vis));
		ok=0;
		int i,j,k;
		for(k=0; k<l; k++)
			for(i=0; i<r; i++)
				for(j=0; j<c; j++){
					cin>>s[i][j][k];
					if(s[i][j][k]=='S'){
						x1=i; Y1=j; z1=k;
					}
					if(s[i][j][k]=='E'){
						x2=i; y2=j; z2=k;
					}
				}
		//for(k=0; k<l; k++){
			//for(i=0; i<r; i++){
				//for(j=0; j<c; j++){
					//cout<<s[i][j][k];
				//}
				//cout<<endl;
			//}
			//cout<<endl;
		//}
		int s=bfs();
		if(s) cout<<"Escaped in "<<s<<" minute(s)."<<endl;
		else cout<<"Trapped!"<<endl;
	}
	return 0;
}
