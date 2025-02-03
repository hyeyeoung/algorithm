#include <iostream>
using namespace std;
// 재귀 풀이 : 시간이 많이 걸림.
bool c[10];
int a[10]; 
int n, m;
void go(int index)
{
    if(index == m)
    {
        for(int i = 0; i < m; i++)
        {
            cout << a[i] << " ";
        }
        cout << '\n';
        return;
    }
    for(int i = 1; i <= n; i++)
    {
        // if(c[i])
        //     continue;
        c[i] = true;
        a[index] = i;
        go(index+1);
        c[i] = false; 
    }
}
int main()
{
    cin >> n >> m;
    go(0);
}