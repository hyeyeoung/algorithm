#include <iostream>
using namespace std;
void init() { cin.tie(0); cout.tie(0); ios::sync_with_stdio(false); }
struct Node {
	int data;
	int max;
};
Node arr[501][501]{};
int integer_tri(int n) {
	arr[1][1].max = arr[1][1].data;
	int result = 0;
	for (int i = 2; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			if (i == j)
				arr[i][j].max = arr[i - 1][j - 1].max + arr[i][j].data;
			else if (j == 1) arr[i][j].max = arr[i - 1][j].max + arr[i][j].data;
			else
				arr[i][j].max = arr[i - 1][j].max > arr[i - 1][j - 1].max ? arr[i][j].data + arr[i - 1][j].max : arr[i][j].data + arr[i - 1][j - 1].max;
			if (i == n) 
				result = arr[i][j].max > result ? arr[i][j].max : result;
		}
	}
	if (n == 1) return arr[1][1].max;
	return result;
}
int main() {
	init();
	int n; cin >> n;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) cin >> arr[i][j].data;
	}
	cout << integer_tri(n);
}