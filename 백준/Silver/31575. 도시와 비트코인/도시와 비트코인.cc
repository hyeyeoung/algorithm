#include <iostream>
#include <queue>
using namespace std;

int arr[301][301] = {};
bool a[301][301] = {};
int dx[3] = {0,1};
int dy[3] = {1,0};

queue <pair<int,int>>  q;
int n, m;
void coin(int x, int y){
    q.push({x,y});
    a[x][y] = true;

    while(!q.empty()){
        x = q.front().first, y = q.front().second; q.pop();
        for(int i = 0; i<2; i++){
            int nx = x+dx[i]; int ny =y+ dy[i];
            if((nx >= 0 && nx < m) && (ny>=0 && ny < n) && !a[nx][ny] && arr[nx][ny] == 1){
                a[nx][ny] = true;
                q.push({nx,ny});
            }
        }
    }
}

int main(){
    cin >> n>> m;
    for(int i =0 ; i<m; i++){
        for(int j = 0; j<n; j++) cin >> arr[i][j];
    }
    coin(0,0);
    if(a[m-1][n-1]) cout <<"Yes";
    else cout << "No";
}