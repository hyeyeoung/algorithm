#include <iostream>
#include <set>
#include <map>
using namespace std;
struct Q{
    map<long, int> s;
    void input(long k){
        // s.insert(k);
        if(s.find(k) == s.end()){
            s.insert({k, 1});
        }
        else{
            s[k] ++;
        }
    }
    void output(int x){
        if (!s.empty()){
            if(x == -1){
                if(s.begin() -> second == 1) s.erase(s.begin() -> first);
                else if(s.begin() -> second > 1) s.begin() -> second--;
            }
            else if(x == 1){
                if((--s.end()) -> second == 1) s.erase((--s.end()) -> first);
                else if((--s.end()) -> second > 1) (--s.end()) -> second--;
            }   
        }
    }
    void print(){
        if(s.empty()) cout << "EMPTY\n";
        else cout << (--s.end()) -> first << " " << s.begin() -> first<< '\n';
        // for(auto it: s) cout << it.first << " " << it.second << '\n';
    }
};
int main(){
    cin.tie(0); cout.tie(0); ios::sync_with_stdio(false);
    int TC;
    cin >> TC;
    while(TC--){
        int t;
        cin >> t;
        Q q;
        for(int i = 0; i<t; i++){
            char a;
            long b;
            cin >> a >> b;

            if(a == 'I') q.input(b);
            else q.output(b);
        }
        q.print();
    }
}