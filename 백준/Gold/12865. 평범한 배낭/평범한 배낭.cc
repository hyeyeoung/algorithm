#include <iostream>
#include <algorithm>
using namespace std;
int arr[101][100001] = {};
int w[101] = {}; // 물건의 가치 저장
int v[101] = {};
int main()
{
	int n, k;
	cin >> n >> k;

	for (int i = 1; i <= n; i++)
	{
		cin >> w[i] >> v[i]; // 무게, 가치 저장
	}
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= k; j++)
		{
			if (j - w[i] < 0) arr[i][j] = arr[i - 1][j];
			else arr[i][j] = arr[i - 1][j] > arr[i - 1][j - w[i]] + v[i] ? arr[i - 1][j] : arr[i - 1][j - w[i]] + v[i];
		}
	}
	cout << arr[n][k];
}