#include <iostream>
using namespace std;
int facto[20] = {};

void fac(){
    facto[0] = 1; facto[1] = 1; facto[2] = 2;
    for(int i = 3; i<= 20; i++){
        facto[i] = i * facto[i-1];
    }
}

int main(){
    fac(); 
    int n, k;
    cin >> n >> k;
    cout << facto[n] / (facto[k] * (facto[n-k]));
}