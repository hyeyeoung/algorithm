#include <iostream>
#include <algorithm>
using namespace std;
int arr[10]; int a[10]; int b[10]={0};
void go(int index, int start, int n, int m){
    if(index == m+1) {
        for(int i =1; i<=m;i++) cout << arr[a[i]]<<" ";
        cout << '\n';
        return;
    }
    for(int i = start; i<=n; i++){
        if(b[i]>0){
            a[index] = i;
            go(index+1,i, n ,m);
        }
    }
}
int main(){
    int n, m; cin >> n >> m;
    for(int i = 1; i<=n; i++) cin >> arr[i];
    sort(arr,arr+n+1);

    for(int i =1; i<=n;i+=b[i]){
        int count = 1;
        for(int j = i+1; j<=n;j++){
            if(arr[i] == arr[j]) count++;
            else break;
        }
        b[i] = count;
    }
    go(1,1, n,m);
}