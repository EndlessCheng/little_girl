
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int trans(char num[],int k)
{
  int ans=0,len=strlen(num);
  int i;
  for(i=0;i<len;i++)
  if(num[i]>='0'&&num[i]<='9')
  {
	if(num[i]-'0'>=k)return -1;
	else
	ans=ans*k+num[i]-'0';
  }
  else if(num[i]-'A'+10>=k)return -1;
  else ans=ans*k+num[i]-'A'+10;
 return ans;
}



int main()
{
char x[100],y[100];
int bx,by,flag,x1,y1;
int i,j;

while(scanf("%s%s",x,y)!=EOF)
{
   flag=0;
   for(i=2;i<=36;i++)
   if(!flag)
   {
    x1=trans(x,i);
	if(x1<0)continue;
    for(j=2;j<=36;j++)
	if(!flag)
	{
	 y1=trans(y,j);
	 if(y1<0)continue;
	  if(x1==y1)
	 {
	  bx=i;by=j;
	  flag=1;
	 }
	}
   }
   if(flag)printf("%s (base %d) = %s (base %d)\n",x,bx,y,by);
   else printf("%s is not equal to %s in any base 2..36\n",x,y);
}
return 0;
}
