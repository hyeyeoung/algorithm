#include <iostream>
#include <vector>
using namespace std;
vector<int> b;
void go(vector <int> &a, int i, int cnt){
    if(cnt == 6){
        for(int i = 0; i<6; i++) cout << b[i]<<' ';
        cout <<'\n';
        return;
    }
    if(i == a.size()) return;
    b.push_back(a[i]);
    go(a, i+1, cnt+1);
    b.pop_back();
    go(a, i+1, cnt);
}
int main(){
    while(true){
        int n; cin >> n;
        if(n == 0) break;
        vector <int> a(n);
        for(int i = 0; i<n; i++) cin >> a[i];
        go(a,0,0);
        cout <<'\n';
    }
}