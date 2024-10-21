#include <iostream>
#include <queue>
#include <cstring>
using namespace std;
int n, m;
int arr[301][301][2] = {};
bool visited[301][301] = {};
bool checkICE = true;
int dx[4] = {0, 0, -1, 1};
int dy[4] = {1, -1, 0, 0};
// 1. 빙산이 두 쪽이 났는지 아닌지 판단한다,
// 2. 두 쪽이 안 났다면 위아래 계산
bool s2573_1(){
    memset(visited, false, sizeof(visited));
    int cnt = 0;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            if(arr[i][j][0] != 0 && !visited[i][j]){
                cnt++;
                if(cnt > 1) return false;
                queue <pair<int, int>> q;
                q.push({i, j});
                visited[i][j] = true;
                while(!q.empty()){
                    int x = q.front().first;
                    int y = q.front().second;
                    q.pop();
                    int cntIce = 0;
                    for(int k = 0; k < 4; k++){
                        int nx = x + dx[k]; 
                        int ny = y + dy[k];
                        if(nx >= 0 && nx < n && ny >= 0 && ny < m){
                            if(!visited[nx][ny] && arr[nx][ny][0] != 0){
                            q.push({nx, ny});
                            visited[nx][ny] = true;
                            }
                            if(arr[nx][ny][0] == 0) cntIce++;
                        }
                    }
                    arr[x][y][1] = cntIce;
                }
            } // bfs 실행
        }
    }
    int countICE = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            arr[i][j][0] -= arr[i][j][1];
            if(arr[i][j][0] < 0) arr[i][j][0] = 0;
            if(arr[i][j][0] == 0) countICE ++;
            arr[i][j][1] = 0;
        }
    }
    if(countICE == n*m) checkICE = false;
    return true;
} // 1. 빙산 개수 확인
int main(){
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++) {
            cin >> arr[i][j][0];
        }
    }
    int res = 0;
    while(1){
        bool flag = s2573_1();
        if(!flag || !checkICE) break;
        res++;
    }
    if(checkICE) cout << res;
    else cout << 0;
}