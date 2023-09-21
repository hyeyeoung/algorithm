#include <iostream>
using namespace std;
void init() { cin.tie(0); cout.tie(0); ios::sync_with_stdio(false); }
struct Node {
	int data;
	int max;
};

Node arr[100001];

int dp(int n) {
	int max;
	arr[0].max = max = arr[0].data;
	for (int i = 1; i < n; i++) {
		arr[i].max = arr[i - 1].max + arr[i].data > arr[i].data ? arr[i - 1].max + arr[i].data : arr[i].data;
		max = max > arr[i].max ? max : arr[i].max;
	}
	return max;
}
int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) { cin >> arr[i].data; }
	cout << dp(n);
}