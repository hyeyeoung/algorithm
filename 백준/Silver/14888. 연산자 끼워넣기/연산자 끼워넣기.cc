#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n; cin >> n;
    int arr[11] = {}; // 합은 항상 -10 ~ 10억 사이.. int범위 내   
    for(int i = 0; i<n; i++) cin >> arr[i];
    int pl, mi, multi, div;  // 1,2,3,4
    cin >> pl >> mi >> multi >> div;
    // 결국 n-1개의 연산을 한다는 뜻..
    vector <int> a(n-1);
    int cpl = pl, cmi = mi, cmulti = multi, cdiv = div;
    for(int i = 0; i<n-1;i++){
        if(cpl != 0){ a[i] = 1; cpl--;}
        else if(cmi != 0) { a[i] = 2; cmi--;}
        else if(cmulti != 0) { a[i] = 3; cmulti--; }
        else if(cdiv != 0) { a[i] = 4; cdiv--; }
    }
    int min = 1000000001, max = -1000000001;
    do{
        int ans = arr[0];
        for(int i = 0; i<n-1;i++){
            if(a[i] == 1){ ans += arr[i+1]; }
            else if(a[i] == 2){ ans -= arr[i+1];}
            else if(a[i] == 3){ ans *= arr[i+1];}
            else if(a[i] == 4){ 
                if(ans < 0 && arr[i+1] >0){
                    int tmp = -1 * ans;
                    tmp = tmp / arr[i+1];
                    ans = -1 * tmp;
                }
                else{
                    ans /= arr[i+1];
                }
            }
        }
        if(ans < min) min = ans;
        if(ans > max) max = ans;
    }while(next_permutation(a.begin(), a.end()));
    cout << max <<'\n' << min;
}