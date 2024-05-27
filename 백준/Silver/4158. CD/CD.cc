#include<iostream>
#include<cstring>
using namespace std;
bool check[10000001] = {};

int main(){
    cin.tie(0); cout.tie(0); ios::sync_with_stdio(false);

    int n, m;
    while(1){
        cin >> n >> m;
        if(n == 0 && m == 0) break;
        memset(check, false, sizeof(check));
        for(int i = 0; i<n; i++){
            int tmp;
            cin >> tmp;
            check[tmp] = true;
        }
        int CNT = 0;
        for(int i = 0; i<m; i++){
            int tmp;
            cin >> tmp; 
            if(check[tmp]) CNT++;
        }
        cout << CNT << '\n';
    }
}