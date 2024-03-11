#include <iostream>
#include <algorithm>
using namespace std;
int arr[10]; int a[10];
void go(int index, int n, int m){
    if(index == m+1) {
        for(int i = 1; i<=m; i++) cout << arr[a[i]]<<" ";
        cout <<'\n';
        return;
    }
    for(int i = 1; i<=n; i++){
        a[index] = i;
        go(index+1, n, m);
    }
}
int main(){
    int n, m; cin >> n >> m;
    for(int i = 1; i<=n; i++) cin >>arr[i];
    sort(arr, arr+n+1);
    go(1, n, m);
}