#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cctype>
#include <cmath>
#include <cstring>
#include <algorithm>
#include <string>
#include <map>
#include <iomanip>
#include <utility>

using namespace std;

const int SZ = 111;
const int INF = 0x3f;

int dis[SZ][SZ];
map<int, int> mp;
int main(int arc, char const *argv[])
{
    ios::sync_with_stdio(false);
    int u, v, nxt, kase, i, j, k;
    double sum;
    kase=nxt=0;
    while(cin>>u>>v and (u+v)) {
        nxt=0;
        memset(dis,INF,sizeof(dis));
        mp.clear();
        for(i=0; i<SZ; ++i) dis[i][i] = 0;
        if(mp.find(u)==mp.end()) {
            mp.insert(pair<int, int>(u,nxt));
            nxt++;
        }
        if(mp.find(v)==mp.end()) {
            mp.insert(pair<int, int>(v,nxt));
            nxt++;
        }
        dis[mp[u]][mp[v]]= 1;
        cout<<"Case "<<++kase<<":";
        while(cin>>u>>v and (u+v)) {
            if(mp.find(u)==mp.end()) {
                mp.insert(pair<int, int>(u,nxt));
                nxt++;
            }
            if(mp.find(v)==mp.end()) {
                mp.insert(pair<int, int>(v,nxt));
                nxt++;
            }
            dis[mp[u]][mp[v]] = 1;
        }

        for (i=0; i<nxt; ++i) {
            for (j=0; j<nxt; ++j) {
                for (k=0; k<nxt; ++k) {
                    dis[j][k] = min(dis[j][k], dis[j][i]+dis[i][k]);
                }
            }
        }
        sum = 0.0;
        for(i=0; i<nxt; ++i) {
            for(j=0; j<nxt; ++j) {
                    sum+=dis[i][j];
            }
        }
        sum/=(double)((nxt-1)*nxt);
        cout<<" average length between pages = "<<fixed<<setprecision(3)<<sum<<" clicks"<<endl;
    }
    return 0;
}
