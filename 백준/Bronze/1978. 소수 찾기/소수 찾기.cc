#include <iostream>
using namespace std;
void init() { cin.tie(0); cout.tie(0); ios::sync_with_stdio(false); }
bool prime(int n) {
	if (n < 2) return false;
	for (int i = 2; i * i <= n; i++) {
		if (n % i == 0) return false;
	}
	return true;
}
int main() {
	init();

	int n; int result = 0;
	cin >> n;
	while (n--) {
		int tmp;
		cin >> tmp;
		if (prime(tmp)) result++;
	}
	cout << result;
}