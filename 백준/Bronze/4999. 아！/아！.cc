#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char a[1000];
    char b[1000];
    cin >> a >> b;

    int acnt = 0, bcnt = 0;
    for(int i = 0; i<strlen(a); i++){
        if(a[i]=='a')acnt++;
    }
    for(int i = 0; i<strlen(b); i++){
        if(b[i]=='a') bcnt++;
    }
    if(acnt >= bcnt) cout << "go";
    else cout << "no";
}