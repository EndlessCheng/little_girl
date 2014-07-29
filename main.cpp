ull judge(int n)
{
	if (n == 11 || n == 23 || n == 29)
		return 0; // Given number is prime. But, NO perfect number is available.
	if (n == 2 || n == 3 || n == 5 || n == 7 || n == 13 || n == 17 || n == 19 || n == 31)
		return (1 << (n - 1)) * ((1 << n) - 1);
	return -1; // Given number is NOT prime! NO perfect number is available.
}
