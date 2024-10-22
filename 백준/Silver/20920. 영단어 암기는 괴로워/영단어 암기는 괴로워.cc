#include <iostream>
#include <map>
#include <cstring>
#include <algorithm>
#include <vector>
using namespace std;
int n, m;
bool compare(pair<string, int>& a, pair<string, int>& b){
    if(a.second != b.second) return a.second > b.second;
    else{
        if(a.first.size() != b.first.size()) return a.first.size() > b.first.size();
        else{
            return  a.first < b.first;
        }
    }
} 
int main(){
    cin >> n >> m;
    map<string, int> a;

    for(int i = 0 ; i<n; i++){
        string tmp;
        cin >> tmp;
        if(tmp.size() < m) continue;
        if(a.count(tmp) != 1) a[tmp] = 1;
        else a[tmp]++;
    }
    vector <pair<string, int>> v(a.begin(), a.end());
    sort(v.begin(), v.end(), compare);
    for(auto k:v) cout << k.first << "\n";
}