#include <iostream>
#include <queue>
#include <cstring>
using namespace std;

// 매장된 오일 지역의 갯수를 찾아야 함
// *는 비매립 @는 오일 지역
char pan[101][101] = {};
bool ok[101][101] = {};

int dx[] = {0,0,-1,1,1,-1,1,-1};
int dy[] = {-1,1,0,0,1,1,-1,-1};

void go(int x, int y, int a, int b){
    queue <pair<int,int>> q; 
    q.push({x,y});
    ok[x][y] = true;

    while(!q.empty()){
        x = q.front().first, y = q.front().second;
        q.pop();
        for(int i = 0; i<8; i++){
            int nx = x+dx[i], ny = y+dy[i];
            if(nx>=0 && nx <a && ny >=0 &&ny <b && !ok[nx][ny]){
                if(pan[nx][ny] == '@'){
                    ok[nx][ny] = true;
                    q.push({nx,ny});
                }
            }
        }
    }   
}

int main(){
    while(true){
        int a,b; cin >> a >> b;
        if(a==0&&b==0) break;

        memset(pan, 0, sizeof(pan)); // 메모리 초기화
        memset(ok,0,sizeof(ok));

        for(int i = 0; i<a; i++) {
            char tmp[101]; cin >> tmp;
            for(int j = 0; j<b; j++) pan[i][j] = tmp[j];
        }
        int result = 0;
        for(int i = 0; i< a; i++){
            for(int j=0; j<b;j++){
                if(!ok[i][j] && pan[i][j]=='@') {
                    go(i, j, a,b);
                    result++;
                }
            }
        }
        cout << result <<'\n';

    }
}