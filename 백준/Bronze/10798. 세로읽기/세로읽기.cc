#include <iostream>
using namespace std;

int main() {
	char arr[7][18];
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 18; j++) arr[i][j] = 0;
		for (int j = 0; j < 18; j++) {
			cin.get(arr[i][j]);
			if (arr[i][j] == '\n') break;
		}
	}
	
	for (int i = 0; i < 18; i++) {
		for (int j = 0; j < 5; j++) {
			if ((int(arr[j][i]) >= 48 && int(arr[j][i]) <= 57) || (int(arr[j][i]) >= 65 && int(arr[j][i]) <= 90) || (int(arr[j][i]) >= 97 && int(arr[j][i]) <= 122))
				cout << arr[j][i];
		}
	}
}