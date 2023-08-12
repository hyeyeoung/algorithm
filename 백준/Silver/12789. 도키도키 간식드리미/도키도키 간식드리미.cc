/*  도키도키 간식드리미  */

#include <iostream>
#include <stack>
using namespace std;
void init() {
	cin.tie(0);
	cout.tie(0);
	ios::sync_with_stdio(false);
}

int main() {
	init();
	int n;
	cin >> n;
	int i = 1;
	stack <int> st;
	while (n--) {
		int num;
		cin >> num;

		if (i == num) {
			i++;
			while (!st.empty() && st.top() == i) {
				st.pop();
				i++;
			}
		}
		else st.push(num);
	}

	if (st.empty()) cout << "Nice";
	else cout<< "Sad";
}