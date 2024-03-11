#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n, m; cin >> n >> m;
    int arr[10];
    int b[10]={0};

    for(int i = 0; i<n; i++){
        if(i<m) b[i] = 1;
        arr[i] = i+1;
    }
    do{
        for(int i = 0; i<n; i++){
            if(b[i] == 1) cout << arr[i]<<" ";
        }
        cout <<'\n';
    }while(prev_permutation(b, b+n));
}