#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, b, c;
    cin >> n;
    vector <int> arr(n+1);
    for(int i = 1; i <= n; i++) cin >> arr[i];
    cin >> b >> c;

    long long x = 0;
    for(int i = 1; i<=n; i++){
        x++; // 감독 +1
        arr[i] -= b;
        if(arr[i] > 0){
            if(arr[i] % c == 0 ) x += arr[i] / c;
            else x += arr[i]/c +1;
        }
    }
    cout << x;
}