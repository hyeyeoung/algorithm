#include <iostream>
#include <string>
using namespace std;

string sol(int a) {
	int count = 0;
	int arr[100000] = {};
	for (int i = 1; i <= a/2; i++) {
		if (a % i == 0 && i != a) {
			count += i;
			arr[i] = 1;
		}
	}
	if (count != a) return " is NOT perfect.";
	string str = " = 1";
	for (int i = 2; i <= a / 2; i++) {
		if (arr[i] == 1) {
			string str1 = " + "+ to_string(i);
			str += str1;
		}
	}
	return str;
}
int main() {
	while (true) {
		int a;
		cin >> a;
		//a = 6;
		if (a == -1) break;
		cout <<a << sol(a) << '\n';
	}
}