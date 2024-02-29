#include <algorithm>
#include <iostream>
using namespace std;

bool compare(int a, int b) {return a>b;}
int arr[3] = {};

int main(){
    cin >> arr[0] >> arr[1] >> arr[2];
    
    sort(arr, arr+3, compare);
    
    cout << arr[1];
}