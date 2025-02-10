#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	// 팀 수는 n 학생 수는 2n
	int n;
	cin >> n;
	vector<int> arr(2 * n);
	for (int i = 0; i < 2 * n; i++)
		cin >> arr[i];
	// 정렬
	sort(arr.begin(), arr.end()); // 값은 모두 다름
	int min = 2000000000;

	int i = 0, j = (2 * n) - 1;

	while (i < j)
	{
		if ((arr[i] + arr[j]) < min)
			min = (arr[i] + arr[j]);
		i++; 
		j--;
	}
	cout << min;
}