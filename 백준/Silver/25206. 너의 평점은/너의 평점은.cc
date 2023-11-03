#include <iostream>
#include <string>
using namespace std;
void init() { cin.tie(0); cout.tie(0); ios::sync_with_stdio(false); }


int main() {
	double result_score = 0;
	double number = 0; 
	for (int i = 0; i < 20; i++) {
		string name; double num,sc = 0; string score;
		cin >> name >> num >> score;
		if (score == "A+") sc = 4.5;
		if (score == "A0") sc = 4.0;
		if (score == "B+") sc = 3.5;
		if (score == "B0") sc = 3.0;
		if (score == "C+") sc = 2.5;
		if (score == "C0") sc = 2.0;
		if (score == "D+") sc = 1.5;
		if (score == "D0") sc = 1.0;
		if (score == "F") sc = 0.0;

		if (score != "P") {
			number += num;
			result_score += num * sc;
		}
	}
	cout << fixed;
	cout.precision(6);
	cout << result_score / number;
}