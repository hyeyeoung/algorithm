#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int arr[50001] = {};
int n;
bool chech(int n){
    long long a = sqrt(n);
    if(a*a == n) return true;
    return false;
}

void sqres(){
    arr[1] = 1; arr[2] = 2;
    for(int i = 3; i<=n; i++){
        if(chech(i)) arr[i] = 1;
        else{
            int minx = 100000001;
            for(int j = 1; j * j <= i; j++){
                int tmp = i - j*j;
                minx = min(minx, arr[tmp]);
            }
            arr[i] = minx+1;
        }
    }
}

int main(){
    cin >> n;
    sqres();
    cout << arr[n];

}