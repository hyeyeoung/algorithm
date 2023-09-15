#include <iostream>
using namespace std;
void init() { cin.tie(0); cout.tie(0); ios::sync_with_stdio(NULL); }
struct sc {
	int score;
	int max;
};
sc arr[302];
sc stair(int n) {
	arr[0].max = arr[0].score;
	arr[1].max = arr[1].score + arr[0].max;
	arr[2].max = arr[1].score > arr[0].score ? arr[2].score + arr[1].score : arr[2].score +  arr[0].score;
	for (int i = 3; i < n; i++) {
		arr[i].max = arr[i - 2].max > arr[i - 1].score + arr[i - 3].max ? arr[i].score + arr[i - 2].max : arr[i].score + arr[i - 1].score + arr[i - 3].max;
	}
	return arr[n - 1];
}
int main() {
	init();
	int n;
	cin >> n;
	for(int i = 0;i<n;i++){
		cin >> arr[i].score;
	}
	sc result = stair(n);
	cout << result.max;
}