#include <iostream>
#include <vector>
using namespace std;
void sol(vector<int>&arr, int n, int max, int maxx){
    int left = 0, right = maxx;
    int mid = 0;
    while(left <= right){
        mid = (left + right) / 2;
        int tmp = 0;
        for(int i = 1; i <= n; i++){
            if(arr[i] >= mid) tmp += mid;
            else tmp += arr[i];
        }
        if(tmp <= max) left = mid + 1;
        else right = mid - 1;
    }
    cout << right;
}

int main(){
    int n;
    int max;
    cin >> n;
    vector <int> arr(n+1);
    int k = 0;
    int maxx = -1;
    for(int i = 1; i<=n; i++) {
        cin >> arr[i];
        k += arr[i];
        maxx = maxx < arr[i] ? arr[i] : maxx;
    }
    cin >> max;
    if(k <= max){
        cout << maxx;
        return 0;
    }
    sol(arr, n,max,  maxx);
}