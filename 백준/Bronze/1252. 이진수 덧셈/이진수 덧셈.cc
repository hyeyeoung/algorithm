#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

vector<char> aBinary(80, '0');
vector<char> bBinary(80, '0');
vector<char> res(81, '0');

void binaryAdd(){
    char carry = '0';
    int idx = 81;
    for(int i = 80; i >= 0; i--)
    {
        int tmp = (carry - '0') + (aBinary[i] - '0') + (bBinary[i] - '0');
        if(tmp == 0){
            res[idx] = '0';
            carry = '0';
        }
        else if(tmp == 1){
            res[idx] = '1';
            carry = '0';
        }
        else if(tmp == 2){
            res[idx] = '0';
            carry = '1';
        }
        else if(tmp == 3){
            res[idx] = '1';
            carry = '1';
        }
        idx--;
    }

    if(carry == '1')
        res[0] = '1';
    bool flag = false;

    for(int i = 0; i <= 80; i++){
        if(res[i] == '0' && !flag)
            continue;
        flag = true;
        cout << res[i];
    }
    if(!flag)
        cout << '0';
}

int main(){    
    string a, b; 
    cin >> a >> b;

    int a_len = 80 - a.length();
    int b_len = 80 - b.length();

    for(int i = 0; i < a.length(); i++){
        aBinary[a_len] = a[i];
        a_len++;
    }
    for(int i = 0; i < b.length(); i++){
        bBinary[b_len] = b[i];
        b_len++;
    }
    
    binaryAdd();
}