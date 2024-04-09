#include <iostream>
#include <cstring>
using namespace std;

int main(){
    string str = "A";
    bool check[26] = {};
    while(1){
        getline(cin, str);
        if(str == "END") break;
        memset(check,0,sizeof(check));
        bool flag = true;
        for(int i = 0; i<str.size(); i++){
            if(str[i] == ' ') continue;
            if(check[str[i]-65])  { flag = false; break;}
            else check[str[i]-65] = true;
        }
        if(flag) cout << str <<'\n';
    }
}