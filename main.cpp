#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <algorithm>
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <sstream>

using namespace std;

typedef long long ll;

#define REP(i,s,t) for(int i=(s);i<(t);i++)
#define FOREACH(i,v) for(typeof((v).begin()) i=(v).begin();i!=(v).end();i++)
#define FILL(x,v) memset(x,v,sizeof(x))
const int INF = (int)1E9;
#define MAXN 105

int N,M,R,RB;
int v[MAXN], vlow[MAXN];
vector<int> adj[MAXN];
set<string> ans;
map<string,int> m;
string ns[MAXN];
char buf[35], buf2[35];

void dfs(int x, int pre, int lb){
	vlow[x] = v[x] = lb;
	bool art = 0;
	REP(i,0,adj[x].size()){
		int y = adj[x][i];
		if(y==pre) continue;
		if(!v[y]){
			if(x==R) RB++;
			dfs(y, x, lb+1);
			vlow[x] = min(vlow[x], vlow[y]);
			if(vlow[y]>=v[x]) art = 1;
		}else vlow[x] = min(vlow[x], v[y]);
	}
	if(x==R) {if(RB>1)ans.insert(ns[x]);}
	else {if(art)ans.insert(ns[x]);}
}


int main(){
	int csn = 0;
	while(1){
		scanf("%d", &N);
		if(!N) break;
		REP(i,0,N){
			scanf("%s", buf);
			m[buf] = i;
			ns[i] = buf;
			adj[i].clear();
		}
		scanf("%d", &M);
		REP(i,0,M){
			scanf("%s%s", buf, buf2);
			int a = m[buf], b = m[buf2];
			adj[a].push_back(b);
			adj[b].push_back(a);
		}
		ans.clear();
		FILL(v,0); FILL(vlow,0);
		REP(i,0,N) if(!v[i]) { RB=0;R=i;dfs(i,-1,1); }
		if(csn) puts("");
		printf("City map #%d: %d camera(s) found\n", ++csn, ans.size());
		set<string>::iterator r;
		for(r=ans.begin(); r!=ans.end(); r++) printf("%s\n", r->c_str());
	}
	return 0;
}
