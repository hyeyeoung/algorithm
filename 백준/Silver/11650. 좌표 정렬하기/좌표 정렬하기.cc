#include <iostream>
#include <vector>
#include <algorithm>  // Include this header for the swap function

using namespace std;

void init() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(false);
}

int main() {
	init();
	int n;
	cin >> n;
	vector<pair<int, int>> arr(n);  // Initialize the vector with size n

	for (int i = 0; i < n; i++) {
		cin >> arr[i].first >> arr[i].second;
	}

	// Sorting the vector of pairs based on the first element of each pair
	sort(arr.begin(), arr.end());

	for (int i = 0; i < n; i++) {
		cout << arr[i].first << " " << arr[i].second << "\n";
	}

	return 0;
}