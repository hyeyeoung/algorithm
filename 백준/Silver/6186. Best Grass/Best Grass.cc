#include <iostream>
#include <queue>
#include <cstring>
using namespace std;
char arr[101][101] = {};
bool ok[101][101] = {};
int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};
int n, m;

void bfs(int x, int y){
    ok[x][y] = true;
    queue<pair<int,int>> q;
    q.push({x,y});
    while(!q.empty()){
        x = q.front().first; y = q.front().second;
        q.pop();
        
        for(int i = 0; i<4; i++){
            int nx = x+dx[i]; int ny = y+dy[i];
            if(nx >= 0 && nx < n && ny >= 0 && ny < m && arr[nx][ny] == '#' && ok[nx][ny] == false){
                q.push({nx,ny});
                ok[nx][ny] = true;
            }
        }
    }
}

int main(){
    cin >> n >> m;
    memset(ok, false, sizeof(ok));
    for(int i = 0; i<n; i++){
        char tmp[101];
        cin >> tmp;
        for(int j = 0; j<m; j++){
            arr[i][j] = tmp[j];
        }
    }
    int cnt = 0;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            if(arr[i][j] == '#' && ok[i][j] == false){
                cnt++;
                bfs(i,j);
            }
        }
    }
    cout << cnt;
}