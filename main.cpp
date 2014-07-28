#include <stdio.h>
#define LL long long

int main() {
	LL i, n;
	while(scanf("%lld", &n) != -1 && n) {
		int flag = 1;
		if(n < 0)
			n = -n, flag = 0;
		int ans = 1;
		int ok = 0;
		for(i = 2;i*i <= n; i++) {
			LL cur = 1;
			int sum = 0;
			while(cur <= n) {
				cur *= i;
				sum++;
				if(cur == n && (flag || sum&1)) {
					ok = 1;
					ans = sum;
				}
			}
			if(ok)	break;
		}
		printf("%d\n", ans);
	}
	return 0;
}
