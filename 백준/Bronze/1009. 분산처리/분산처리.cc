#include <iostream>
using namespace std;
int main(){
    int t; cin >> t;

    while(t--){
        int a, b; cin >> a >> b; // a^b
        int arr[10] = {10};
        arr[0] = (a % 10 != 0) ? a % 10 : 10;
        arr[1] = ((arr[0]*a)%10 != 0) ?  (arr[0]*a) % 10 : 10;
        arr[2] = ((arr[1]*a)%10 != 0) ?  (arr[1]*a) % 10 : 10;
        arr[3] = ((arr[2]*a)%10 != 0) ?  (arr[2]*a) % 10 : 10;

        int index = (b-1) % 4;
        cout << arr[index] <<'\n';
    }
}