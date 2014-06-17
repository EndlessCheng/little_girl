#include<stdio.h>
#include<vector>

using namespace std;

vector<int> pset;
void initSet(int N) {
    pset.assign(N,0);
    for (int i = 0; i < N; ++i) pset[i] = i;
}
int findSet(int i) { return (pset[i] == i) ? i : (pset[i] = findSet(pset[i])); }
void unionSet(int i, int j) { pset[findSet(i)] = findSet(j); }
int numDisjointSets() {
    int num = 0;
    for(int i = 0; i < pset.size(); ++i) { if(i == findSet(i)) ++num;
    }
    return num;
}

int main(){
    int n, m;
    int i, j;
    int c = 0;
    while(scanf("%d %d", &n, &m) != EOF && n != 0)
    {
        initSet(n);
        for(int k = 0; k < m; ++k)
        {
            scanf("%d %d", &i, &j);
            unionSet(i,j);
        }
        printf("Case %d: %d\n", ++c, numDisjointSets());
        pset.clear();
    }
}
