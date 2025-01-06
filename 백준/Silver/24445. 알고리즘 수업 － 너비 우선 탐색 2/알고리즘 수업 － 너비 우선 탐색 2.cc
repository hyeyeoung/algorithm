#include <bits/stdc++.h>
using namespace std;
int n, m, r;

void sol(vector<int> &Visited, vector <vector<int>> &arr, int r)
{
    int x = 2;
    queue <int> q;
    q.push(r); // 시작점 
    Visited[r] = 1;

    while(!q.empty())
    {
        r = q.front();
        q.pop();
        sort(arr[r].begin(), arr[r].end());
        for(int i = arr[r].size() - 1; i >= 0; i--)
        {
            if(!Visited[arr[r][i]])
            {
                Visited[arr[r][i]] = x;
                x++;
                q.push(arr[r][i]);
            }
        }
    }
}
int main()
{
    cin >> n >> m >> r;
    
    vector <int> Visited(n+1);
    vector <vector<int>> arr(n+1);
    for(int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        arr[u].push_back(v);
        arr[v].push_back(u);
    }

    sol(Visited, arr, r);

    for(int i = 1; i <= n; i++)
    {
        cout << Visited[i] << "\n";
    }
}