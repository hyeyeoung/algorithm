#include <iostream>
using namespace std;
int sol(int n){
    int check = 1;
    while(check < n){
        int tmp = check;
        int tmp_result = 0;
        do{
            tmp_result += tmp % 10;
            tmp = tmp / 10;
        }while(tmp != 0);
        if(check + tmp_result == n) return check;
        check++;
    }
    return 0;
}

int main(){
    int n; 
    cin >> n;
    cout << sol(n);
}