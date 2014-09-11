const int mx = 1e6 + 5;

int phi[mx];
void get_phi()
{
	int i, j;
	Forr(i, 2, mx) if (!phi[i]) Forrr(j, i, mx, i) {if (!phi[j]) phi[j] = j; phi[j] -= phi[j] / i;}
}

bool is_power_of_p(int n)
{
	for (int i = 2; i * i <= n; ++i)
	{
		if (n % i) continue;
		do n /= i;
		while (n % i == 0);
		return n == 1;
	}
	return true; // n本身就是质数
}

bool has_primitive_root(int n)
{
	if (n == 2 || n == 4) return true;
	if (~n & 1) n >>= 1;
	if (~n & 1) return false;
	return is_power_of_p(n);
}

vector<int> factors;
int get_factors(int n)
{
	factors.clear();
	for (int i = 2; i * i <= n; ++i)
	{
		if (n % i) continue;
		factors.PB(i);
		do n /= i;
		while (n % i == 0);
	}
	if (n > 1) factors.PB(n);
	return factors.size();
}

int get_min_primitive_root(int n)
{
	if (n == 2) return 1;
	int m = get_factors(phi[n]), i;
	for (int r = 2;; ++r)
	{
		if (gcd(r, n) > 1) continue;
		For(i, m) if (pow(r, phi[n] / factors[i], n) == 1) break;
		if (i == m) return r;
	}
}

int primitive_roots[mx];
int get_primitive_roots(int n)
{
	if (!has_primitive_root(n)) return -1;
	int r = primitive_roots[0] = get_min_primitive_root(n);
	if (phi[n] <= 2) return 1;
	primitive_roots[1] = pow(r, phi[n] - 1, n);
	int cnt = 2, m = phi[n] >> 1, i;
	Forr(i, 2, m + 1) if (gcd(i, phi[n]) == 1) primitive_roots[cnt++] = pow(r, i, n), primitive_roots[cnt++] = pow(r, phi[n] - i, n);
	sort(primitive_roots, primitive_roots + cnt);
	return cnt;
}

int main()
{
	get_phi();
	int n;
	while (~SI(n))
	{
		n = get_primitive_roots(n);
		if (~n) {PA(primitive_roots, n);}
		else PI(-1);
	}
	return 0;
}
