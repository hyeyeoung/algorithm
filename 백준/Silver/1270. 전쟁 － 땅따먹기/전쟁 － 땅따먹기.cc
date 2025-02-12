#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
	cin.tie(0); cout.tie(0); ios::sync_with_stdio(false);
	int n; 
	cin >> n;

	while (n--)
	{
		int x;
		cin >> x;
		unordered_map<long long, int> arr;
		pair<long long, int> max = {-1, -1}; // 가장 큰 수
		for (int i = 0; i < x; i++)
		{
			long long tmp;
			cin >> tmp;

			if (arr.find(tmp) != arr.end()) {
				arr[tmp]++;
			}// 값이 존재할 때
			else {
				arr[tmp] = 1;
			}// 존재하지 않을 때

			if (max.second < arr[tmp])
			{
				max.first = tmp;
				max.second = arr[tmp];
			}
		}
		// 병사가 절반을 초과하는지 검사
		int flag = (x / 2) + 1;

		if (max.second >= flag)
			cout << max.first << '\n';
		else
			cout << "SYJKGW\n";
	}
}