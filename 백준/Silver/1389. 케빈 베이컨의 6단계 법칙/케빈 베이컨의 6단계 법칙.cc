#include <iostream>
#include <algorithm>
using namespace std;
int arr[101][101] = {};
int n, m;
int main(){
    cin >> n >> m;
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=n; j++) arr[i][j] = 9999;
    }
    
    for(int i = 0; i<m; i++){
        int a, b; cin >> a >> b;
        arr[a][b] = arr[b][a] = 1;
    }


    for(int k = 1; k<= n; k++){
        for(int i = 1; i<=n; i++){
            for(int j = 1; j<= n; j++){
                arr[i][j] = min(arr[i][j], arr[i][k]+arr[k][j]);
            }
        }
    }
    int MIN=100000000;
    int node = 0;
    for(int i = 1; i<=n; i++){
        int sum = 0;
        for(int j = 1; j<=n; j++) sum += arr[i][j];
        if(MIN > sum) {
            node = i;
            MIN = sum;
        }
    }
    cout << node;
}