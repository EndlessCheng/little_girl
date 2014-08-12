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
			ll left = x, can = 0;
			while (true)
			{

			   // break;
				left += x * can;

				can = left / y;
				//DI(can);
				left %= y;
				if (z < can)
				{
					left += z * x;
					break;
				}
				z -= can;
				// DI(z);break;
			}
			return left;
		}

		vector<ll> solve(vector <int> x, vector <int> y, vector <int> z)
		{
			vector<ll> ans;
			int n = x.size(), i;
			For(i, n) ans.push_back(solve_(ll(x[i]), (ll)y[i], (ll)z[i] - 1));
			return ans;
		}
// };


// BEGIN CUT HERE
	public:
		void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); }
	private:
		template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
		void verify_case(int Case, const vector<long long> &Expected, const vector<long long> &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: " << print_array(Expected) << endl; cerr << "\tReceived: " << print_array(Received) << endl; } }
		void test_case_0() { int Arr0[] = {5}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arr1[] = {3}; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); int Arr2[] = {3}; vector <int> Arg2(Arr2, Arr2 + (sizeof(Arr2) / sizeof(Arr2[0]))); long Arr3[] = {6 }; vector<long long> Arg3(Arr3, Arr3 + (sizeof(Arr3) / sizeof(Arr3[0]))); verify_case(0, Arg3, solve(Arg0, Arg1, Arg2)); }
		void test_case_1() { int Arr0[] = {5, 5, 5, 5, 5}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arr1[] = {3, 3, 3, 3, 3}; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); int Arr2[] = {1, 2, 3, 4, 5}; vector <int> Arg2(Arr2, Arr2 + (sizeof(Arr2) / sizeof(Arr2[0]))); long Arr3[] = {2, 1, 6, 2, 7 }; vector<long long> Arg3(Arr3, Arr3 + (sizeof(Arr3) / sizeof(Arr3[0]))); verify_case(1, Arg3, solve(Arg0, Arg1, Arg2)); }
		void test_case_2() { int Arr0[] = {1000000000, 1000000000, 1000000000, 1000000000, 1000000000}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arr1[] = {1, 2, 3, 999999998, 999999999}; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); int Arr2[] = {342568368, 560496730, 586947396, 386937583, 609483745}; vector <int> Arg2(Arr2, Arr2 + (sizeof(Arr2) / sizeof(Arr2[0]))); long Arr3[] = {342568367000000000, 60496729000000000, 253614062000000001, 773875166, 609483745 }; vector<long long> Arg3(Arr3, Arr3 + (sizeof(Arr3) / sizeof(Arr3[0]))); verify_case(2, Arg3, solve(Arg0, Arg1, Arg2)); }

// END CUT HERE

};

int main() {CandyAddict ___test; ___test.run_test(-1); return 0;}
