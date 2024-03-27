#include <iostream>
using namespace std;

int a,b;
int c = 0;
void go333(){
    while(a < b){
        if(1==b%10){
            c++;
            b/=10;
        }
        else if(0 == b%2){
            c++;
            b/=2;
        }
        else{
            b = 0;
            break;
        }
    }
}


int main(){
    cin >> a >> b;
    go333();
    if(a==b) cout << c+1;
    else cout << -1;
}