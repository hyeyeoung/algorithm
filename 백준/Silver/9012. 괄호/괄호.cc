/*
	괄호

*/

#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
	cin.tie(0);
	cout.tie(0);
	ios::sync_with_stdio(false);

	int n;
	cin >> n;
	while (n--) {
		string str;
		cin >> str;
		stack <char> st;
		bool flag = false;
		for (size_t i = 0; i < str.length(); ++i) {
			char c = str.at(i);
			if (c == '(') st.push(c);
			else if (c == ')' && st.empty()) {
				flag = true;
				break;
			}
			else st.pop();
		}
		if (st.empty() && !flag) cout << "YES\n";
		if (flag || !st.empty())cout << "NO\n";
	}
}