#include <iostream>
#include <queue>
#include <cstring>
using namespace std;
int n, m;
int arr[101][101] = {};
int a[101][101] = {};
int dx[5] = {0, 0, 1, -1};
int dy[5] = {1, -1,0,0};

void bfs(int x, int y){ // bfs는 재귀 풀이가 아니다.
    a[0][0] = 1;
    queue <pair<int,int>> q; q.push({x, y}); // x y값 저장
    while(!q.empty()){
        // 연결된 부분을 찾음
        x = q.front().first, y = q.front().second; q.pop(); // 현재 인덱스 삭제
        // 가로 세로 비교
        for(int i = 0; i<4; i++){
            int xt = x + dx[i], yt = y+dy[i]; // 상하좌우
            if(xt >= 0 && xt <n && yt >= 0 && yt < m){ // 같다고 냅다 큐에 넣어버림..
                if(arr[xt][yt]==1 && a[xt][yt] == 0){ // 다음 노드가 벽인지 길인지 확인
                    a[xt][yt] = a[x][y] + 1;
                    q.push({xt,yt});
                }
            }
        }
        if(x==n-1 && y == m-1) break;
    }
    cout << a[n-1][m-1];
}


int main(){
    cin >> n >> m;
    for(int i = 0; i< n; i++){
        char tmp[101]; cin >> tmp;
        for(int j = 0; j<m; j++){
            if(tmp[j] == '1') arr[i][j] = 1;
            else arr[i][j] = 0;
        }
    }
    bfs(0,0);
}