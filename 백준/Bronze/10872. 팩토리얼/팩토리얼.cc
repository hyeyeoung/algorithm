#include <stdio.h>

int fac(int n) {
	if (n > 1)
		return fac(n - 1) * n;
	else
		return 1;
		
}
int main() {
	int n;
	scanf("%d", &n);

	printf("%d", fac(n));

	return 0;
}