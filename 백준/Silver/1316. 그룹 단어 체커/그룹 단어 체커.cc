#include <iostream>
#include <string>
using namespace std;

bool cheker(string str) {
	int al[27] = {};

	for (int i = 0; i < str.length(); i++) {
		if (al[(int)str[i] - 97] == 0) {
			char a = str[i];
			al[str[i] - 'a'] = 1;
			while (true) {
				if (a != str[++i]) {
					i--;
					break;
				}
			}
		}
		else if (al[(int)str[i] - 97] != 0) {
			return false;
		}
	}
	return true;
}

int main() {
	int n;
	cin >> n;
	int num = 0;
	for (int i = 0; i < n; i++) {
		string a;
		cin >> a;
		if (cheker(a) == true) {
			num++;
		}
	}
	cout << num;
}