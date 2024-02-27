#include <iostream>
using namespace std;
long long arr[1000001] = {};

int main(){
    long long n, m;
    cin >> n >> m;
    long long high = 0;
    for(long long i = 0 ; i<n;i++){
        cin >> arr[i];
        high = high > arr[i] ? high : arr[i];
    }
    long long result = 0;
    long long left = 1, right = high;
    while(left <= right){
        long long mid = (left + right) / 2;
        long long count = 0;
        for(long long i = 0; i<n; i++){
            if(arr[i] - mid >= 0) count += (arr[i] - mid);
        }
        if(count >= m){ left = mid+1; result = mid;}
        else { right = mid - 1;}
    }
    cout << result;
}