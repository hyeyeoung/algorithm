#include <iostream>
#include <queue>
using namespace std;
void init() { cin.tie(0); cout.tie(0); ios::sync_with_stdio(false); }

int main() {
	init();
	queue <int> q;
	int n;
	cin >> n;

	for (int i = 1; i <= n; i++) q.push(i);


	while (q.size() != 1) {
		q.pop();
		int tmp = q.front();
		q.push(tmp);
		q.pop();
	}
	cout << q.front();

}