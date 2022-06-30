#include <stdio.h> 
int main(){
	long a, b, c;
	int count = 1;

	scanf("%ld %ld %ld", &a, &b, &c);

	if (b - c >= 0)
		printf("-1");
	else {
		count = a / (c - b);
		count++;
		printf("%d", count);
	}


	return 0;
}