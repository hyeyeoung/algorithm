#include <iostream>
using namespace std;
//////////////
int dx[] = {1,-1,0,0};
int dy[] = {0,0,1,-1};
/////////////
char arr[101][101] = {};
bool ok1[101][101] = {};
bool ok2[101][101] = {};
int n;

void go1(int x, int y, char a){
    ok1[x][y] = true;
    for(int i = 0; i<4; i++){
        int nx = x + dx[i], ny = y+dy[i];
        if(nx >= 0 && nx < n && ny>= 0 && ny<n && !ok1[nx][ny]){
            if(arr[nx][ny] ==  a){
                go1 (nx,ny, a);
            }
        }
    }
}

void go2(int x, int y, char a){
    ok2[x][y] = true;
    for(int i = 0; i<4; i++){
        int nx = x + dx[i], ny = y+dy[i];
        if(nx >= 0 && nx < n && ny>= 0 && ny<n && !ok2[nx][ny]){
            if(a == 'B' && arr[nx][ny] ==  a){
                go2(nx,ny, a);
            }
            else if(a=='R'||a=='G'){
                if(arr[nx][ny]=='R' || arr[nx][ny]=='G')   go2(nx,ny, a);
            }
        }
    }
}

int main(){
    cin >> n;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++) cin >> arr[i][j];
    }

    int rgb_watch = 0, rb_watch = 0;

    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            if(!ok1[i][j]){
                rgb_watch ++;
                go1(i,j,arr[i][j]);
            }
            if(!ok2[i][j]){
                rb_watch++;
                go2(i,j,arr[i][j]);
            }
        }
    }
    cout << rgb_watch << " " << rb_watch;

}