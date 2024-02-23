#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
double arr[400000] ={};
int main(){
    int n; 
    cin >> n;
    if (n == 0){ cout << 0; return 0;}
    long long res = 0.0;
    long long index = round(n * 0.15);
    for (int i = 0; i< n; i++){
        cin >> arr[i];
    }
    sort(arr, arr+n);
    for(int i = 0; i< n; i++){ 
        if(i >= index && i < (n - index)) {
            res += arr[i];         
        }
    }
    cout << round((double)res/(n-(2*index)));
}