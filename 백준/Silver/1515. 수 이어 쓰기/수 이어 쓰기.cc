#include <iostream>
#include <cstring>
using namespace std;

void s1515(string &arr){
    int ptr = 0, num = 0; // 포인터와 대치하는 값

    while(ptr < arr.size()){
        num++;
        string tmp = to_string(num); // 현재 num의 값을 한 글자씩 비교하기 위해서 문자열화
        for(int i = 0; i<tmp.size(); i++){
            if(arr[ptr] == tmp[i])
                ptr++;
        }
    }
    cout << num;
}
int main(){
    // 1부터 n까지 작성
    string str;
    cin >> str;

    s1515(str);
}