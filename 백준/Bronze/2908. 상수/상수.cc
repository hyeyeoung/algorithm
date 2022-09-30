#include <stdio.h>


int main() {
	char a[10], b[10], tmp;
	scanf("%s %s", a, b);

	tmp = a[0];
	a[0] = a[2];
	a[2] = tmp;

	tmp = b[0];
	b[0] = b[2];
	b[2] = tmp;

	int a1 = ((a[0] - '0') * 100 + (a[1] - '0') * 10 + (a[2] - '0'));
	int b1 = ((b[0] - '0') * 100 + (b[1] - '0') * 10 + (b[2] - '0'));

	if (a1 > b1) printf("%d", a1);
	else printf("%d", b1);

	return 0;
}