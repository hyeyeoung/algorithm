#include <iostream>
using namespace std;
void init() { cin.tie(0); cout.tie(0); ios::sync_with_stdio(false); }
int arr[1011][1011];
int count(int n) {
	arr[0][1] = 1;
	int count = 1;
	for (int i = 1; i < n; i++) {
		int max_tmp = 0;
		for (int j = 0; j < i; j++) {
			if (arr[i][0] > arr[j][0]) {
				max_tmp = max_tmp > arr[j][1] ? max_tmp : arr[j][1];
			}
		}
		arr[i][1] = max_tmp + 1;
		count = count > arr[i][1] ? count : arr[i][1];
	}
	return count;
}
int main() {
	init();
	int n; 
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i][0];
	}
	cout << count(n);
}