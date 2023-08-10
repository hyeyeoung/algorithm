#include <iostream>

using namespace std;

int main() {
	int x;
	cin >> x;

	int i = 1;

	while (x > i) {
		x-= i;
		i++;
	}

	if (i % 2 != 0) cout << i - x + 1 << "/" << x;
	else cout << x << "/" << i-x+1;
}