#include <iostream>
using namespace std;
int arr[300001] = {};

int ans(int n, int m){
    int result = 0;
    for(int i = 0; i < n - 2; i++){
        for(int j = i + 1; j < n - 1; j++){
            for(int k = j + 1; k < n; k++){
                if(arr[i]+arr[j]+arr[k] <= m) result = result > arr[i] + arr[j] + arr[k] ? result : arr[i] + arr[j] + arr[k];
            }
        }
    }
    return result;

}

int main(){
    int n, m;
    cin >> n >> m;

    for(int i = 0 ;i < n; i++) cin >> arr[i];

    cout << ans(n, m);

}