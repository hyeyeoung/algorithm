#include <iostream>
#include <algorithm>
using namespace  std;
int arr[10001] = {};

int main(){
    int n; cin >> n;

    for(int i = 0; i<n; i++) cin >> arr[i];
    sort(arr,arr+n);
    int result = 0;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<=i; j++){
            result += arr[j];
        }
    }
    cout << result;
}