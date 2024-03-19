#include <iostream>
#include <string>
using namespace std;

int main(){
    string arr[11][11] = {};
    for(int i = 0; i<10; i++){
        for(int j = 0; j<10; j++) cin >> arr[i][j];
    }
    bool ok = false;
    for(int i = 0; i<10; i++){
        int count = 0;
        for(int j = 0; j<10; j++){
            if(arr[i][j] == arr[i][0]) count++;
        }
        if(count == 10) { cout << 1; return 0; }
        count = 0;
        for(int j = 0; j<10; j++){
            if(arr[j][i] == arr[0][i]) count++;
        }
        if(count == 10) { cout << 1; return 0; }
    }
    cout << 0;
}