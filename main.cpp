#include<iostream>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<stdio.h>
#include<string>
#include<string>
#include<vector>
#include<map>
using namespace std;

#define M 10010;

int dp[110010][100];

int main()
{
	bool flag = 0;
	int row = 1, i, j, num;
	dp[row][1] = 1;
	while(1)
	{
		for(i = row; i>=1; i--)
		{
			for(j = 1; j<70; j++)
			{
				dp[i][j] += dp[i-1][j];
				dp[i][j+1] += dp[i][j]/10;
				dp[i][j] %= 10;
			}
		}

		for(i = 1; i<=row; i++)
		{
			for(num = 70; ; num--) if(dp[i][num]) break;
			if(num > 60) flag = 1;
			for(; num>=1; num--)
				cout<<dp[i][num];
			if(i!=row) cout<<" ";
			else cout<<"\n";
		}
		row++;
		if(flag) break;
	//	system("pause");
	}
}
