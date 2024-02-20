#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    cin>>n;
    int count = 1;
    string str="666";
    while(count != n){
        str = to_string(stoi(str) + 1);
        if(str.find("666") != std::string::npos){  //문법 공부 필수..
            count++;
        }
    }
    cout << str;
}