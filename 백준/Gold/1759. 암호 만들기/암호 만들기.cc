#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
bool check(string password){
    int mo = 0, ja = 0;
    for(int i = 0; i < password.size(); i++){
        if(password[i] == 'a' || password[i] == 'e' || password[i] == 'i' || password[i] == 'o' || password[i] == 'u') mo++;
        else ja++;
        if(mo >= 1&& ja >=2) return true;
    }
    return false;
}

void go(int n, vector<char> &alpha, string password, int i){
    // n개의 문자를 조합해서 도출한 경우
    if(password.length() == n){
        if(check(password)){
            cout << password <<'\n';
        }
        return;
    }
    if(i >= alpha.size()) return; // 불가능한 경우, 인덱스가 넘어가버림

    go(n, alpha, password+alpha[i], i+1);
    go(n, alpha, password, i+1);
}

int main(){
    int l,c; cin >> l >> c;
    vector <char> a(c);
    for(int i = 0; i < c; i++) cin >> a[i];
    sort(a.begin(),a.end());
    string password = "";
    go(l, a,password, 0);
}