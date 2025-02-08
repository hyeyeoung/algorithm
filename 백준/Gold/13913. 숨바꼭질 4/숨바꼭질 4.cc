#include <iostream>
#include <stack>
#include <queue>
using namespace std;

int n, k; // 언니 위치, 동생 위치
int visited[100001] = {}; // 방문 여부 + 방문 차례 저장
int Log[100001] = {};
void bfs()
{
    queue <int> q;
    q.push(n); // 첫 번째 시작 위치 input

    while (!q.empty())
    {
        int nn = q.front();
        q.pop(); // 큐 제거

        if (nn == k)
            break;
        if (0 <= nn - 1 && nn - 1 <= 100000 && !visited[nn - 1])
        {
            q.push(nn - 1);
            visited[nn - 1] = visited[nn] + 1;
            Log[nn - 1] = nn; // 현재 위치 삽입
        }
        if (0 <= nn + 1 && nn + 1 <= 100000 && !visited[nn + 1])
        {
            q.push(nn + 1);
            visited[nn + 1] = visited[nn] + 1;
            Log[nn + 1] = nn; // 현재 위치 삽입
        }
        if (0 <= nn * 2 && nn * 2 <= 100000 && !visited[nn * 2])
        {
            q.push(nn * 2);
            visited[nn * 2] = visited[nn] + 1;
            Log[nn * 2] = nn; // 현재 위치 삽입
        }
    }
    cout << visited[k] << '\n';
    if (visited[k] == 0)
    {
        cout << n;
        return;
    }
    stack<int> res;
    res.push(k);
    if (visited[k])
    {
        int cur = Log[k];
        while (cur != n)
        {
            res.push(cur);
            cur = Log[cur];
        }
        res.push(n);

    }
    while (!res.empty())
    {
        cout << res.top() << " ";
        res.pop();
    }
}
int main()
{
    cin >> n >> k;
    bfs();
}