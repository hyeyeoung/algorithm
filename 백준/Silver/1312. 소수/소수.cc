#include <iostream>
#include <cstring>
using namespace std;

int main(){
    int a, b, n;
    cin >> a >> b >> n;

    // 나누기 로직 구현 오랜만에... 직접 구현해보기
    int cnt = a < b ? 1 : 0; // 몇 번째 자리 소수점인지 확인
    int res = -1;

    while(cnt <= n){
        if(a < b){ // 2. 분자가 분모보다 더 작은 경우
            a *= 10;
        }
        res = int(a / b);
        a -= (int((a / b)) * b);
        cnt++;
    }
    cout << res;
}