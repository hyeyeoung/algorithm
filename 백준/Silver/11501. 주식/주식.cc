#include <iostream>
#include <vector>
using namespace std;

int main(){
    cin.tie(0); cout.tie(0); ios::sync_with_stdio(false);
    int TC;
    cin >> TC;
    while(TC--){
        int l;
        cin >> l;
        vector <long long> arr(l);
        for(int i = 0; i<l; i++) 
            cin >> arr[i];

        long long cur = arr[l-1], total = 0;
        int idx = l-1;

        while(idx >= 0){
            if(cur < arr[idx]) 
                cur = arr[idx];
            else
                total += (cur - arr[idx]);
            idx--;
        }
        cout << total << '\n';
    }    
}