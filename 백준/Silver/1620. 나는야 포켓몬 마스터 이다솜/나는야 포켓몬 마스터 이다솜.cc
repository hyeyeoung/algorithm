#include <iostream>
#include <map>
#include <string>
using namespace std;

int main(){
    cin.tie(0); cout.tie(0); ios::sync_with_stdio(false);
    int n, m; cin >> n >> m;
    map <string, string> q1;
    for(int i = 1; i<=n ; i++){
        string tmp; cin >> tmp;
        q1.insert({tmp, to_string(i)});
        q1.insert({to_string(i), tmp});
    }

    for(int i = 1; i<=m; i++){
        string x; cin >> x;
        cout << q1[x] <<'\n';
    }
}