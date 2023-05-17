//#define _CRT_SECURE_NO_DEPRECATE
//#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

string mul(int a, int b) {
	if (a % b == 0 || b % a == 0) {
		if (a / b > 0) return "multiple";
		else return "factor";
	}
	else
		return "neither";
}
int main() {
	int a, b;

	while (true)
	{
		cin >> a >> b;
		if (a != 0 && b != 0) cout << mul(a, b) << "\n";
		else break;
	}
}