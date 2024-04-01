#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
int pan[3][100001] = {};
int arr[3][100001] = {};
int n;
int Max(int a, int b, int c) {
    if(a>=b && a>=c) return a;
    else if(b>=a && b >= c) return b;
    else return c;
}
void ans(){
    for(int i = 1; i<=n; i++){
        arr[0][i] = Max(arr[0][i-1], arr[1][i-1], arr[2][i-1]);
        arr[1][i] = max(arr[0][i-1], arr[2][i-1]) + pan[1][i];
        arr[2][i] = max(arr[0][i-1], arr[1][i-1]) + pan[2][i];
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        memset(pan,0,sizeof(pan));
        memset(arr,0,sizeof(arr)); 
        cin >> n;
        for(int i = 1; i<=2; i++) {
            for(int j = 1; j <=n ;j++) cin >> pan[i][j];
        }
        ans();
        cout << Max(arr[0][n], arr[1][n], arr[2][n]) << '\n'; 
    }
}