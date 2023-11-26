#include <iostream>
using namespace std;

int main(){
    while(true){
        int a,b,c;
        cin>>a>>b>>c;
        if (a==0 && b==0 && c==0) break;
        a = a*a; b = b*b; c = c*c; 
        if ((a+b == c) || (a+c == b)|| (b+c == a)) cout<<"right\n";
        else cout<<"wrong\n";
    }
}