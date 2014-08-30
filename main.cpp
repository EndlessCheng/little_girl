
// LA3485 Bridge: 自适应辛普森版
// Rujia Liu
#include<cstdio>
#include<cmath>


double a; // 与F(x)有关的参数

double F(double x)
{
	return ...;
}

double asr(double a, double b, double eps, double A, double fa, double fb, double fc) // A为[a,b]上的三点simpson值
{
	double c = (a + b) / 2, d = (a + c) / 2, e = (c + b) / 2;
	double fd = F(d), fe = F(e);
	double L = (c - a) * (fa + 4 * fd + fc) / 6, R = (b - c) * (fc + 4 * fe + fb) / 6, LR = L + R;
	if (fabs(LR - A) <= 15 * eps) return LR + (LR - A) / 15.0;
	return asr(a, c, eps / 2, L, fa, fc, fd) + asr(c, b, eps / 2, R, fc, fb, fe);
}

double asr(double a, double b, double eps)
{
	double c = (a + b) / 2;
	double fa = F(a), fb = F(b), fc = F(c);
	return asr(a, b, eps, (b - a) * (fa + 4 * fc + fb) / 6, fa, fb, fc);
}

double solve(double l, double r)
{
	return asr(l, r, 1e-5); //*
}

int main()
{
	int T;
	scanf("%d", &T);
	for (int kase = 1; kase <= T; kase++)
	{
		int D, H, B, L;
		scanf("%d%d%d%d", &D, &H, &B, &L);
		int n = (B + D - 1) / D; // 间隔数
		double D1 = (double)B / n;
		double L1 = (double)L / n;
		double x = 0, y = H;
		while (y - x > 1e-5) // 二分法求解高度
		{
			double m = x + (y - x) / 2;
			if (parabola_arc_length(D1, m) < L1) x = m;
			else y = m;
		}
		if (kase > 1) printf("\n");
		printf("Case %d:\n%.2lf\n", kase, H - x);
	}
	return 0;
}
