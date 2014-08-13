#include<bits/stdc++.h>
using namespace std;
#define For(i, n) for (i = 0; i < n; ++i)
#define Forr(i, start, n) for (i = start; i < n; ++i)
#define rFor(i, n) for (i = (n); i >= 0; --i)
#define mem(a, num) memset(a, num, sizeof(a))
typedef long long ll;
typedef pair<int, int> p2;

#define DI(a) printf(#a" = "), cout << (a) << endl
#define DII(a, b) printf(#a" = "), cout << (a), printf(", "#b" = "), cout << (b) << endl

const int mx = 1e5 + 5;



class CandyAddict
{
	public:

		ll solve_(ll x, ll y, ll z)
		{
			ll l, r, mi, ans, m, kip;
			int i, j, k;
			kip = 0;
			m = 1;
			if(x>y)
            {
			while (true)
			{
				if ((x * m - (m - 1)*y) / y > kip)
				{
					if (m + kip > z)
						break;
					else
					{
						m = m + kip;
						kip = (x * m - (m - 1) * y) / y;
					}
				}
				else
				{
					k = ((kip + 1) * y - (x * m - (m - 1) * y)) / ((x - y) * kip);
					if ((x * m - (m - 1)*y) + ((x - y)*kip)*k != (kip + 1)*y)
						k++;
					if (m + kip * k > z)
						break;
					else
					{
						m = m + kip * k;
						kip = (x * m - (m - 1) * y) / y;
					}
				}
			}
			k = (z - m) / kip;
			m = m + k * kip;
			ans = (x * m - (m - 1) * y) % y + x * (z - m);
			return ans;
			}
			else
             return 0;
			//printf("%lld\n", ans);
		}

		vector<long long> solve(vector <int> X, vector <int> Y, vector <int> Z)
		{
		    int n=X.size(),i;
		    vector<ll> ans;
		    For(i,n) ans.push_back(solve_(X[i],Y[i],Z[i]));
		    return ans;
		}
 };

