#include <iostream>
using namespace std;
int a[10] = {0};
bool b[10] = {0};
void go(int index, int n, int m){
    if(index == m+1){
        for(int i = 1; i <= m; i++) {
            cout << a[i] <<" ";
        }
        cout <<'\n';
        return;
    }
    for(int i = 1; i<=n;i++){
        if(b[i]) continue;
        b[i] = true; a[index] = i;
        go(index+1, n, m);
        b[i] = false;
    }
}

int main(){
    int m, n; cin >> n >> m;
    go(1,n,m);
}