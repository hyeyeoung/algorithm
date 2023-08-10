#include <iostream>
#include <stack>

using namespace std;

void init() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(false);
}
int main() {
	init();
	stack<int> x;
	int n;
	cin >> n;

	while (n--) {
		int i1;
		cin >> i1;
		if (i1 == 1) {
			int i2;
			cin >> i2;
			x.push(i2);
		}
		else if (i1 == 2) {
			if (x.empty()) cout << -1 << '\n';
			else { cout << x.top() << '\n'; x.pop(); }
		}
		else if (i1 == 3) { cout << x.size() << '\n'; }
		else if (i1 == 4) { cout << x.empty() << '\n'; }
		else if (i1 == 5) {
			if (x.empty()) cout << -1 << '\n';
			else cout << x.top() << '\n';
		}
	}
}