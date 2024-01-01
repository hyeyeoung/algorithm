#include <iostream>
#include <string>
using namespace std;
int check(string str){
    int i = 0; int j = str.length()-1;
    while(i < j){
        if (str[i] != str[j]) return 0;
        i++; j--;
    }
    return 1;
}

int main(){
    string str;
    cin >> str;
    cout << check(str);

}