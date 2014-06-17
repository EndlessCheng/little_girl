#define EPS 1e-15
#define NMAX
#include <stdio.h>
#include <math.h>
#include <algorithm>
#include <string.h>
using namespace std;


int n,a;
struct Figure
{
	char type;
	double p[6];
};

inline bool incir(double cx,double cy,double r,double x,double y)
{
	double t=(x-cx)*(x-cx)+(y-cy)*(y-cy);
	double tt=double(r*r);
	return t-tt<-EPS;
}
inline bool inrect(double ax,double ay,double bx,double by,double x,double y)
{

	return x-ax>EPS && bx-x>EPS && y-by>EPS && ay-y>EPS;
}

inline double crossproduct(double x1,double y1,double x2,double y2)
{
	return x1*y2-x2*y1;
}
inline bool intri(double x1,double y1,double x2,double y2,double x3,double y3,double x,double y)
{
	double abx,aby,bcx,bcy,cax,cay;
	double tax,tay,tbx,tby,tcx,tcy;
	abx=x2-x1;aby=y2-y1;
	bcx=x3-x2;bcy=y3-y2;
	cax=x1-x3;cay=y1-y3;
	tax=x-x1;tay=y-y1;
	tbx=x-x2;tby=y-y2;
	tcx=x-x3;tcy=y-y3;
	double ca,cb,cc;
	ca=crossproduct(tax,tay,abx,aby);
	cb=crossproduct(tbx,tby,bcx,bcy);
	cc=crossproduct(tcx,tcy,cax,cay);
	return (ca>EPS && cb>EPS &&cc>EPS)||(ca<-EPS && cb<-EPS &&cc<-EPS);
}
bool infig(Figure f,double x,double y)
{
	switch(f.type)
	{
		case 'r':return inrect(f.p[0],f.p[1],f.p[2],f.p[3],x,y);
		case 'c':return incir(f.p[0],f.p[1],f.p[2],x,y);
		case 't':return intri(f.p[0],f.p[1],f.p[2],f.p[3],f.p[4],f.p[5],x,y);
	}
}




Figure fig[100];
int figcnt=1,pcnt=1;
double tx,ty;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("f.txt","r",stdin);
	#endif
	char c;
	while(scanf(" %c ",&c) && c!='*')
	{
		fig[figcnt].type=c;
		switch(c)
		{
			case 'r':scanf("%lf %lf %lf %lf",&fig[figcnt].p[0],&fig[figcnt].p[1],&fig[figcnt].p[2],&fig[figcnt].p[3]);break;
			case 'c':scanf("%lf %lf %lf",&fig[figcnt].p[0],&fig[figcnt].p[1],&fig[figcnt].p[2]);break;
			case 't':scanf("%lf %lf %lf %lf %lf %lf",&fig[figcnt].p[0],&fig[figcnt].p[1],&fig[figcnt].p[2],&fig[figcnt].p[3],&fig[figcnt].p[4],&fig[figcnt].p[5]);break;
		}
		figcnt++;
	}
	while(scanf("%lf %lf",&tx,&ty) && fabs(tx-9999.9)>EPS && fabs(ty-9999.9)>EPS)
	{
		int ok=0;
		for(int i=1;i<figcnt;i++)
		{
			if(infig(fig[i],tx,ty))
			{
				ok=1;
				printf("Point %d is contained in figure %d\n",pcnt,i);
			}
		}
		if(!ok) printf("Point %d is not contained in any figure\n",pcnt);
		pcnt++;
	}
}
