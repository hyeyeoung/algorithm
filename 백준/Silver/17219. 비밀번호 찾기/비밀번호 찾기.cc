#include <iostream>
#include <map>
#include <cstring>
using namespace std;

int main(){
    cin.tie(0); cout.tie(0); ios::sync_with_stdio(false);
    int m, n;
    cin >> m >> n;
    map<string, string> a;
    for(int i = 0; i<m; i++){
        string tmpa, tmpb; cin >> tmpa >> tmpb;
        a[tmpa] = tmpb;
    }
    while(n--){
        string q; cin >> q;
        cout << a[q] << '\n';
    }
}