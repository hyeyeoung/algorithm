#include <iostream>
#include <cstring>
using namespace std;
void printf(int idx, string &str){
    for(int i = 0; i < str.size(); i++){
        if(idx == 0 && i == 0) cout << "[" << str[i] << "]";
        else if(idx != 0 && i == idx - 1) cout << str[i] << "[" ;
        else if(idx != 0 && i == idx + 1) cout << "]" << str[i];
        else cout << str[i]; 
    }
    if(idx == str.size() - 1) cout << "]";
}
int main(){
    int n;
    cin >> n;
    int arr[27] = {};
    cin.ignore();
    while(n--){
        string str;
        getline(cin, str);
        int k = -1;
        for(int i = 0; i<str.size(); i++){
            if(i == 0 || (i != 0 && str[i-1] == ' ')){
                int upper = str[i] - 'A', lower = str[i] - 'a';
                int idx = -1;
                if(0 <= lower && lower <= 26) idx = lower;
                if(0 <= upper && upper <= 26) idx = upper;
                if(arr[idx] == 0){
                    arr[idx]++;
                    k = i;
                    break;
                }
            }
        }
        if(k >= 0) 
            printf(k, str);
        else{
            k = -1;
            for(int i = 0; i < str.size(); i++){
                int upper = str[i] - 'A', lower = str[i] - 'a';
                int idx = -1;
                if(0 <= lower && lower <= 26) idx = lower;
                if(0 <= upper && upper <= 26) idx = upper;
                if(arr[idx] == 0){
                    arr[idx]++;
                    k = i;
                    break;
                }
            }
            if(k >= 0)
                printf(k, str);
            else{
                for(auto j : str) cout << j;
            }
        }
        cout << '\n';
    }
}