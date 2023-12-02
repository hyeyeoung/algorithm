#include <iostream>
#include <string>
using namespace std;
bool sol(string tmp){
    int i = 0; int j = tmp.length()-1;
    while(i < j){
        if(tmp[i] != tmp[j]) return false;
        i ++; j--;
    }
    return true;
}
int main(){
    while(1){
        string tmp;
        cin >> tmp;
        if (tmp == "0") break;
        if(sol(tmp)) cout<< "yes\n";
        else cout <<"no\n";
    }
}