#include <iostream>
using namespace std;
void init() { cin.tie(0); cout.tie(0); ios::sync_with_stdio(false); }
int arr[1001]{};

int tile(int n) {
	arr[1] = 1;
	arr[2] = 3;
	arr[3] = 5;

	for (int i = 4; i <= n; i++) arr[i] = (arr[i - 1] + arr[i - 2] * 2) % 10007;
	return arr[n];
}

int main() {
	int n;
	cin >> n;
	cout << tile(n);
}