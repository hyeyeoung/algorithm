#include <iostream>
#include <cstring>
using namespace std;

string octal2binary(char &str){
    string res = "000";
    int x = str - '0', i = 2;
    while(x > 0){
        res[i] = (x%2) + '0';
        // res.push_back((x % 2)+'0');
        x /= 2;
        i--;
    }
    return res;
}
int main(){
    string octalcode;
    cin >> octalcode;
    if(octalcode == "0") {
        cout << "0";
        return 0;
    }
    string first = octal2binary(octalcode[0]);
    bool flag = false;
    for(auto x: first){
        if(!flag && x == '0') continue;
        if(x == '1') flag = true;
        cout << x;
    }
    for(int i = 1; i < octalcode.size(); i++)
        cout << octal2binary(octalcode[i]);
}