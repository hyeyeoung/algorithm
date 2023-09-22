#include <iostream>
using namespace std;
void init() { cin.tie(0); cout.tie(0); ios::sync_with_stdio(false); }

long long P(int n, long long arr[]) {
	arr[1] = 1;
	arr[2] = 1;
	arr[3] = 1;
	for (int i = 4; i <= n; i++) {
		arr[i] = arr[i - 2] + arr[i - 3];
	}
	return arr[n];
}
int main() {
	int T;
	cin >> T;
	while (T--) {
		int n; cin >> n;
		long long arr[1000];
		cout << P(n, arr)<<"\n";
	}
}