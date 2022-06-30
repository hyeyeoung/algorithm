#include <iostream>
#include <stack>

using namespace std;

int main() {
	int n;
	cin >> n;
	stack<int> st;

	for (int i = 0; i < n; i++) {
		string a;
		cin >> a;
		if (a == "push") {
			int num;
			cin >> num;
			st.push(num);
		}
		if (a == "pop") {
			if (st.empty())
				cout << -1<<endl;
			else {
				cout << st.top()<<endl;
				st.pop();
			}
		}
		if (a == "top") {
			if (st.empty())
				cout << -1<<endl;
			else {
				cout << st.top()<<endl;
			}
		}
		if (a == "empty") {
			if (st.empty())
				cout << 1<<endl;
			else
				cout << 0<<endl;
		}
		if (a == "size") {
			cout << st.size()<<endl;
		}
	}
}