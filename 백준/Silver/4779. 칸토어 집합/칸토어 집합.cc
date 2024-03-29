#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;
int n;

bool arr[531442] = {}; 
void kanto(int x, int len){ // true가 자르기 
    if(len == 1) { 
        return;
    }
    else{
        for(int i = x+len/3; i<x+len-len/3; i++){
            arr[i] = false;
        }
        kanto(x,len/3);
        kanto(x+len/3,len/3);
        kanto(x+len/3+len/3, len/3);
    }
}

int main(){
    while(cin >> n) {
        memset(arr, -1, sizeof(arr)); // -----으로 시작
        kanto(0, pow(3,n));
        for(int i = 0; i<pow(3,n); i++){
            if(arr[i]) cout << '-';
            else cout << ' ';
        }
        cout << '\n';
    }
}