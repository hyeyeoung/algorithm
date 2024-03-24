#include <iostream>
#include <queue>
using namespace std;

int arr[1001][1001];
pair<int, bool> ok[1001][1001];
int n,m;
int dx[] = {1,-1,0,0};
int dy[] = {0,0,1,-1};
pair <int,int> goal;

void res(int x, int y){
    queue <pair<int,int>> q;
    q.push({x,y});
    ok[x][y].second = true;
    
    while(!q.empty()){
        x = q.front().first, y = q.front().second;
        q.pop();
        for(int i = 0; i<4; i++){
            int nx = x+dx[i], ny = y +dy[i];
            if(nx >= 0 && nx <n && ny>=0 && ny < m && !ok[nx][ny].second && arr[nx][ny] == 1 ){
                q.push({nx,ny});
                ok[nx][ny].first = ok[x][y].first + 1;
                ok[nx][ny].second = true;
            }
        }
    }
}

int main(){
    cin >> n >> m;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            cin >> arr[i][j];
            if(arr[i][j] == 2) {
                goal.first = i;
                goal.second = j;
            }
        }
    }
    res(goal.first, goal.second);
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            if(ok[i][j].second == 0 && arr[i][j] != 0){
                cout << -1 <<" ";
            }
            else cout << ok[i][j].first<<" ";
        }
        cout << "\n";
    }
}