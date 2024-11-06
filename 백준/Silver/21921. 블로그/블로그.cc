#include <iostream>
#include <vector>
using namespace std;

void s21921(vector <int> &arr, vector <int>&plus, int n, int x){
    int sum = 0, term = 0;
    for(int i = 0; i < n; i++){
        if(i - (x-1) < 0) continue;
        int tmp = plus[i] - plus[i-(x)];
        if(tmp == sum) term ++;
        else if(tmp > sum){
            sum = tmp;
            term = 1;
        }
    }
    
    if(sum == 0) cout << "SAD";
    else cout << sum << '\n' << term;
}
int main(){
    int n, x;
    cin >> n >> x;
    vector <int> arr(n);
    vector <int> plus(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        if(i == 0) plus[i] = arr[i];
        else plus[i] = arr[i] + plus[i-1];
    }
    s21921(arr,plus, n, x);
}