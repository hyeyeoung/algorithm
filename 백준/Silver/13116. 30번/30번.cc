#include <iostream>
using namespace std;
int parentRoot(int x){
    if(x % 2 != 0) {
        x--;
        x /= 2;
    }
    else x /= 2;
    return x;
}
int s13116(int a, int b){
    int MaxRoot = 1; // tree의 가장 근본 노드

    while(a != b){
        if(a > b){
            a = parentRoot(a);
        }
        if(a < b){
            b = parentRoot(b);
        }
        if(a==b){
            MaxRoot = a;
            break;
        }
    }

    return MaxRoot * 10;
}
int main(){
    int TC;
    cin >> TC;
    
    while(TC--){
        int a, b;
        cin >> a >> b;
        cout << s13116(a, b) << '\n';
    }
}