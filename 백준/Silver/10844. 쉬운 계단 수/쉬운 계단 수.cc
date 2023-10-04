#include <iostream>
using namespace std; 
void init() { cin.tie(0); cout.tie(0); ios::sync_with_stdio(false); }
long long arr[101][10]{};
long long stair(int n) {
	arr[1][0] = 0;
	long long result = 0;
	for (int i = 1; i <= n; i++) {
		for (int j = 0; j <= 9; j++) {
			if (i == 1 && j != 0) arr[i][j] = 1;
			else if (j == 0 && j != 1) arr[i][j] = arr[i - 1][j + 1] % 1000000000;
			else if (j == 9 && j != 1) arr[i][j] = arr[i - 1][j - 1] % 1000000000;
			else 
				arr[i][j] = (arr[i - 1][j - 1] + arr[i - 1][j + 1]) % 1000000000;

			if (i == n) result += arr[i][j]; // 결과 도출
		}
	}
	return result % 1000000000;
}
int main() {
	init();
	int n;
	cin >> n;
	cout << stair(n);
}