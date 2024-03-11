#include <iostream>
#include <algorithm>
using namespace std;
int arr[10]; int a[10];
// void go(int index, int n, int m){
//     if(index == m+1) {
//         for(int i = 1; i<=m; i++) cout << arr[a[i]]<<" ";
//         cout <<'\n';
//         return;
//     }
//     for(int i = 1; i<=n; i++){
//         a[index] = i;
//         go(index+1, n, m);
//     }
// }
void go(int index, int select, int n, int m){
    if(select == m){
        for(int i = 0; i<n; i++){
            for(int j = 0; j < a[i] ; j++){
                cout << arr[i] << " ";
            }
        }
        cout <<'\n';
        return;
    }
    if(index >= n) return;
    for(int i = m-select; i >= 1 ; i--){
        a[index] = i;
        go(index+1, select+i, n, m);
    }
    a[index] = 0;
    go(index+1, select, n, m);
}
int main(){
    int n, m; cin >> n >> m;
    for(int i = 0; i<n; i++) cin >> arr[i];
    sort(arr, arr+n);
    go(0, 0,n, m);
}