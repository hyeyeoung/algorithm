#include <iostream>
#include <queue>
using namespace std;

int box[1001][1001] = {}; // 토마토 위치 파악하는 배열
int a[1001][1001] = {}; // 거리
int b[1001][1001] = {}; // 방문 여부
int n, m;
int dx[4] = {0, 0, 1, -1};
int dy[4] = {1,-1, 0, 0};
int kk = 0;
queue <pair<int,int>> q;

void tomato(){ // 시작 위치
    // 현재 1인 친구들이 다 들어와 있음
    while(!q.empty()){ // 첫번째 1에서 시작 
        int x = q.front().first, y = q.front().second; 
        q.pop(); 
        for(int i = 0; i<4; i++){
            int nx = x+dx[i], ny = y + dy[i]; // 새로운 위치 파악
            if(nx >= 0 && nx <m && ny >= 0 && ny < n && box[nx][ny] == 0 && b[nx][ny] == 0){
                q.push({nx,ny});
                b[nx][ny] = box[nx][ny] = 1;
                a[nx][ny] = a[x][y] + 1;
                kk = a[nx][ny];
            }
        }
    }
}


int main(){
    cin >> n >> m;
    for(int i = 0; i<m; i++){
        for(int j = 0; j<n; j++) cin >> box[i][j];
    }
    for(int i = 0; i<m; i++){
        for(int j = 0; j<n; j++){
            if(box[i][j] == 1){
                q.push({i,j});
                b[i][j] = 1;
            }
        }
    }
    tomato();
    bool ok = true;
    for(int i = 0; i<m; i++){
        for(int j = 0; j<n; j++){
            if(box[i][j] == 0) {
                ok = false;
                break;
            }
        }
    }
    if(ok) cout << kk;
    else cout << -1;
}