#include <iostream>
using namespace std;
// int arr[51] = {};
char str[51] = {};

long long hasing(int l){
    int result = 0;
    for(int i = 0; i<l; i++){
        int tmp = int(str[i]) - 96;
        int m = 1;
        for(int j = 1; j<=i; j++) m = m * 31;
        result += (tmp*m);
    }
    return result % 1234567891;
}
int main(){
    int l;
    cin >> l;
    for(int i = 0; i<l ;i++) cin >> str[i];
    cout << hasing(l);
}