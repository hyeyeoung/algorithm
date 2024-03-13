#include <iostream>
using namespace std;
int arr[10] = {};
bool b[10] = {};
int n, m; 
void go(int index){
    if(index == m+1){
        for(int i = 1; i<=m; i++) cout << arr[i] <<" ";
        cout <<'\n';
        return;
    }

    for(int i = 1; i<=n; i++){
        if(b[i]) continue;
        b[i] = true; arr[index] = i;
        go(index + 1);
        b[i] = false;
    }
}

int main(){
    cin >> n >> m;
    go(1);
}