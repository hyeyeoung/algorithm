#include <iostream>
#include <algorithm>
using namespace std;
int arr[1000001];
void init() {
	cin.tie(0);
	cout.tie(0);
	ios::sync_with_stdio(NULL);
}
int min(int a, int b, int c) {
	if (a > b && a > c) return a;
	else if (b > a && b > c) return b;
	else return c;
}
int dp(int n) {
	arr[1] = 0;

	for (int i = 2; i <= n; i++) {
		arr[i] = arr[i - 1] + 1;
		if (i % 2 == 0) 
			arr[i] = min(arr[i], arr[i / 2] +1);
		if (i % 3 == 0)
			arr[i] = min(arr[i], arr[i / 3] +1);
	}
	return arr[n];
}


int main() {
	init();
	int N;
	cin >> N;
	cout << dp(N);
}