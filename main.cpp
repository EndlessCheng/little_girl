/* 0.996s */
#include<bits/stdc++.h>
using namespace std;

const int mx = 60000;
int T, cas, cnt;
char expr[mx * 5], *p;
int done[mx];

struct Node
{
	string s;
	int ha, left, right;
	bool operator < (const Node &b) const
	{
		if (ha != b.ha) return ha < b.ha;
		   if (left != b.left) return left < b.left; // 哈希相同则比较出现的顺序
		return right < b.right;
	}
} node[mx];

map<Node, int> dict;

int parse()
{
	int id = cnt++;
	Node& u = node[id];
	u.left = u.right = -1;
	u.s = "";
	u.ha = 0;
	while (isalpha(*p))
	{
		u.ha = u.ha * 27 + *p - 'a' + 1;
		u.s.push_back(*p);
		p++;
	}
	if (*p == '(') /// (L,R)
	{
		p++;
		u.left = parse();
		p++;
		u.right = parse();
		p++;
	}
	if (dict.count(u) != 0)
	{
		id--;
		cnt--;
		return dict[u];
	}
	return dict[u] = id;
}

void print(int v)
{
	if (done[v] == cas) printf("%d", v + 1);
	else
	{
		done[v] = cas; // 避免memset(done, 0, sizeof(done))
		   printf("%s", node[v].s.c_str());
		if (node[v].left != -1)
		{
			putchar('(');
			print(node[v].left);
			putchar(',');
			print(node[v].right);
			putchar(')');
		}
	}
}

int main()
{
	scanf("%d", &T);
	for (cas = 1; cas <= T; cas++)
	{
		dict.clear();
		cnt = 0;
		scanf("%s", expr);
		p = expr;
		print(parse());
		putchar(10);
	}
	return 0;
}
