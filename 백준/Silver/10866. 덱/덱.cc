#include <iostream>
#include <deque>
using namespace std;

void init() { cin.tie(0); cout.tie(0); ios::sync_with_stdio(false); }

int main() {
	init();
	deque <int> d;

	int n; cin >> n;
	while (n--) {
		string str; 
		cin >> str;

		if (str == "push_front") { int x; cin >> x; d.push_front(x); }
		if (str == "push_back") { int x; cin >> x; d.push_back(x); }
		if (str == "pop_front") { 
			if (d.size()) { cout << d.front() << '\n'; d.pop_front(); }
			else cout << -1 << '\n';
		}
		if (str == "pop_back") {
			if (d.size()) { cout << d.back() << '\n'; d.pop_back(); }
			else cout << -1 << '\n';
		}
		if (str == "size") {	cout << d.size() << '\n'; }
		if (str == "empty") { cout << d.empty() << '\n'; }
		if (str == "front") {
			if (d.size()) { cout << d.front() << '\n'; }
			else cout << -1 << '\n';
		}
		if (str == "back") {
			if (d.size()) { cout << d.back() << '\n'; }
			else cout << -1 << '\n';
		}
	}
}