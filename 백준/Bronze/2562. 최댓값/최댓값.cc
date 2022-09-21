#include <stdio.h>
#define NUMBERS 9

int main() {
	int a, k, max = -100001;

	int arr[NUMBERS];

	for (int i = 0; i < NUMBERS; i++) {
		scanf("%d", &k);
		arr[i] = k;

		if (max < arr[i])
		{
			max = arr[i];
			a = i+1;
		}
	}
	printf("%d\n%d", max, a);

	return 0;
}

