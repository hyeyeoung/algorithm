#include <iostream>
using namespace std;

int num(int k, int n) {
	int** arr = new int* [k+1];
	for (int i = 0; i <= k; i++) {
		arr[i] = new int[n];
		for (int j = 0; j < n; j++) {
			if (i == 0) {
				arr[i][j] = j+1;
			}
			else {
				if (j == 0)
					arr[i][j] = 1;
				else {
					arr[i][j] = arr[i][j -1]+arr[i-1][j];
				}
			}
		}
	}
	int cnt = arr[k][n-1];
	for (int i = 0; i < k; i++) {
		delete[]arr[i];
	}
	delete[]arr;
	return cnt;
}

int main() {
	int test_case;
	cin >> test_case;

	for (int i = 0; i < test_case; i++) {
		int k, n;
		cin >> k;
		cin >> n;
		int result = num(k, n);
		cout << result << '\n';
	}
}