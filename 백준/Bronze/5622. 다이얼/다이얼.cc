#include <iostream>
#include <string>
using namespace std;

int main() {
	
	string a;
	int num = 0;
	cin >> a;

	for (int i = 0; i < a.length(); i++) {
		string b;
		b = a.at(i);
		if (b == "A" || b=="B" ||b == "C") {
			num += 3;
		}
		else if (b == "D" || b == "E" || b == "F") {
			num += 4;
		}
		else if (b == "G" || b == "H" || b == "I") {
			num += 5;
		}
		else if (b == "J" || b == "K" || b == "L") {
			num += 6;
		}
		else if (b == "M" || b == "N" || b == "O" ) {
			num += 7;
		}
		else if (b == "P" || b == "Q" || b == "R" ||b =="S") {
			num += 8;
		}
		else if (b == "T" || b == "U" || b == "V") {
			num += 9;
		}
		else if (b == "W" || b == "X" || b == "Y" || b == "Z") {
			num += 10;
		}
	}
	
	cout << num;
}