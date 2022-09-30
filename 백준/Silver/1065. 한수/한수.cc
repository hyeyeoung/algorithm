#include <stdio.h> 

int n,i;  
int count;  

int fn(int n) {
	for (i = 1; i <= n; i++) {
		if (i <= 99)
			count++;
		else
		{
			int a = i / 100; //첫번째 자리숫자
			int c = (i % 100) % 10; //세번째
			int b = (i % 100) / 10; //두번째

			if ((a - b) == (b - c))
				count++;
		}
	}
	return count;
}

int main() {
	scanf("%d", &n);
	printf("%d\n", fn(n));

	return 0;
}