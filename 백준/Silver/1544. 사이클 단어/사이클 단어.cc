#include <iostream>
#include <cstring>
#include <unordered_map>
using namespace std;

int main()
{
	int n; 
	cin >> n;

	int res = 0; // 서로 다른 단어 개수
	unordered_map<string, int> m;
	for (int t = 0; t < n; t++)
	{
		// 처음 들어온 단어를 그 수에 맞게 돌려봄
		string str;
		cin >> str;
		bool flag = false; // 단어가 map에 존재하는지 확인
		for (int i = 0; i < str.size(); i++)
		{
			int j = i, l = 0;
			string nstr = "";
			while (l < str.size())
			{
				nstr += str[j];
				j = (j + 1) % str.size();
				l++;
			}
			// 동일 단어가 있다는 의미
			if (m.find(nstr) != m.end())
			{
				flag = true;
				break; // 더 이상 반복은 의미 없음
			}
		}
		if (!flag)
		{
			m.insert({ str, 1 });
			res++;
		}
	}
	cout << res;
}