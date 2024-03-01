#include <iostream>
#include <algorithm>
using namespace std;
long long arr_n[500001] = {};
bool binary(long long a, long long n){
    long long left = 0; long long right = n-1;
    while(left <= right){
        long long mid = (left + right) / 2;
        if(arr_n[mid] == a) return true;
        else if(arr_n[mid] < a) left = mid+1;
        else right = mid-1;
    }
    return false;
}

int main(){
    cin.tie(0); cout.tie(0); ios::sync_with_stdio(false);
    long long n, m;
    cin >> n;
    for(int i = 0; i<n; i++) cin >> arr_n[i];
    cin >> m;
    sort(arr_n, arr_n+n);

    for(int i = 0; i<m; i++){
        long long a; cin >> a;
        if(binary(a, n)) { cout <<"1 ";}
        else cout << "0 ";
    }
}