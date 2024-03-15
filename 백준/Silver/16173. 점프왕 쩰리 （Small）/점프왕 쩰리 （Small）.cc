#include <iostream>
using namespace std;
int arr[5][5] = {};
bool xy[5][5] = {};
bool ok = false;
int n;

void Jelly(int x, int y){
    xy[x][y] = true;
    if(arr[x][y] == -1) ok = true;
    if(x+arr[x][y] < n && !xy[x+arr[x][y]][y]) Jelly(x+arr[x][y],y);
    if(y+arr[x][y] < n && !xy[x][y+arr[x][y]]) Jelly (x, y+arr[x][y]);
}

int main(){
    cin >> n;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++) cin >> arr[i][j];
    }
    Jelly(0,0);
    if(ok) cout << "HaruHaru";
    else cout << "Hing";
}