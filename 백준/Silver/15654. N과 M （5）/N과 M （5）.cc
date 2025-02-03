#include <iostream>
#include <algorithm>
using namespace std;
// 재귀 풀이 : 시간이 많이 걸림.
bool c[10];
int arr[10]; 
int a[10];
int n, m;
void go(int index)
{
    if(index == m+1)
    {
        for(int i = 1; i <= m; i++)
        {
            cout << a[i] << " ";
        }
        cout << '\n';
        return;
    }
    for(int i = 1; i <= n; i++)
    {
        if(c[i]) continue;
        c[i] = true;
        a[index] = arr[i];
        go(index+1);
        c[i] = false;
    }
}
int main()
{
    cin >> n >> m;
    for(int i = 1; i <= n; i++) cin >> arr[i];
    sort(arr, arr+n+1);

    go(1);
}