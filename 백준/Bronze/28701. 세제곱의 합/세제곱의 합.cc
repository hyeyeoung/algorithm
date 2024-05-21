#include <iostream>
using namespace std;

int main(){
    cin.tie(0); cout.tie(0); ios::sync_with_stdio(false);
    int sum1 = 0;
    long sum2 = 0;
    long long sum3 = 0;
    int n; cin >> n;
    for(int i = 1; i<=n; i++){
        sum1 += i;
        sum3 += (i*i*i);
    }
    sum2 = sum1*sum1;
    cout << sum1 << '\n' << sum2 << '\n' << sum3;
}