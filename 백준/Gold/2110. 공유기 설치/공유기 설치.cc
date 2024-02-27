#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    cin.tie(0); cout.tie(0); ios::sync_with_stdio(false);
    int n, m; 
    cin >> n >> m;
    int arr[200001]= {};
    for(int i = 1; i <= n; i++){
        cin >> arr[i];
    }
    sort(arr, arr+n+1);
    int left = 1, right = arr[n] - arr[1];
    int result = 0;

    while(left <= right){
        int mid = (left + right) / 2;
        int count = 1; int prev = arr[1];
        for(int i = 1; i <= n ; i++){
            if(arr[i] - prev >= mid){
                count ++;
                prev = arr[i];
            }
        }
        if(count >= m){
            left = mid + 1;
            result = result > mid ? result : mid;
        }
        else {
            right = mid - 1;
        }
    }
    cout << result;

}