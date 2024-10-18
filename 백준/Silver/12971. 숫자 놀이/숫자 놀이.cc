#include <iostream>
using namespace std;
/**
 * 중국인의 나머지 정리 
 * n = x1(mod p1)
 * n = x2(mod p2) // 사실 = 기호가 아니라 합동기호인데,, 어딨는지 모르겠음..
 * 
 * p1과 p2는 서로소여야 한다.(서로소 확인)
 * p1 p2를 곱하고 각 나눠지는? 그런 수를 구함.
 * p1 * p2 / p2 // 이런씩으로
 * 역원 구하기(브루트 포스인듯?)
 * 역원 * 나눠지는 수 * 나머지 + ... 이렇게 구하기!
 */
int main(){
    int p1, p2, p3, x1, x2, x3;
    cin >> p1 >> p2 >> p3 >> x1 >> x2 >> x3;

    for(int i = 1; i<= p1*p2*p3; i++){
        if(i % p1 == x1 && i % p2 == x2 && i % p3 == x3){
            cout << i;
            return 0;
        }
    }
    cout << -1;
}