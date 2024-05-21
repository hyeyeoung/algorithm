#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
bool compare(pair <string, double> &a, pair <string, double> &b){
    return a.second > b.second;
}

int main(){
    while(1){
        int n; cin >> n;
        if(n == 0) break;
        pair<string, double> arr[51];
        for(int i = 0; i<n; i++) cin >> arr[i].first >> arr[i].second;
        sort(arr, arr+n, compare);
        // cout << max.first << '\n';
        for(pair<string, double> a: arr){
            if(arr[0].second == a.second) cout << a.first << ' ';
        }
        cout << '\n';
    }
}