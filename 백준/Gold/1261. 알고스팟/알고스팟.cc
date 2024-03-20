#include <iostream>
#include <deque>
using namespace std;
int a[101][101] = {};
int dis[101][101] = {};
bool ok[101][101] = {};
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};
int n,m;

void crush(){
    deque <pair<int,int>> q; 
    q.push_back({1,1});
    ok[1][1] = true;
    while(!q.empty()){
        int x = q.front().first, y = q.front().second;
        q.pop_front();
        // 벽을 안 부시는 경우
        for(int i = 0; i<4; i++){
            if(x+dx[i] > 0 && y + dy[i] > 0 && x + dx[i]<= m && y+dy[i] <=n){
                if(!ok[x+dx[i]][y+dy[i]] && a[x+dx[i]][y+dy[i]] == 0){
                    q.push_front({x+dx[i], y+dy[i]});
                    ok[x+dx[i]][y+dy[i]] = true;
                    dis[x+dx[i]][y+dy[i]] = dis[x][y];
                }
                if(!ok[x+dx[i]][y+dy[i]] && a[x+dx[i]][y+dy[i]] == 1){
                    q.push_back({x+dx[i], y+dy[i]});
                    ok[x+dx[i]][y+dy[i]] = true;
                    dis[x+dx[i]][y+dy[i]] = dis[x][y] + 1;
                }
            }
        }
    }
}

int main(){
    cin >> n >> m;
    for(int i = 1; i<=m; i++){
        char ar[110] = {}; cin >> ar;
        for(int j = 0; j<n; j++){
            if(ar[j] == '1') a[i][j+1] = 1;
            else a[i][j+1] = 0;
        }
    }
    crush();
    cout << dis[m][n];
}