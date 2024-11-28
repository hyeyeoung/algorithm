#include <iostream>
#include <cstring>
#include <stack>
using namespace std; 
// 8 -> 2 응용

int main(){
    string binaryc;
    cin >> binaryc;

    int i = binaryc.size() - 1;
    stack <int> res;
    while(i >= 0){
        string tmp = "";
        for(int j = i-2; j <= i; j++){
            if(j >= 0) tmp.push_back(binaryc[j]);
        }
        int x = 0, b = 1;
        for(int j = tmp.size()-1; j >= 0; j--){
            x += (tmp[j] -'0') * b;
            b *=2;
        }
        res.push(x);
        i-=3;
    }

    while(!res.empty()){
        cout << res.top();
        res.pop();
    }
}