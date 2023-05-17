//#define _CRT_SECURE_NO_DEPRECATE
//#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

int sol(int a, int b) {
	int count = 0;
	for (int i = 1; i <= a; i++) {
		if (a % i == 0)	count++;
		if (i == a && count < b) return 0;
		if (count == b) return i;
	}
}
int main() {
	int a, b;
	cin >> a >> b;
	cout << sol(a, b);
}