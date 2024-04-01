#include <iostream>
using namespace std;
int arr[1001][10] = {};
int Mod = 10007;

int ans(int n){
    for(int i = 0; i<= 9; i++) arr[1][i] = 1;
    for(int i = 2; i <= n; i++){
        for(int j = 0; j<=9; j++){
            for(int k = 0; k <= j; k++){
                arr[i][j] += arr[i-1][k];
                arr[i][j] %= Mod;
            }
        }
    }
    long long ans = 0;
    for(int i = 0; i<=9; i++) ans+= arr[n][i];
    return ans % Mod;
}
int main(){
    int n;
    cin >> n;
    cout << ans(n);
}