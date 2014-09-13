#include <cstdio>
#include <cstring>

using namespace std;

const int MaxN = 210;

struct Node{
    int v;
    Node *nxt;
}pool[MaxN*MaxN],*g[MaxN],*tail=pool;

int n;
int c1[MaxN],c2[MaxN];
int f[MaxN][2],flag[MaxN];
char op[MaxN][2];

inline void make_edge(int u,int v){tail->v=v;tail->nxt=g[u];g[u]=tail++;}
inline int ckmax(int &a,int b){return b>a ? a=b,1 : 0;}
inline int ckmin(int &a,int b){return b<a ? a=b,1 : 0;}

void dp(int u){
    if(flag[u]) return;
    flag[u]=1;
    if(!g[u]) f[u][0]=c1[u],f[u][1]=c2[u];
    for(Node *p=g[u];p;p=p->nxt){
        dp(p->v);
        if(op[u][0]=='A') ckmax(f[u][0],f[p->v][0]) ? f[u][1]=f[p->v][1] : 0;
        else ckmax(f[u][1],f[p->v][1]) ? f[u][0]=f[p->v][0] : 0;
    }
}
void dp2(int u,int k){
    if(flag[u]) return;
    flag[u]=1;
    if(!g[u]) {f[u][0]=(u==k),f[u][1]=c1[u];return;}
    int F=0;
    if(op[u][0]=='X') f[u][1]=0x7f7f7f7f;
    for(Node *p=g[u];p;p=p->nxt){
        dp2(p->v,k);
        if(op[u][0]=='X'){
            if(f[p->v][0]) {f[u][0]=1;f[u][1]=c1[k];break;}
            ckmin(f[u][1],f[p->v][1]);
        }
        else{
            if(f[p->v][0]) F=1;
            else ckmax(f[u][1],f[p->v][1]);
        }
    }
    if(F) f[u][0]=ckmax(f[u][1],c1[k]);
}
int main()
{
    int T;
    for(scanf("%d",&T);T--;){
        scanf("%d",&n);
        memset(g,0,sizeof(g));tail=pool;
        memset(c1,0,sizeof(c1));
        memset(c2,0,sizeof(c2));
        memset(f,0,sizeof(f));
        memset(flag,0,sizeof(flag));
        for(int i=1;i<=n;i++){
            int m;scanf("%d",&m);
            if(!m) scanf("%d%d",&c1[i],&c2[i]);
            else{
                for(int j=1,v;j<=m;j++) scanf("%d",&v),make_edge(i,v);
                scanf("%s",op[i]);
            }
        }
        dp(1);
        int ans=f[1][1];
        printf("%d ",f[1][1]);
        for(int i=1;i<=n;i++) if(!g[i]){
            memset(flag,0,sizeof(flag));
            memset(f,0,sizeof(f));
            dp2(1,i);
            if(f[1][0]) ckmax(ans,c2[i]);
        }
        printf("%d\n",ans);
    }
    return 0;
}
