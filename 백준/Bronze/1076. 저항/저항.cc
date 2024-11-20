#include <iostream>
#include <cstring>
using namespace std;

long long s(string &k, bool flag){
    if(k == "black"){
        if(flag) return 0;
        else return 1;
    }
    if(k == "brown"){
        if(flag) return 1;
        else return 10;
    }
    if(k == "red"){
        if(flag) return 2;
        else return 100;
    }    
    if(k == "orange"){
        if(flag) return 3;
        else return 1000;
    }
    if(k == "yellow"){
        if(flag) return 4;
        else return 10000;
    } 
    if(k == "green"){
        if(flag) return 5;
        else return 100000;
    } 
    if(k == "blue"){
        if(flag) return 6;
        else return 1000000;
    } 
    if(k == "violet"){
        if(flag) return 7;
        else return 10000000;
    } 
    if(k == "grey"){
        if(flag) return 8;
        else return 100000000;
    }
    if(k == "white"){
        if(flag) return 9;
        else return 1000000000;
    } 
}

int main(){
    string a,b,c;
    cin >> a >> b >> c;

    cout << (10 * s(a, true) + s(b, true)) * s(c,false); 
    
}