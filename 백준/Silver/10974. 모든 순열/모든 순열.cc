#include <iostream>
using namespace std;
int arr[10] = {};
bool next_permutation(int n){
    int i = n-1;
    while(arr[i-1] >= arr[i] && i > 0) i --;
    if(i <= 0) return false;
    else{
        int j = n-1;
        while(arr[j] <= arr[i-1]) j --;
        int tmp = arr[i-1];
        arr[i-1] = arr[j]; 
        arr[j] = tmp;
        j = n-1;
        while(i < j){
            tmp = arr[i];
            arr[i] = arr[j];
            arr[j] = tmp;
            i++; j--;
        }
        return true;
    }
}
int main(){
    int n;
    cin >> n;
    for(int i = 0; i<n; i++){
        arr[i] = i+1;
        cout << arr[i] <<" ";
    }
    cout << '\n';

    while(next_permutation(n)){
        for(int i = 0; i<n; i++) cout << arr[i]<<" ";
        cout<<'\n';
    }
}