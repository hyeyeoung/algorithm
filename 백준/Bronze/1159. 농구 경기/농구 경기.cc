#include <iostream>
using namespace std;
int main(){
    int n;
    int arr[27] = {};
    cin >> n;
    for(int i = 0; i<n; i++){
        char str[31];
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