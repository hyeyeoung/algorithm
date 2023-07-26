#include <stdio.h>

int main() {
	int c, n;

	scanf("%d\n", &c); //case갯수

	for (int i = 0; i < c; i++) {
		int sum = 0, count = 0;
		double avg = 0;
		scanf("%d", &n);
		int sc[1000];

		for (int j = 0; j < n; j++) {
			scanf("%d", &sc[j]);
			sum += sc[j];
		}
		avg = (float)sum / n;
		for (int g = 0; g < n; g++) {
			if (sc[g] > avg)
				count++;

		}//평균보다 높은 사람 세기


		printf("%.3f%%\n", (double)count / n * 100);
	}

	return 0;


}