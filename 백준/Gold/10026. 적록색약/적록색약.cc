#include <iostream>
#include <queue>
using namespace std;

int n;
char arr[101][101];
bool ok1[101][101];
bool ok2[101][101];

int dx[] = {1,-1,0,0};
int dy[] = {0,0,1,-1};

void go1(int x, int y, char a){
    queue <pair<int,int>> q;
    q.push({x,y});
    ok1[x][y] = true;
    while(!q.empty()){
        x = q.front().first, y = q.front().second;
        q.pop();
        for(int i = 0; i<4; i++){
            int nx = x+dx[i], ny = y + dy[i];
            if(nx >= 0 && nx < n && ny >= 0 && ny < n && !ok1[nx][ny]){
                if(arr[nx][ny] == a){
                    q.push({nx,ny});
                    ok1[nx][ny] = true;
                }
            }
        }
    }
}
void go2(int x, int y, char a){
    queue <pair<int,int>> q;
    q.push({x,y});
    ok2[x][y] = true;
    while(!q.empty()){
        x = q.front().first, y = q.front().second;
        q.pop();
        for(int i = 0; i<4; i++){
            int nx = x+dx[i], ny = y + dy[i];
            if(nx >= 0 && nx < n && ny >= 0 && ny < n && !ok2[nx][ny]){
                if(a == 'R' || a == 'G'){
                    if(arr[nx][ny] == 'R' || arr[nx][ny] == 'G'){
                        ok2[nx][ny] = true;
                        q.push({nx,ny});
                    }
                }
                else if(a=='B' && arr[nx][ny] == 'B') {
                    ok2[nx][ny] = true;
                    q.push({nx,ny});
                }
            }
        }
    }
}

int main(){
    cin >> n;
    
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++) cin >> arr[i][j];
    }

    int rb_watch = 0, rgb_watch = 0;

    for(int i = 0; i<n; i++){
        for(int j =0 ; j <n; j++){
            if(!ok1[i][j]){
                rgb_watch ++;
                go1(i,j, arr[i][j]);
            }
            if(!ok2[i][j]){
                rb_watch ++;
                go2(i,j, arr[i][j]);
            }
        }
    }
    cout << rgb_watch <<" "<< rb_watch;
}