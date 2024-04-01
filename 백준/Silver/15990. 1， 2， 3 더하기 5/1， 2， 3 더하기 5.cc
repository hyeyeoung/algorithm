#include <iostream>
using namespace std;
int arr[1000001][4] = {}; // i는 갯수의 수
long long mod = 1000000009;
void ans(){
    arr[1][1] = arr[2][2] = 1;
    arr[3][1] = arr[3][2] = arr[3][3] = 1;
    for(int i = 4; i<=100000; i++){
        arr[i][1] = (arr[i-1][2] + arr[i-1][3]) % mod;
        arr[i][2] = (arr[i-2][1] + arr[i-2][3]) % mod;
        arr[i][3] = (arr[i-3][1] + arr[i-3][2]) % mod; 
    }
}

int main(){
    int tc; cin >> tc;
    ans();
    while(tc--){
        int n;
        cin >> n;
        cout <<  ((long long)arr[n][1]+arr[n][2]+arr[n][3]) % mod<<'\n';
    }
}