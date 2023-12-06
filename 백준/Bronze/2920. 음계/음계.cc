#include <iostream>
using namespace std;
bool acs(int *arr){
    for(int i = 1; i< 8; i++){
        if(arr[i] != arr[i-1]+1){
            return false;
        }
    }
    return true;
}
bool dec(int *arr){
    for(int i = 1; i< 8; i++){
        if(arr[i] != arr[i-1]-1) return false;
    }
    return true;
}

int main(){
    int arr[10] = {};
    for(int i = 0; i< 8; i++){
        cin >> arr[i];
    }
    if(acs(arr)) cout << "ascending\n";
    else{
        if(dec(arr)) cout <<"descending\n";
        else cout <<"mixed\n";
    }

}