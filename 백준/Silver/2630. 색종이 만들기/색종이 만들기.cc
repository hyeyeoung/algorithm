#include <iostream>
#include <cmath>
using namespace std;

int arr[130][130] = {};
int n;
int result1 = 0, result2;

void color_papper(int x, int y, int size){ // x의 위치와 y의 위치, n,,
    bool ok = false;
    int f = arr[x][y];
    for(int i = x; i<x+size; i++){
        for(int j = y; j< y+size; j++){
            if(arr[i][j]!=f) {
                ok = true;
                break;
            }
        }
    }
    if(ok){
        color_papper(x,y, size/2);
        color_papper(x+size/2, y, size/2);
        color_papper(x,y+size/2, size/2);
        color_papper(x+size/2, y+size/2, size/2);
    }
    else{
        if(f == 1) result2++;
        else result1 ++;
    }
}

int main(){
    cin >> n;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++) cin >> arr[i][j];
    }
    color_papper(0,0,n);
    cout << result1<<"\n"<< result2;
}