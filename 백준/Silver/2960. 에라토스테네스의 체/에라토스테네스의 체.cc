#include <iostream>
using namespace std;
void init() { cin.tie(0); cout.tie(0); ios::sync_with_stdio(false); }
int Sieve_of_Eratostenes(int n, int k) {
	bool check[1002]{};
	int result = 0;
	for (int i = 2; i <= n; i++) {
		if (check[i] == false) {
			for (int j = i; j <= n; j += i) {
				if (check[j] == false) {
					check[j] = true;
					result++;
					if (result == k) return j;
				}
			}
		}
	}
}
int main() {
	init();
	int n, k;
	cin >> n >> k;
	cout << Sieve_of_Eratostenes(n, k);
}