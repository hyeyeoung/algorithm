#include <iostream>
using namespace std;

int arr[200001] = { };

int main(){
    cin.tie(0); cout.tie(0); ios::sync_with_stdio(false);
    int n; 
    cin >> n;
    int max = 0; // 최대 이익
    for(int i = 1; i<=n; i++){
        cin >> arr[i];
    }
    int max_num = 0;
    for(int i = n; i>=1; i--){
        if(arr[i] > max_num){
            max_num = arr[i];
        }
        max = max > (max_num - arr[i]) ? max : max_num - arr[i];
    }

    cout << max;
}