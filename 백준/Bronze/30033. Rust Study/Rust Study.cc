#include <iostream>
using namespace std; 
void init() { cin.tie(0); cout.tie(0); ios::sync_with_stdio(false); }

int main() {
	init();

	int N;
	cin >> N;
	int arr1[1001];
	int arr2[1001];
	int c = 0;
	for (int i = 0; i < N; i++) {
		cin >> arr1[i];
	}
	for (int i = 0; i < N; i++){
		cin >> arr2[i];
		if (arr1[i] <= arr2[i]) c++;
	}
	cout << c;
}