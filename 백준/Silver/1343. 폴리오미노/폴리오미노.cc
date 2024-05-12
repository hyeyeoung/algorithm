#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char arr[51];
    cin >> arr;
    int cnt = 0;
    for(int i = 0; i<strlen(arr); i++){
        if(arr[i] == '.') {
            cnt = 0;
            continue;
        }
        if(arr[i] == 'X') cnt++;
        if(cnt == 4) {
            arr[i] = arr[i-1] = arr[i-2] = arr[i-3] = 'A';
            cnt = 0;
        }
    }
    cnt = 0;
    for(int i = 0; i<strlen(arr); i++){
        if(arr[i] == '.') {
            cnt = 0;
            continue;
        }
        if(arr[i] == 'X') cnt++;
        if(cnt == 2) 
            arr[i] = arr[i-1] = 'B';
    }
    for(int i = 0; i<strlen(arr); i++){
        if(arr[i]=='X'){
            cout << -1;
            return 0;
        }
    }
    cout << arr;
}