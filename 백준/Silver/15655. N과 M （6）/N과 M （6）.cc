#include <iostream>
#include <algorithm>
using namespace std;
int arr[10]; int a[10]; bool b[10];
void go(int index, int start, int n, int m){
    if(index == m+1) {
        for(int i = 1; i<=m; i++) cout << arr[a[i]]<<" ";
        cout <<'\n';
        return;
    }
    if(index > n) return;
    for(int i = start; i<=n; i++){
        if(b[i]) continue;
        b[i] = true; a[index] = i;
        go(index+1, i+1, n, m);
        b[i] = false;
    }
}

int main(){
    int n, m; cin >> n >> m;
    for(int i = 1; i<=n; i++) cin >> arr[i];
    sort(arr, arr+n+1);
    go(1, 1, n, m);
}