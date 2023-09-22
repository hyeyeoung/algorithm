#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void init() { cin.tie(0); cout.tie(0); ios::sync_with_stdio(false); }

int main() {
	init();
	int n;
	cin >> n;
	vector <int> arrr;
	for (int i = 0; i < n; i++) {
		int tmp;
		cin >> tmp;
		arrr.push_back(tmp);
	}
	int m;
	cin >> m;
	sort(arrr.begin(), arrr.end());
	for (int i = 0; i < m; i++) {
		int tmp;
		cin >> tmp;
		if (binary_search(arrr.begin(), arrr.end(), tmp) ) cout << "1" << '\n';
		else { cout << "0" << '\n'; }
	}
}