#include <iostream>
using namespace std;
void init() { cin.tie(0); cout.tie(0); ios::sync_with_stdio(NULL); }
int arr[1002][8];

int min(int a, int b, int c) {
	return (a <= b && a <= c) ? a : (b <= a && b <= c ? b : c);
}

int RGB(int n) {
	arr[0][3] = arr[0][0]; arr[0][4] = arr[0][1]; arr[0][5] = arr[0][2];
	for (int i = 1; i < n; i++) {
		arr[i][3] = arr[i - 1][4] < arr[i - 1][5] ? arr[i][0] + arr[i - 1][4] : arr[i][0] + arr[i - 1][5];
		arr[i][4] = arr[i - 1][3] < arr[i - 1][5] ? arr[i][1] + arr[i - 1][3] : arr[i][1] + arr[i - 1][5];
		arr[i][5] = arr[i - 1][3] < arr[i - 1][4] ? arr[i][2] + arr[i - 1][3] : arr[i][2] + arr[i - 1][4];
	}
	return min(arr[n - 1][3], arr[n - 1][4], arr[n - 1][5]);
}

int main() {
	init();
	int N; 
	cin >> N;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < 3; j++)
			cin >> arr[i][j];
	}

	cout << RGB(N);
}