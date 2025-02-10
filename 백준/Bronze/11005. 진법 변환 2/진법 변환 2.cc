#include <iostream>
#include <stack>
using namespace std;

int main()
{
	int base10, baseB; // 10진수는 10억보다 작은 수
	cin >> base10 >> baseB; // 진법 입력

	stack<char> x;
	while (base10 != 0)
	{
		int tmp = base10 % baseB;
		if (tmp > 9)
		{
			x.push((char)(tmp + 55));
		}
		else
		{
			x.push((char)(tmp + 48));
		}
		base10 = base10 / baseB;
	}

	while (!x.empty())
	{
		cout << x.top();
		x.pop();
	}
}