#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 

int n;
int sol(int n) {
	int sum = n;

	while (n>0) {
		sum += n % 10;
		n = n / 10;
	}
	return sum;
}

int main(){
	
	int arr[10001], cheak;

	for (int i = 1; i <= 10001; i++) {
		cheak = sol(i);
		if (cheak < 10001)
			arr[cheak] = 1;    //셀프넘버가 맞는지 확인
	}

	for (int i = 1; i < 10001; i++) {
		if (arr[i] != 1)
			printf("%d\n", i);   //아닌 수를 출력
	}
	return 0;
}