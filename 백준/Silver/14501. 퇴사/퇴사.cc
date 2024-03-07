#include <iostream>
using namespace std;
pair<int, int> arr[20] = {};
int ans = 0;
int n;
void go(int day, int sum){
    if(day == n){
        if(ans < sum) ans = sum;
        return;
    }
    if(day > n) return;
    go(day+arr[day].first, sum+arr[day].second);
    go(day+1, sum);
}
int main(){
    cin >> n;
    for(int i = 0;i<n; i++) cin >> arr[i].first >> arr[i].second;
    go(0, 0);
    cout << ans;
}