#include <bits/stdc++.h>
using namespace std;
int arr[1000][5] = {};
int main()
{
    cin.tie(0); cout.tie(0); ios::sync_with_stdio(false);
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < 5; j++)
            cin >> arr[i][j];
    }
    vector <int> x(n);

    for(int i = 0; i < n - 1; i++)
    {
        int cnt = 0;
        for(int j = 0; j < n; j++)
        {
            if(i == j) continue;
            for(int k = 0; k < 5; k++)
            {
                if(arr[i][k] == arr[j][k])
                {
                    x[i]++;
                    break;
                }
            }
        }
    }
    int pickn = 0, pickd = 0;

    for(int i = 0; i < n; i++)
    {
        if(x[i] > pickn)
        {
            pickd = i;
            pickn = x[i];
        }
    }
    cout << pickd + 1;
}
