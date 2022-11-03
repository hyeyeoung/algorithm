#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int total, n;
	cin >> total >> n;
	int* arr = new int[total];
	for (int i = 0; i < total; i++) cin >> arr[i];
	sort(arr, arr + total);
	reverse(arr, arr + total);
	cout << arr[n - 1];

	delete[]arr;
}