#include <iostream>
using namespace std;
void init() { cin.tie(0); cout.tie(0); ios::sync_with_stdio(false); }
int arr[500];
int dp(int n) {
	arr[1] = 1;
	arr[2] = 2;
	arr[3] = 4;
	arr[4] = 7;
	for (int i = 5; i <= n; i++) {
		arr[i] = arr[i - 1] + arr[i - 2] + arr[i - 3];
	}
	return arr[n];
}

int main() {
	init();

	int T;
	cin >> T;
	while (T--) {
		int n;
		cin >> n;
		cout << dp(n)<<'\n';
	}
}