#include <iostream>
using namespace std;
long long arr[10001] = {};

int main(){
    int k, n;
    cin >> k >>n;
    long long right = 0;
    for(int i = 0; i<k; i++) { 
        cin >> arr[i];
        right = right > arr[i] ? right : arr[i]; // 가장 큰 값 탐색 
    }
    long long result = 0;
    long long left = 1;
    while(left <= right){
        long long count = 0;
        long long mid = (left + right) / 2;
        for(int i = 0; i < k; i++){
                count += (arr[i] / mid);
            }
        if (count >= n) { // 탐색 범위를 오른쪽으로 옮겨서 확인
            result = mid;
            left = mid+1;
        }
        else{
            right = mid - 1; // 탐색 범위를 왼쪽으로 줄임.
        }
    }
    cout << result;
}