#include <iostream>
using namespace std;
void init() { cin.tie(0); cout.tie(0); ios::sync_with_stdio(false); }
long long arr[31][31]{};
void dp() {
	arr[1][1] = 1;
	for (int i = 1; i <= 30; i++) {
		for (int j = 1; j <= 30; j++) {
			if (i == j) arr[i][j] = 1;
			else if (i == 1) arr[i][j] = j;
			else arr[i][j] = arr[i - 1][j - 1] + arr[i][j - 1];
		}
	}
}
int main() {
	init(); 
	int T;
	cin >> T;
	while (T--) {
		int n; int m;
		cin >> n >> m;
		dp();
		cout << arr[n][m] << "\n";
	}
}