#include <iostream>
using namespace std;
void init() { cin.tie(0); cout.tie(0); ios::sync_with_stdio(false); }
bool check[1000002];
void prime() { // n은 시작점 m은 끝점.. for문은 2부터 시작하되 출력은 n이상부터
	for (int i = 2; i <= 1000000; i++) {
		if (check[i] == false) {
			for (int j = i * 2; j <= 1000000; j += i) check[j] = true; // true는 그 수를 지웠다는 의미.. i의 배수를 삭제해준다.
		}
	}
}
int result(int n) {
	for (int i = 2; i <= n/2 ; i++) {
		if (check[i] == false && check[n - i] == false) 
			return i;
	}
	return -1;
}
int main() {
	init();
	prime(); // 에라토스테네스의 체 사용
	while (1) {
		int c; cin >> c;
		if (c == 0) break;
		int tmp = result(c);
		if (tmp) cout << c << " = " << tmp << " + " << c - tmp << '\n';
		else cout << "Goldbach's conjecture is wrong."<<'\n';
	}
}