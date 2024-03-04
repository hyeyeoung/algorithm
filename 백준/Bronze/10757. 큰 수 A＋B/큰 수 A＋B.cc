#include <iostream>
#include <cstring>
using namespace std;
void reverse(char arr[]){
    int left = 0, right = strlen(arr)-1;
    while(left <= right){
        swap(arr[left], arr[right]);
        left++; right--;
    }
}
int main(){
    char a[10005] = {};
    char b[10005] = {};
    char result [100008] = {}; // 결과 입력
    cin >> a >> b; // 입력- 문자열로
    reverse(a), reverse(b); // 콤마 연산자라고 있네..
    int carry = 0, len = 0;
    len = strlen(a) > strlen(b) ? strlen(a) : strlen(b);

    for(int i = 0; i<len; i++){
        int sum = a[i] - '0' + b[i] - '0' + carry; /// 문자를 정수로 변환하는 코드
        // cout << sum <<'\n';

        if(sum < 0) sum += '0';
        if(sum > 9) carry = 1; // 올림수 연산
        if(sum >=0 && sum <=9) carry = 0;

        result[i] = (sum % 10) + '0'; // 정수를 문자로
    }
    if(carry==1) result[len] = '1';
    reverse(result);

    cout << result;
}