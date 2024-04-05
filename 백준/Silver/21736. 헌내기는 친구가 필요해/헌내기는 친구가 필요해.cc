#include <iostream>
#include <queue>
using namespace std;

int arr[601][601] = {};
bool ok[601][601] = {};
int dx[] = {0,0,1,-1};
int dy[] = {1,-1,0,0};
int n, m; 
int cnt = 0;
void bfs(int x, int y){
    queue <pair<int, int>> q;
    ok[x][y] = true;
    q.push({x,y});
    while(!q.empty()){
        x = q.front().first, y = q.front().second;
        q.pop();
        for(int i = 0; i<4; i++){
            int nx = x+dx[i], ny = y+dy[i];
            if(nx>=0 && nx < n && ny>=0 && ny < m && !ok[nx][ny]){
                if(arr[nx][ny] >= 0){
                    q.push({nx,ny});
                    ok[nx][ny] = true;
                    if(arr[nx][ny] == 1) cnt++;
                }
            }
        }
    }
}

int main(){
    cin >> n >> m;
    int x = 0, y = 0;
    for(int i = 0; i<n; i++){
        char tmp[601]; cin >> tmp;
        for(int j = 0; j<m;j++){
            if(tmp[j] == 'O') arr[i][j] = 0; 
            else if(tmp[j] == 'I') { 
                arr[i][j] = 0;
                x = i, y = j;
            }
            else if(tmp[j] == 'P') arr[i][j] = 1;
            else arr[i][j] = -1;
        }
    }
    bfs(x,y);
    if(cnt) cout << cnt;
    else cout << "TT";
}