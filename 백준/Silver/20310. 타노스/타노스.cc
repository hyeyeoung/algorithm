#include <iostream>
#include <cstring>
using namespace std;

int main(){
    int zeroCNT = 0, oneCNT = 0;

    string str;
    cin >> str;
    for(int i = 0; i<str.size(); i++){
        if(str[i] == '0') zeroCNT ++;
        else oneCNT++;
    }

    for(int i = 0; i < zeroCNT / 2; i++) cout << '0';
    for(int i = 0; i < oneCNT / 2; i++) cout << '1';
}