#include <iostream>
using namespace std;
void init() { cin.tie(0); cout.tie(0); ios::sync_with_stdio(false); }
int LCM(int a, int b) { // 유클리드 호제법을 이용한 최소 공약수로 최소 공배수 도출
	int atmp = a;
	int btmp = b;
	while (btmp != 0) {
		int r = atmp % btmp;
		atmp = btmp;
		btmp = r;
	}
	return atmp * (a/atmp)*(b/atmp);
}
int main() {
	init();
	int t;
	cin >> t;
	while (t--) {
		int a, b;
		cin >> a >> b;
		cout << LCM(a, b) << '\n';
	}
}