
/* 
 * BruteForce Problem 
 * 1476 날짜 계산
*/

#include <iostream>
using namespace std;

int date(int e, int s, int m){
    int result = 0; // 년도 계산
    int tmp_e=0, tmp_s=0, tmp_m = 0;
    while(true){
        if(tmp_e == e && tmp_s == s && tmp_m == m) return result;
        
        tmp_e++; tmp_m++; tmp_s++; result++;
        if(tmp_e == 16) tmp_e -= 15;
        if(tmp_s == 29) tmp_s -= 28;
        if(tmp_m == 20) tmp_m -= 19;
    }
    return 0;
}

int main(){
    int e,s,m; 
    cin>>e>>s>>m;

    cout << date(e,s,m);
}