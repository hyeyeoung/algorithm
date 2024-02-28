#include <iostream>
#include <string>
using namespace std;
bool check[10] = {};
int main(){
    string n; int m; //채널이 무한대.. -> 문자열로 받아야 함
    cin >> n >> m;
    for(int i = 0; i<m; i++) {
        int tmp; cin >> tmp; 
        check[tmp] = true;
    } // 사용 불가능 리모컨 번호 제외

    int count = abs(100 - stoi(n)); // 카운트 위치
    for(int i = 0; i< 1000001; i++){ // 충분한 경우의 수 모두 고려
        string num = to_string(i);
        for(int j = 0; j < num.size(); j++){
            char a = num[j];
            int a_tmp = a - '0';
            if(check[a_tmp]) break;
            if (j == (num.size()-1) ){
                count = count > (abs(stoi(num) - stoi(n)) + num.size()) ? (abs(stoi(num) - stoi(n)) + num.size()) : count;
            }
        }
    }
    cout << count;
}