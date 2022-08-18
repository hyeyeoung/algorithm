#include <iostream>
using namespace std;

int main() {
	int test;
	cin >> test;
	for (int i = 0; i < test; i++) {
		int h, w, n;
		cin >> h >> w >> n;

		int cnt = 1;
		while (n > h) {
			n -= h;
			cnt++;
		}
		
		if (cnt >= 10) {
			cout << n << cnt << endl;
		}
		else if (cnt < 10) {
			cout << n * 100 + cnt << endl;
		}
	}
}