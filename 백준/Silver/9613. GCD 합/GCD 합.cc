#include <iostream>
using namespace std;
void init() { cin.tie(0); cout.tie(0); ios::sync_with_stdio(false); }
long long arr[101];
long long GCD(long long a, long long b) {
	while (b != 0) {
		int r = a % b;
		a = b;
		b = r;
	}
	return a;
}
long long result(int n) {
	long long result = 0;
	for (int i = 0; i < n-1; i++) {
		for(int j = i+1;j<n;j++){
			//cout << GCD(arr[i], arr[j])<<"   ";
			result += GCD(arr[i], arr[j]);
		}
	}
	return result;
}

int main() {
	init();
	int t; 
	cin >> t;
	while (t--) {
		int n; 
		cin >> n;
		for (int i = 0; i < n; i++) cin >> arr[i];
		cout << result(n)<<'\n';
	}
}