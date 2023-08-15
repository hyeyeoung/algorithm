/* 큐2 */

#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main() {
	cin.tie(0);
	cout.tie(0);
	ios::sync_with_stdio(false);

	queue <int> q;
	int n;
	cin >> n;

	while (n--) {
		string str;
		cin >> str;
		if (str == "push") {
			int n;
			cin >> n;
			q.push(n);
		}
		else if (str == "pop") {
			if (!q.empty()) {
				cout << q.front() << '\n';
				q.pop();
			}
			else 
				cout << -1<<'\n';
		}
		else if (str == "size") cout << q.size() << '\n';
		else if (str == "empty") cout << q.empty() << '\n';
		else if (str == "front") {
			if (!q.empty()) cout << q.front()<<'\n';
			else cout << -1 << '\n';
		}
		else if (str == "back") {
			if (!q.empty()) cout << q.back() << '\n';
			else cout << -1 << '\n';
		}
	}
}