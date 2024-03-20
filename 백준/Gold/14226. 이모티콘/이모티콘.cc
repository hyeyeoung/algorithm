#include <iostream>
#include <cstring>
#include <queue>
using namespace std;
int s;
int arr[1005][1005]; // 거리 배열

void emoti(){
    queue <pair<int, int>> q; // s와 c를 저장(c == 클립보드 갯수)
    q.push({1,0});
    memset(arr, -1, sizeof(arr));
    arr[1][0] = 0;
    while(!q.empty()){
        int a = q.front().first , b = q.front().second;
        q.pop();
        if(arr[a][a] == -1){
            q.push({a,a});
            arr[a][a] = arr[a][b]+1;
        }
        if(a+b <= s && arr[a+b][b] == -1){
            q.push({a+b, b});
            arr[a+b][b] = arr[a][b] +1;
        }
        if( a-1>=0 && arr[a-1][b] == -1){
            q.push({a-1, b});
            arr[a-1][b] = arr[a][b] + 1;
        }
    }
}

int main(){
    cin >> s;
    emoti();
    int re = -1;
    for(int i = 0; i <= s; i++){
        if(arr[s][i] != -1){
            if(re == -1 || re > arr[s][i]) re = arr[s][i];
        }
    }
    cout << re;
    return 0;
}