#include <iostream>
#include <string>
using namespace std;

int main(){
    string ISBN;
    cin >> ISBN;

    int x = 0, idx = -1;
    int CheckN = ISBN[12] - '0';
    // 9788968322*73
    for(int i = 0; i < 12; i++){
        // cout << ISBN[i] - '0' << endl;
        if((ISBN[i] - '0') < 0){
            idx = i; // * 위치 입력
        }
        else{
            if(i % 2 == 0){
                x += (ISBN[i] - '0');
            }
            else{
                x += ((ISBN[i] - '0') * 3);
            }
        }
    }
    for(int i = 0; i < 10; i++){
        int tmp = x;  // 현재 총괄 값
        if(idx % 2 == 0)
            tmp += i;
        else
            tmp += (i * 3);
            
        if(CheckN != 0 && (10 - (tmp % 10)) == CheckN){
            cout << i;
            break;
        }
        else if(CheckN == 0 && (tmp % 10 == 0)){
            cout << i;
            break;
        }
    }
}