#include <iostream>
using namespace std;
int arr[100001][2] = {};

int main(){
    cin.tie(0); cout.tie(0); ios::sync_with_stdio(false);
    int n, m; 
    cin >> n >> m;

    for(int i = 1; i<= n; i++){
        cin >> arr[i][0];
        arr[i][1] = arr[i][0] + arr[i-1][1];
    }

    for(int i = 1; i <= m; i++){
        int index, jdex;
        cin >> index >> jdex;
        cout << arr[jdex][1] - arr[index-1][1] << '\n';
    }
    // for(int i = 1; i<=n; i++) cout << arr[i][1] << " ";
}