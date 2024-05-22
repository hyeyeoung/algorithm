#include <iostream>
using namespace std;

int main(){
    long long arr[21] = {};
    arr[0] = arr[1] = 1;
    int n; cin >> n;
    for(int i = 2; i<=n; i++) arr[i] = i * arr[i-1];
    cout << arr[n];
}