#include <bits/stdc++.h>
using namespace std;
const int mx = 5e5 + 5;

vector<int> g[mx];
set<int> Empty;
int L[mx], R[mx], fa[mx];
int timer, to;

void dfs(int v, int p = -1)
{
    L[v] = ++timer;
    for (int i = 0; i < g[v].size(); ++i)
        if ((to = g[v][i]) != p)
            fa[to] = v, dfs(to, v);
    R[v] = timer;
    if (R[v] == L[v]) Empty.insert(L[v]);
}

bool empty(int v)
{
    set<int>::iterator it = Empty.lower_bound(L[v]);
    return it != Empty.end() && *it <= R[v];
}

int main()
{
    int n, q, a, b, op, v;
    scanf("%d", &n);
    while (--n)
    {
        scanf("%d%d", &a, &b);
        g[a].push_back(b), g[b].push_back(a);
    }
    dfs(1);
    scanf("%d", &q);
    while (q--)
    {
        scanf("%d%d", &op, &v);
        if (op == 1)
        {
            if (fa[v] && empty(fa[v])) Empty.insert(L[fa[v]]);
            Empty.erase(Empty.lower_bound(L[v]), Empty.upper_bound(R[v]));
        }
        else if (op == 2) Empty.insert(L[v]);
        else puts(empty(v) ? "0" : "1");
    }
    return 0;
}
