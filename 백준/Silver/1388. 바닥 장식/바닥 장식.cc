#include <iostream>
#include <vector>
using namespace std;
bool check[50][50] = {};
char arr[50][50] = {};
int Count = 0;
int n, m; 

void go(int x, int y){ // index는 현재 위치 start는 머ㅣㅈ
    check[x][y] = true;
    if(arr[x][y] == '-'){
        if(y + 1 < m && !check[x][y+1] && arr[x][y+1] == '-') go(x, y+1);
        if(y - 1 >= 0 && !check[x][y-1]&& arr[x][y-1] == '-') go(x, y-1);
    }
    if(arr[x][y] == '|'){
        if(x + 1 < n && !check[x+1][y] && arr[x+1][y] == '|') go(x+1, y);
        if(x-1 >= 0 && !check[x-1][y] && arr[x-1][y] == '|') go(x-1, y);
    }
}


int main(){
    cin.tie(0); cout.tie(0); 
    ios::sync_with_stdio(false);
    cin >> n >> m;
    for(int i = 0; i<n; i++){
        char tmp[52] = {}; cin >> tmp;
        for(int j = 0; j < m; j++){
            arr[i][j] = tmp[j];
        }
    }
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++) {
            if(!check[i][j]){
                go(i, j);
                Count++;
            }
        }
    }
    cout << Count;
}