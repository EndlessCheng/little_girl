#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main(void)

{
    char a[10000],dump[10];

    int n,i,j,k,l,c,x,count= 0,sum = 0 ,hand,b[10000],s=0,r=0,t=0;

    scanf("%d",&n);
    gets(dump);

    for(l=1;l<=n;l++)
    {
        count = 0;
        sum = 0;
        r = 0;
        t = 0;
        s = 0;

        gets(a);

        for(i=0,j=0;i<strlen(a);i++,j++)
        {
            if(a[i]>='0' && a[i]<='9')
            {
                b[j] = (a[i]-'0');
            }
            else if(a[i]==' ')
            {
                j--;
                continue;
            }
        }

        for(i=0;i<=j;i++)
        {
            if(i%2==0)
            {
                x = b[i]*2;
                s = x/10;
                r = x%10;
                t = s+r;
                sum = sum + t;
            }
            else if(i%2!=0)
            {
                count = count + b[i];
            }
        }
        if((count+sum)%10==0)
        {
            printf("Valid\n");
        }
        else
        {
            printf("Invalid\n");
        }
    }
    return 0;
}
