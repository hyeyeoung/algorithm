#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int INF = 10000001;

int main(){
    int n, m;
    cin >> n >> m;

    vector <vector<int>> arr(101, vector<int>(101, INF));
    for(int i = 0; i < m; i++){
        int a, b, c;
        cin >> a >> b >> c;
        if(arr[a][b] > c)
            arr[a][b] = c;
    }
    for(int i = 1; i <= n; i++){
        arr[i][i] = 0;
    }
    for(int k = 1; k <= n; k++){
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++){
                arr[i][j] = min(arr[i][j], arr[i][k] + arr[k][j]);
            }
        }
    }

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(arr[i][j] == INF)
                cout << 0 << " ";
            else
                cout << arr[i][j] << " ";
        }
        cout << '\n';
    }
}