
#include <stdio.h>

int main()
{
 int array[15][15];
 int n,row,col,a,b,tot,i;
 int  p = 1;
 while(scanf("%d",&n)&&n!=0)
 {

     for(row=0;row<n;row++)
       for(col=0;col<n;col++)
         scanf("%d",&array[row][col]);
         printf("Case %d:",p);
         p++;
      for(a=0,b=n-1;a<=b;a++,b--)
      {
          if(a==b)
          {
              printf(" %d",array[a][b]);
              break;
          }

        tot = 0;
        for(i=a;i<=b;i++)
        {
         tot += array[a][i]+array[i][a]+array[b][i]+array[i][b];
        }
        tot -= array[a][a]+array[a][b]+array[b][a]+array[b][b];
        printf(" %d",tot);
      }
     printf("\n");


 }






}
