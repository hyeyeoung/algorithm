#include <stdio.h>

int main()
{
	int n, r;
	int a, b, c, d;
	int t = 0;

	scanf("%d", &n);
	r = n;

	while (1)
	{
		a = n / 10;
		b = n % 10;
		c = (a + b) % 10;
		d = (b * 10) + c;
		n = d;
		t++;
		if (d == r)
			break;
	}
	printf("%d", t);
	return 0;
}