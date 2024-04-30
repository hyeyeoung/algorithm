#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    pair<int,int> arr[8] = {};
    for(int i = 0; i<8; i++) {
        cin >> arr[i].first;
        arr[i].second = i+1;
    }
    sort(arr,arr+8);
    int sum = 0;
    int num[5] = {};
    for(int i = 3; i<8; i++){
         sum += arr[i].first;
         num[i-3] = arr[i].second;
    }
    cout << sum <<'\n';
    sort(num, num+5);
    for(int i = 0; i<5; i++) cout << num[i] <<" ";
}