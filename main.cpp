import math

x = float(raw_input('Input: '))

low = 0.0
high = x
ans = (low + high) / 2
eps = 1e-9

while low + eps < high and ans * ans != x:
	if ans * ans < x:
		low = ans
	else:
		high = ans
	ans = (low + high) / 2

if math.fabs(ans) > eps:
	print -ans, ans
else:
	print ans