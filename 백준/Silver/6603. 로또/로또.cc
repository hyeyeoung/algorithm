#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    while(true){
        int n; cin >> n;
        if(n==0) break;
        vector <int> a(n); // n의 크기 벡터 선언
        vector <int> b(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            if(i<6) b[i] = 1;
            else b[i] = 0;
        }
        do{
            for(int i = 0; i<n;i++){
                if(b[i] == 1) cout << a[i] <<" ";
            }
            cout << '\n';
        }while(prev_permutation(b.begin(), b.end()));
        cout<<'\n';
    }
}