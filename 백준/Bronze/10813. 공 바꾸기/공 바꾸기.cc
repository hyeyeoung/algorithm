#include <iostream>
using namespace std;
int arr[1001] = {};

int main(){
    int n, m;
    cin>>n>>m;
    for(int i = 1; i<=n; i++) arr[i] = i;

    for(int i = 1; i<=m; i++){
        int index_i, index_j;
        cin >> index_i >> index_j;

        int tmp = arr[index_i];
        arr[index_i] = arr[index_j];
        arr[index_j] = tmp;
    }
    for(int i = 1; i<=n; i++) cout << arr[i]<<" ";
}