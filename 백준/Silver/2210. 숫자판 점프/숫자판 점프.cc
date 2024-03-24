#include <iostream>
#include <set>
using namespace std;
int arr[10][10] = {};
int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};
set <int> re;
void go(int x, int y, int sum, int depth){ // 위치, 깊이, 깊이는 6이상이면 삭제한다.
    if(depth >= 6) {
        re.insert(sum);
        return;
    }
    for(int i = 0; i<4; i++){
        int nx = x + dx[i], ny = y+dy[i];
        if(nx >= 0 && nx <5 && ny>=0 && ny < 5){
            int tmp = sum * 10 + arr[nx][ny];
            go(nx,ny, tmp ,depth+1);
        }
    }
}

int main(){
    for(int i = 0; i<5 ;i++){
        for(int j = 0; j<5; j++) cin >> arr[i][j];
    }
    for(int i = 0; i<5;i++){
        for(int j = 0; j<5; j++) go(i,j, 0, 0);
    }
    // re.erase(unique(re.begin(), re.end()), re.end());
    cout << re.size();
}