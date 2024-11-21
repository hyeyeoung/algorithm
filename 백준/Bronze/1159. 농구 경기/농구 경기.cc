#include <iostream>
#include <cstring>
using namespace std;

int main(){
    int n;
    cin >> n;

    int arr[27] = {};

    for(int i = 0; i<n; i++){
        string str;
        cin >> str;
        arr[str[0] - 'a']++;
    }
    bool flag = true;
    for(int i = 0; i<26; i++){
        if(arr[i] >= 5){
            flag = false;
            cout << char(i + 'a');
        }
    }
    if(flag) cout << "PREDAJA";
}