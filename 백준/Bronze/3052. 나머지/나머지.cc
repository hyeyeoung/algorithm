#include <stdio.h> 
#define NUMBERS 10

int main() {
	
	int input, result = 0;  //배열에 넣을 숫자, 합계 변수 선언
	int num[NUMBERS];


	for (int i = 0; i < NUMBERS; i++)
	{
		scanf("%d", &input);
		num[i] = input % 42;
	}

	for (int i = 0; i < NUMBERS; i++) {
		int count = 0;
		for (int j = i + 1; j < NUMBERS; j++) {
			if (num[i] == num[j])
				count++;
		}
		if (count == 0)
			result++;
	}
	
	printf("%d", result);

	return 0;
}

