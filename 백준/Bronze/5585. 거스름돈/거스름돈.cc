#include <iostream>
using namespace std;

int main(){
    int n; cin >> n;
    n = 1000 - n;
    int tmp=0;
    tmp += (n/500);
    tmp += (n%500)/100;
    tmp += (n%100)/50;
    tmp += (n%50)/10;
    tmp += (n%10)/5;
    tmp += (n%5)/1;
    cout << tmp;
}