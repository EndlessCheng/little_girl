#include<stdio.h>
#include<string.h>
#include<algorithm>
#include<math.h>
#include<iostream>
using namespace std;
int a,b,c,d,e,f;
int n,k;
int now,nex;
int arr[1005];
int vis[1005];
int suan(int i)
{
	if (i>n) return i-n;
	else return i;
}
int main()
{
	while (cin>>n>>k)
	{
		if (n==k && n==0) break;
		now=1;
		now=suan(now+n-1);
		memset(vis,0,sizeof(vis));
		for (a=1;a<=n;a++) arr[a]=a;
		for (a=n;a>1;a--) //还剩这么多人
		{
			/*for (b=1;b<=n;b++)
			if (vis[arr[b]]==0)
			{
				cout<<arr[b]<<' ';
			}
			cout<<endl;*/
			int lef=k;

			int len=0;
			while (len<lef)
			{
				now=suan(now+1);
				if (vis[arr[now]]==0) len++;
			}
			//杀掉这个人
			//cout<<arr[now]<<endl;
			vis[arr[now]]=1;
			len=0;

			int pre=now; //记住now这个位置
			while (len<lef)
			{
				now=suan(now+1);
				if (vis[arr[now]]==0) len++;
			}
			swap(arr[pre],arr[now]);
			//arr[pre]=arr[now]; //把那个人换过来
			now=pre;
		}
		for (a=1;a<=n;a++)
			if (vis[arr[a]]==0)
		{
			int wei=suan(n+1-(arr[a]-1));
			cout<<wei<<endl;
		}
	}
}
