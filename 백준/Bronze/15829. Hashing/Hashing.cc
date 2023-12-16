#include <iostream>
using namespace std;
// int arr[51] = {};
char str[51] = {};

long long hasing(int l){
    long long result = 0;
    for(int i = 0; i<l; i++){
        long long tmp = (int(str[i]) - 96) % 1234567891;
        long long m = 1;
        for(int j = 1; j<=i; j++) m = (m % 1234567891) * 31;
        result += (tmp*m) % 1234567891;
    }
    return result % 1234567891;
}
int main(){
    int l;
    cin >> l;
    for(int i = 0; i<l ;i++) cin >> str[i];
    cout << hasing(l);
}