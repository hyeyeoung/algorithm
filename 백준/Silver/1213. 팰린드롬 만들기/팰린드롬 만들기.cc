#include <iostream>
#include <cstring>

using namespace std;

int arr[27] = {}; // 알파벳 

bool OK(string &str){
    int flag = 0; // 0이면 짝수, 1이면 홀수 길이
    flag = (str.size() % 2 == 0) ? 0 : 1; 
    for(int i = 0; i < str.size(); i++){
        arr[str[i] - 'A']++;
    }
    int tmp = 0; // 길이가 홀수일때 홀수인 수 개수
    for(auto a : arr){
        if(flag == 0 && (a % 2 != 0))
            return false;
        else if(flag == 1 && (a % 2 != 0)){
            tmp++;
            if(tmp >= 2)
                return false;
        }
    }
    return true;
}

int main(){
    cin.tie(0); cout.tie(0); 
    ios::sync_with_stdio(false);

    string name;
    cin >> name;

    if(!OK(name)){
        cout << "I'm Sorry Hansoo";
        return 0;
    }
    string left = "", right = "";
    int l = name.size();
    
    // 대칭이 되도록 -> 남은 글자가 하나 혹은 없을때까지
    while(l > 1){
        for(int i = 0; i < 26; i++) {
            if(arr[i] - 2 >= 0) {
                left += (i + 'A');
                right += (i + 'A'); 
                l -= 2; 
                arr[i] -= 2; // 이걸 안 햇
                break;
            }
        }
    }
    if(l == 1) {
        for(int i = 0; i < 26; i++){
            if(arr[i] == 1)
                left += (i + 'A'); 
        }
    }

    for(int i = right.size()-1; i>= 0; i--){
        left += right[i];
    }
    cout << left;
}