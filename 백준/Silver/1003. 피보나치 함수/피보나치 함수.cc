#include <iostream>
using namespace std;

struct Fib {
	int zero;
	int one;
};
Fib arr[5000];
void init() {
	cin.tie(0); cout.tie(0); ios::sync_with_stdio(NULL);
}
Fib fib(int n) {
	arr[0].zero = 1;
	arr[0].one = 0;
	arr[1].zero = 0;
	arr[1].one = 1;

	for (int i = 2; i <= n; i++) {
		arr[i].zero = arr[i - 1].zero + arr[i - 2].zero;
		arr[i].one = arr[i - 1].one + arr[i - 2].one;
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
		Fib result = fib(n);
		cout << result.zero << " " << result.one << "\n";
	}
}