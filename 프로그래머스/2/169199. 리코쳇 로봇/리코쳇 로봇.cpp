#include <bits/stdc++.h>
using namespace std;

char arr[101][101] = {};
int res[101][101] = {};
int dx[4] = {-1, 0, 1, 0}, dy[4] = {0, 1, 0, -1};
int h, w;

int bfs(int x, int y)
{
    memset(res, -1, sizeof(res));
    queue<pair <int, int>> q;
    q.push({x, y});
    res[x][y] = 0; // 시작점
    
    while(!q.empty()){
        int xx = q.front().first, yy = q.front().second;
        q.pop();
        
        for(int i = 0; i < 4; i++){
            int nx = xx, ny = yy;
            while(1){
                if(nx < 0 || nx >= h || ny < 0 || ny >= w) break; // 벽
                if(arr[nx][ny] == 'D') break;
                nx += dx[i];
                ny += dy[i]; // 쭉 더하기
            }
            nx -= dx[i];
            ny -= dy[i];
            if(arr[nx][ny] == 'G') return (res[xx][yy] + 1);
            if(res[nx][ny] >= 0) continue;
            res[nx][ny] = res[xx][yy] + 1;
            q.push({nx, ny});
        }
    }
    return -1;
}
int solution(vector<string> board) {
    int answer = 0;
    int startx = 0, starty = 0;
    h = board.size(), w = board[0].size();
    for(int i = 0; i < board.size(); i++){
        for(int j = 0; j < board[0].size(); j++) {
            arr[i][j] = board[i][j];
            if(arr[i][j] == 'R') startx = i, starty = j;
        }
    }
    return bfs(startx, starty);
}