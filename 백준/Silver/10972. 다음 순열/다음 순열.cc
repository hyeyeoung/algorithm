#include <iostream>
using namespace std;
int arr[10001] = {};

void next_permutation(int n){
    int index_i = 0;
    for(int i = 0; i<n; i++){
        if (arr[i-1] < arr[i] && index_i <= i) index_i = i;
    }
    if(!index_i) cout << -1;
    else{
        int index_j = 0;
        for(int j = index_i; j<n; j++){
           if(arr[j] > arr[index_i - 1] && index_j <= j) index_j = j;
        }
    // swap 
        int tmp = arr[index_i - 1];
        arr[index_i-1] = arr[index_j];
        arr[index_j] = tmp;
        index_j = n-1;
        while(index_i < index_j){
            int tmp1 = arr[index_i];
            arr[index_i] = arr[index_j];
            arr[index_j] = tmp1;
            index_i++; index_j--;
        }
        for(int i = 0; i<n; i++){
        cout << arr[i]<<" ";
    }
    }
}
int main(){
    int n; 
    cin >> n;
    for(int i = 0; i<n; i++){ cin >> arr[i]; }

    next_permutation(n);

}