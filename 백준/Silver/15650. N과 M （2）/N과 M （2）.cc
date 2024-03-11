#include <iostream>
using namespace std;
int arr[10] = {0};
bool b[10] = {0};
// 오름차순 수열 구하기...
void go(int index, int start, int n, int m){
    if(index == m+1){ // 종료 조건
        for(int j = 1; j<= m; j++) cout << arr[j] <<" ";
        cout << '\n';
        return;
    }
    for(int j = start; j<=n; j++){
        if(b[j]) continue;
        b[j] = true; arr[index] = j;
        go(index+1, j+1, n, m);
        b[j] = false;
    }
}

int main(){
    int n , m; cin >> n >> m;
    go(1,1,n,m);
}