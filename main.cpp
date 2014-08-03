#include<cstdio>
const int rotate[6][6] =
{
	6, 7, 9, 10, 8, 11,
	11, 10, 9, 7, 8, 6,
	7, 11, 9, 6, 8, 10,
	10, 6, 9, 11, 8, 7,
	8, 11, 7, 6, 10, 9,
	9, 6, 7, 11, 10, 8
};
char str[15];

int judge(int a, int b, int c, int d, int e, int f)
{
	if (str[a] == str[0] && str[b] == str[5])
	{
		if (str[1] == str[c] && str[3] == str[d] && str[4] == str[e] && str[2] == str[f]) return 1;
		if (str[1] == str[d] && str[3] == str[e] && str[4] == str[f] && str[2] == str[c]) return 1;
		if (str[1] == str[e] && str[3] == str[f] && str[4] == str[c] && str[2] == str[d]) return 1;
		if (str[1] == str[f] && str[3] == str[c] && str[4] == str[d] && str[2] == str[e]) return 1;
		return 0;
	}
	return false;
}

bool ok()
{
	for (int i = 0; i < 6; ++i)
	{
		if (str[0] == str[rotate[i][0]] && str[5] == str[rotate[i][1]])
			for (int j = 0; j < 4; ++j)
			{
			}
	}
	if (judge(6, 11, 7, 9, 10, 8)) return true;
	if (judge(11, 6, 10, 9, 7, 8)) return true;
	if (judge(7, 10, 11, 9, 6, 8)) return true;
	if (judge(10, 7, 6, 9, 11, 8)) return true;
	if (judge(8, 9, 11, 7, 6, 10)) return true;
	if (judge(9, 8, 6, 7, 11, 10)) return true;
	return false;
}

int main()
{
	while (scanf("%s", str)) ;
	return 0;
}
