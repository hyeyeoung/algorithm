/* 균형잡힌 세상 */
#include <iostream>
#include <stack>
#include <string>
using namespace std;
void init() {
	cin.tie(0);
	cout.tie(0);
	ios::sync_with_stdio(false);
}

int main() {
	init();
	while (true) {
		string str;
		getline(cin, str); // 문자열 포함 한 줄 받기
		if (str == ".") break; // 연산자 오버로딩 == 을 사용할려면 큰 따옴표 사용해야함..
		stack<char> st1; // 소괄호
		bool flag1 = false;

		for (size_t i = 0; i < str.length(); ++i) {
			char c = str.at(i);
			if (c == '.') break;

			if (c == '(' || c == '[')st1.push(c);
			else if (c == ')' && !st1.empty() && st1.top() == '(') st1.pop();
			else if (c == ']' && !st1.empty() && st1.top() == '[') st1.pop();
			else if((c == ')' && st1.empty()) || (c==')' && st1.top() != '(')) flag1 = true;
			else if ((c == ']' && st1.empty()) || (c == ']' && st1.top() != '[')) flag1 = true;

		}// for

		if (!st1.empty() || flag1 ) cout << "no\n";
		else cout << "yes\n";

	}// while

}//main