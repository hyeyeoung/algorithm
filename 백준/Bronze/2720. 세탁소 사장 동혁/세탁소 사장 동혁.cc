#include <iostream>
using namespace std;

int main(){
    int N; 
    cin >> N;
    while(N--){
        int c;
        cin >> c;
        int q,d,n,p;
        q=d=n=p= 0;
        while(c >= 25){
            q++;
            c-=25;
        }
        while(c >= 10){
            d++;
            c-=10;
        }
        while(c >= 5){
            n++;
            c-=5;
        }
        while(c >= 1){
            p++;
            c-=1;
        }
        cout << q <<" "<<d<<" "<<n <<" "<<p<<'\n';
    }
}