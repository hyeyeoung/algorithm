#include <iostream>
using namespace std;
// dp
int main(){
    int n; cin >> n;
    pair <int, int> arr[21] = {};
    int result[21] = {};
    for(int i = 1; i<=n; i++){
        cin >> arr[i].first >> arr[i].second;
    }
    for(int i = n; i> 0; i--) {
        if(i + arr[i].first -1 > n) result[i] = result[i+1];
        else{
            result[i] = result[i+1] > (arr[i].second + result[i + arr[i].first]) ? result[i + 1] : (arr[i].second + result[i + arr[i].first]);
        }
    }
    cout << result[1];
}