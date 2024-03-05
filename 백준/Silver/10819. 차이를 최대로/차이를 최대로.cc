// 차이를 최대로 -> 다음 순열 사용하기
#include <iostream> 
#include <algorithm>
using namespace std;
bool next_per(int *arr, int n){
    int i = n-1;
    while(i > 0 && arr[i-1] >= arr[i]) i--;
    if(i <= 0) return false;
    int j = n-1;
    while(arr[j] <= arr[i-1]) j--;
    swap(arr[i-1], arr[j]);
    j = n-1;
    while(i < j){
        swap(arr[i], arr[j]);
        i++; j--;
    }
    return true;
}
int calcul(int arr[], int n){
    int result = 0;
    for(int i = 1; i<n; i++){
        result += abs(arr[i-1] - arr[i]); 
    }
    return result;
}
int main(){
    int n; cin >> n;
    int arr[10] = {};
    for(int i = 0; i < n; i++) cin >> arr[i];
    int max = 0;
    sort(arr, arr+n);
    do{
        int result = calcul(arr, n);
        max = result > max ? result : max;
    }while(next_per(arr, n));
    cout << max;
}