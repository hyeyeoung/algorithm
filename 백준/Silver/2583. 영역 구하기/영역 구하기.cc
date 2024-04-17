#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>
using namespace std;

bool arr[101][101] = {};
int m, n, k; 
int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};

int sq(int x, int y){
    int cnt = 1;
    queue <pair<int, int>> q;
    q.push({x,y});
    arr[x][y] = true;
    while(!q.empty()){
        x = q.front().first, y = q.front().second;
        q.pop();
        for(int i = 0; i<4; i++){
            int nx = x+dx[i], ny = y+dy[i];
            if(nx >= 0 && nx < n && ny >= 0 && ny < m && !arr[nx][ny]){
                cnt++;
                arr[nx][ny] = true;
                q.push({nx, ny});
            }
        }
    }
    return cnt;
}
int main(){
    cin >> m >> n >> k;
    for(int in = 0; in<k; in++){
        int x1,y1, x2,y2; // 왼쪽 아래, 오른쪽 위
        cin >> x1 >> y1 >> x2 >> y2;
        for(int i = x1; i < x2; i++){
            for(int j = y1; j<y2; j++) arr[i][j] = true;
        }
    }
    vector <int> res;
    int Cnt = 0;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            if(!arr[i][j]){
                Cnt++;
                int tmp = sq(i, j);
                res.push_back(tmp);
            }
        }
    }
    sort(res.begin(), res.end());
    cout << Cnt << '\n';
    for(int a: res) cout << a<<" ";
}