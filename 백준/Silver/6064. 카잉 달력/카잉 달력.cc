#include <iostream>
using namespace std;
/**  카잉 달력
 * 더 큰 수 씩 더하는겨?
 * https://velog.io/@publicminsu/C%EB%B0%B1%EC%A4%80-6064-%EC%B9%B4%EC%9E%89-%EB%8B%AC%EB%A0%A5
 * x와 y는 원래 같은 수였다..
 * 11,22,33,,,, 이렇게 
 */

int s6064(int m, int n, int x, int y){ 
    bool check = false;
    while(1){
        if(x == y) return x;
        if(x > m*n) break;
        if(x < y) x += m;
        else y += n;
    }
    return -1; 
}
int main(){
    int TC;
    cin >> TC;
    while(TC--){
        int m, n, x, y;
        cin >> m >> n >> x >> y;
        cout << s6064(m, n, x, y) << '\n';
    }
}