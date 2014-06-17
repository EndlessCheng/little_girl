#include<cstdio>
#include<algorithm>
using namespace std;
struct N{
	int value;
	int state;
};
N a[21];
int main(){
	int n,m,c;
	int tt=0;
	while(scanf("%d%d%d",&n,&m,&c)!=-1){
		if(n==0&&m==0&&c==0)
			break;
		for(int i=1;i<=n;i++){
			scanf("%d",&a[i].value);
			a[i].state=0;
		}
		int Max=-1;
		bool flag=true;
		while(m--){
			int id;
			int sum=0;
			scanf("%d",&id);
			a[id].state^=1;
			for(int i=1;i<=n;i++){
				if(a[i].state){
					sum+=a[i].value;
				}
				if(sum>c)
					flag=false;
				Max=max(Max,sum);
			}
		}
		printf("Sequence %d\n",++tt);
		if(flag){
			puts("Fuse was not blown.");
			printf("Maximal power consumption was %d amperes.\n",Max);
		}
		else
			puts("Fuse was blown.");
		puts("");
	}
	return 0;
}
