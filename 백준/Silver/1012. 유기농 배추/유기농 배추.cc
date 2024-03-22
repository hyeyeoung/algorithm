#include <iostream>
#include <queue>
#include <cstring>
using namespace std;
int m, n, k; // 가로, 세로, 개수
int pan[51][51] = {};
bool ok[51][51] = {};
int dx[] = {1,-1,0,0};
int dy[] = {0,0,1,-1};
queue <pair<int,int>> q;

void white_bug(int k, int p){ // 가로 세로
    q.push({k,p});
    while(!q.empty()){
        int x =  q.front().first, y = q.front().second;  // 가로 좌표, 세로좌표
        q.pop();
        for(int i = 0; i<4; i++){
            int nx = x+dx[i], ny = y+dy[i];
            if(nx >= 0 && nx < n && ny >= 0 && ny < m && !ok[nx][ny]){
                if(pan[nx][ny] == 1){
                    q.push({nx,ny});
                    ok[nx][ny] = true;
                }
            }
        }
    }
}

int main(){
    int tc; cin >> tc;

    while(tc--){
        memset(pan, 0,sizeof(pan));
        memset(ok, 0, sizeof(ok));
        q = queue <pair<int,int>> ();

        cin >> m >> n >> k;
        for(int i = 0; i<k; i++){
            int a,b; cin >> b >> a; // 가로, 세로
            pan[a][b] = 1;
        }

        int co = 0;
        for(int i = 0; i<n; i++){ // 세로 
            for(int j = 0; j<m; j++){ // 가로
                if(!ok[i][j] && pan[i][j] == 1){
                    co+=1;
                    white_bug(i,j); // 가로 세로
                }
            }
        }
        cout << co<<'\n';
    }
}