#include <iostream>
#include <cstring>
using namespace std;

int main(){
    cin.tie(0); cout.tie(0); ios::sync_with_stdio(false);
    while(1){
        char a;
        a = getchar();
        if(a == '\n') break;
        else cout << char(a-32);
    }
}