#include <iostream>
using namespace std;
int ans = 0;
int n, s;
int a[20] = {};
void go(int i, int sum){
    if(i == n){
        if(sum == s) ans++;
        return;
    }
    go(i+1, sum+a[i]);
    go(i+1, sum);
}

int main(){
    cin >> n >> s;
    for(int i = 0; i<n; i++) cin >> a[i];
    go(0,0);
    if(s == 0) ans-=1;
    cout << ans;
}