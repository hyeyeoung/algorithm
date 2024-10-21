#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int n, m, c1, c2;
int Mini = 200000001;
int p[500000];
int q[500000];
int CNT1 = 0;
int assum(int a, int b){
    return abs(a-b) + abs(c1-c2);
} // 두 점 사이의 거리 계산
void s14746(){
    int i = 0, j = 0;
    while(i < n && j < m){
        int tmp = assum(p[i], q[j]);
        if(Mini > tmp){
            Mini = tmp;
            CNT1 = 0;
        }
        if(Mini == tmp) CNT1++;
        if(p[i] > q[j]) j++;
        else i++;
    }
}
int main(){
    cin >> n >> m;
    cin >> c1 >> c2;

    for(int i = 0; i<n; i++) cin >> p[i];
    for(int i = 0; i<m; i++) cin >> q[i];
    sort(p, p+n);
    sort(q, q+m);
    s14746();
    cout << Mini << " " << CNT1;
}