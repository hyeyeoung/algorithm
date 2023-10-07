#include <iostream>
using namespace std;
void init() { cin.tie(0); cout.tie(0); ios::sync_with_stdio(false); }

bool check[1000002];
void prime(int n, int m) { // n은 시작점 m은 끝점.. for문은 2부터 시작하되 출력은 n이상부터
	for (int i = 2; i <= m; i++) {
		if (check[i] == false) {
			if (i >= n && i <= m) cout << i << '\n';
			for (int j = i * 2; j <= m; j += i) check[j] = true;
		}
	}
}
int main() {
	init();
	int n, m;
	cin >> n >> m;
	prime(n, m);
}