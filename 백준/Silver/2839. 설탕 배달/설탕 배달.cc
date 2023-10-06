#include <iostream>
#include <algorithm>
using namespace std;
int sugar[5001]{ 0 };
int main() {
	int n;
	cin >> n;
	sugar[1] = -1; sugar[2] = -1; sugar[3] = 1;
	sugar[4] = -1; sugar[5] = 1;
	for (int i = 6; i <= n; i++) {
		if (sugar[i - 3] != -1 && sugar[i - 5] == -1) sugar[i] = sugar[i - 3] + 1;
		else if (sugar[i - 5] != -1 && sugar[i - 3] == -1) sugar[i] = sugar[i - 5] + 1;
		else if (sugar[i - 5] != -1 && sugar[i - 3] != -1) sugar[i] = min(sugar[i - 5] + 1, sugar[i - 3] + 1);
		else if(sugar[i-5] == -1 && sugar[i-3] == -1) sugar[i] = -1;
	}
	cout << sugar[n];
}