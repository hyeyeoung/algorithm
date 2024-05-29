#include <iostream>
#include <vector>
using namespace std;

int main(){
    // testcase
    int p; 
    cin >> p;
    while(p--){
        int t; cin >> t;
        vector <int> arr(21);
        for(int i = 0; i<20; i++) cin >> arr[i];
        int cnt=0;
        for(int i = 1; i<20; i++){
            for(int j = 0; j < i; j++){
                if(arr[i] < arr[j]) cnt++;
            }
        }
        cout << t << " " << cnt << '\n';
    }
}