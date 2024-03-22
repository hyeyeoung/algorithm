#include <iostream>
#include <map>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main(){
    cin.tie(0); cout.tie(0); ios::sync_with_stdio(false);
    int n, m;
    cin >> n >> m;
    map <string,int> a;
    for(int i = 0; i<n; i++){
        string k; cin >> k;
        a.insert({k,1});
    }
    vector <string> tmp;
    for(int i = 0; i < m; i++){
        string k; cin >> k;
        if(a[k] != 0){
            tmp.push_back(k);
        }
    }
    cout << tmp.size()<<'\n';
    sort(tmp.begin(), tmp.end());
    for(int i = 0; i<tmp.size(); i++) cout << tmp[i]<<'\n';
}