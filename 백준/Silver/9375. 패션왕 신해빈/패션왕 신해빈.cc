#include <iostream>
#include <map>
using namespace std;

int main(){
    int tc; cin >> tc;
    map <string, int>:: iterator iter;

    while(tc--){
        int n; cin >> n;
        map <string, int> m;
        for(int i = 0; i<n; i++){
            string a, b; cin >> a >> b;
            m[b]++; 
        }
        int ans = 1;
        for(iter = m.begin(); iter != m.end(); iter++) ans *= (iter->second)+1;
        cout << ans-1 <<'\n';
    }
}