#include<iostream>
#include<iomanip>
#include<algorithm>
#include<cmath>
#define pi (2.0*asin(1.0))

using namespace std;

int main()
{
    int i,j,n;
    double s,r,rad[505];
    while(cin>>n>>r && n+r)
    {
        s=0;
        for(i=0;i<n;i++)
        {
            cin>>rad[i];
            rad[i]*=pi/180;
        }
        sort(rad,rad+n);
        for(i=0;i<n-1;i++)
        {
            for(j=i+1;j<n;j++)
            {
                s+=abs(sin(rad[j]-rad[i]));
            }
        }
        s*=r*r/2;
        cout<<fixed<<setprecision(0)<<s<<endl;
    }
    return 0;
}
