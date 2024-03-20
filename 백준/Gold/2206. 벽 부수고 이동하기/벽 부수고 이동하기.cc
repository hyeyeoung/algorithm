#include <iostream>
#include <queue>
#include <algorithm>
#include <tuple>
using namespace std;

int a[1001][1001] = {}; 
int d[1001][1001][2] = {}; // 벽을 뚫는지 여부까지 확인하는 배열
int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};
int n, m;

void go(){
    queue <tuple<int,int,int>> q;
    q.push(make_tuple(0,0,0));
    d[0][0][0] = 1; // 횟수 세기 시작

    while(!q.empty()){
        int x,y,z;
        tie(x,y,z) = q.front(); 
        q.pop();
        for(int i = 0; i<4; i++){
            int nx = x+dx[i], ny = y+dy[i];
            if(nx < 0 || nx >= n || ny <0 || ny >=m) continue;
            if(a[nx][ny] == 0 && d[nx][ny][z] == 0){
                d[nx][ny][z] = d[x][y][z]+1;
                q.push(make_tuple(nx,ny,z));
            }
            if(z==0 && a[nx][ny]==1 && d[nx][ny][z+1] == 0){
                d[nx][ny][z+1] = d[x][y][z] + 1;
                q.push(make_tuple(nx,ny,z+1));
            }
        }
    }
}

int main(){
    cin >> n >> m;
    for(int i = 0; i<n; i++){
        char ar[10011]; cin >> ar;
        for(int j = 0;j<m;j++){
            a[i][j] = ar[j] == '1' ? 1 : 0;
        }
    }
    go();
    if(d[n-1][m-1][0] != 0 && d[n-1][m-1][1] != 0){
        cout << min(d[n-1][m-1][0], d[n-1][m-1][1]);
    }
    else if(d[n-1][m-1][0] != 0 && d[n-1][m-1][1] == 0){
        cout << d[n-1][m-1][0];
    }
    else if(d[n-1][m-1][0] == 0 && d[n-1][m-1][1] != 0) { cout << d[n-1][m-1][1]; }
    else cout << -1;
}