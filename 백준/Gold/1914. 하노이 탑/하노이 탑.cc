#include <iostream>
#include <string>
#include <vector>
using namespace std;
vector <pair<int, int>> arr;
void hanoi(int from, int by, int to, int n)
{
    if (n == 1)
    {
        arr.push_back({ from, to });
        return;
    }
    hanoi(from, to, by, n - 1);
    arr.push_back({ from, to });
    hanoi(by, from, to, n - 1);
}
string large_(int n)
{
    bool flag = false;
    string x = "1";

    for (int i = 1; i <= n; i++)
    {
        for (int j = x.size() - 1; j >= 0; j--)
        {
            bool k = false;
            if (flag)
            {
                k = true;
                flag = false;
            }
            if (x[j] - '0' >= 5)
            {
                flag = true; // 1
                x[j] = (((x[j] - '0') * 2) - 10) + '0';
            }
            else
            {
                x[j] = ((x[j] - '0') * 2) + '0';
            }
            if (k)
            {
                x[j] = ((x[j] - '0') + 1) + '0';
            }
        }
        if (flag)
        {
            x.insert(0, "1");
            flag = false;
        }
    }
    x[x.size() - 1] = ((x[x.size() - 1] - '0') - 1) + '0';
    // 126,7650,6002,2822,9401,4967,0320,5376
    return x;
}
int main()
{
    int n;
    cin >> n;
    if (n > 20)
    {
        cout << large_(n);
        return 0;
    }
    hanoi(1, 2, 3, n);
    cout << arr.size() << '\n';
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i].first << " " << arr[i].second << '\n';
    }
}