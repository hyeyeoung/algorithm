//#define _CRT_SECURE_NO_DEPRECATE
//#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

int max(int a, int b, int c) {
	if (a >= b && a >= c) return a;
	else if (b >= a && b >= c) return b;
	else return c;
}
int main() {
	int a, b, c;
	cin >> a >> b >> c;
	int sum = 0;
	if (a == b && b == c && a == c)
		sum = 10000 + a * 1000;
	else if ((a == b && a != c) || (a == c && a != b) || (b == c && b != a)) {
		sum = (b == c) ? 100 * b : 100 * a;
		sum += 1000;
	}
	else {
		sum = max(a, b, c) * 100;
	}
	cout << sum;
	
}