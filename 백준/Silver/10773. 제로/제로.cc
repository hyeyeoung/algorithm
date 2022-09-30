#include <iostream>
#include <stack>
using namespace std;

int main() {
	int k;
	cin >> k;
	stack<int> res;

	for (int i = 0; i < k; i++) {
		int num;
		cin >> num;

		if (num == 0) {
			res.pop();
		}
		else {
			res.push(num);
		}
	}
	int result = 0;
	if (res.size() == 0)
		cout << result;
	else {
		while(!res.empty()) {
			result += res.top();
			res.pop();
		}
		cout << result;
	}
}
