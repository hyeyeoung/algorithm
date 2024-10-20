#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int k;
    int arr[51] = {};
    cin >> k;
    for(int i = 0; i<k; i++) cin >> arr[i];

    sort(arr, arr+k);
    cout << arr[0] * arr[k-1];
    
}