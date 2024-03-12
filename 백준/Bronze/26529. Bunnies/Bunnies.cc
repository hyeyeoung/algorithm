#include <iostream>
using namespace std;
int arr[100];

void init(){
    arr[0] = 1; arr[1] = 1;
    for(int i = 2; i<=50; i++){
        arr[i] = arr[i-1] + arr[i-2];
    }
}
int main(){
    init();
    int n; cin >> n;
    while(n--){
        int k; cin >> k;
        cout << arr[k] <<"\n";
    }
}