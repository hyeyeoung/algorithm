#include <iostream>
#include <string>
using namespace std;

int main() {
	
	string a;
	int num = 0;
	cin >> a;
	int i = 0;
	while (i < a.length()) {
		if (a[i] == 'c') {
			if (a[i + 1] == '=') {
				num++;
				i+=2;
			}
			else if (a[i + 1] == '-') {
				num++;
				i+=2;
			}
			else {
				num++;
				i++;
			}
		}
		else if (a[i] == 'd') {
			if (a[i + 1] == 'z') {
				if (a[i + 2] == '=') {
					i += 3;
					num++;
				}
				else {
					i += 2;
					num += 2;
				}
			}
			else if (a[i + 1] == '-') {
				i += 2;
				num++;
			}
			else {
				num++;
				i++;
			}
		}
		else if (a[i] == 'l') {
			if (a[i + 1] == 'j') {
				i += 2;
				num++;
			}
			else {
				i++;
				num++;
			}
		}
		else if (a[i] == 'n') {
			if (a[i + 1] == 'j') {
				i += 2;
				num++;
			}
			else {
				i++;
				num++;
			}
		}
		else if (a[i] == 's') {
			if (a[i + 1] == '=') {
				i += 2;
				num++;
			}
			else {
				i++;
				num++;
			}
		}
		else if (a[i] == 'z') {
			if (a[i + 1] == '=') {
				i += 2;
				num++;
			}
			else {
				i++;
				num++;
			}
		}
		else {
			i++;
			num++;
		}
	}
	cout << num;
}