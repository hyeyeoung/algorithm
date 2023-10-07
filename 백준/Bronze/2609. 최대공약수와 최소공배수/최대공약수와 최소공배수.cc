#include <iostream>
using namespace std;
void init() { cin.tie(0); cout.tie(0); ios::sync_with_stdio(false); }
int GCD(int a, int b) {
	while (b != 0) {
		int r = a % b;
		a = b;
		b = r;
	}
	return a;
}
int LCM(int a, int b, int gcd) {
	return gcd * (a / gcd) * (b / gcd);
}
int main() {
	init();
	int a, b;
	cin >> a >> b;
	int tmp = GCD(a, b);
	cout << tmp <<'\n';
	cout << LCM(a, b, tmp);
}