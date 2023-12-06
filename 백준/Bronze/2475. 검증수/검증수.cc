#include <iostream>
using namespace std;

int sol(int * arr){
    int sol = 0;

    for (int i = 0; i< 5; i++){
        sol += arr[i]*arr[i];
    }
    return sol % 10;
}

int main(){
    int arr[6] = {};

    for (int i = 0; i < 5; i++){
        cin >> arr[i];
    }
    cout <<sol(arr);
}