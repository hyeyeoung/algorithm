#include <iostream>
#include <string>
using namespace std;
int main() {
	for (int i = 0; i < 100; i++) {
		string str;
		getline(cin, str);
		if (str == "") break;
		cout << str << '\n';
	}
}