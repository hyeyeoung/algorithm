#include <iostream>
#include <queue>
using namespace std;
int arr[101] = {0};
bool Visit[101] = {0};

void game(int x, int c){
    // 현재 위치와 count변수 
    queue <pair<int, int>> q;
    q.push({x, c});

    while(!q.empty()){
        x = q.front().first, c = q.front().second;
        q.pop();
        // 1~6(주사위)반복
        for(int i = 1; i<=6; i++){
            int nx = x + i; // 새로운 좌표
            if(nx == 100){
                cout << c+1;
                return;
            }
            else if(nx < 100){
                while(arr[nx] != 0){ nx = arr[nx];}
                if(!Visit[nx]){
                    q.push({nx, c+1});
                    Visit[nx] = true;
                }
            }
        }
    }
}
int main(){
    int n, m; // 사다리 수, 뱀의 수
    int start, end;
    cin >> n >> m;
    for(int i = 0; i<n; i++){
        cin >> start >> end;
        arr[start] = end;
    }
    for(int i = 0; i<m; i++){
        cin >> start >> end;
        arr[start] = end;
    }
    game(1, 0);
}