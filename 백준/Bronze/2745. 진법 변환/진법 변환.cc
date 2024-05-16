#include <iostream>
#include <cstring>
using namespace std;

int main(){
    string str;
    int b; 
    cin >> str >> b;
    int result = 0;
    int mul = 1;
    for(int i = str.size()-1; i >= 0; i--){
        if(isdigit(str[i])) result += (mul * (str[i]-'0'));
        else result += (mul * (str[i]-'7'));
        mul *= b;
    }

    cout << result;
}