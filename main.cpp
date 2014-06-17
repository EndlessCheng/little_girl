
#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main(){
	int q,i;
	char c[20];
	while(cin>>q&&q){
		int m=1,n=2,s=5,e=4,w=3,o=6,t;
		for(i=0;i<q;i++){
			scanf("%s",c);
		if(strcmp(c,"north")==0)
		{t=n;n=m;m=s;s=o;o=t;}
		else if(strcmp(c,"south")==0)
		{t=s;s=m;m=n;n=o;o=t;}
		else if(strcmp(c,"east")==0)
		{t=e;e=m;m=w;w=o;o=t;}
		else{t=w;w=m;m=e;e=o;o=t;}
		}
		cout<<m<<endl;
	}
	return 0;
}
