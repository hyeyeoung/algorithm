#include <iostream>
#include <bitset>
#include <string>
using namespace std;

class Set{
private: 
    bitset <21> set; // 비트셋 하나 선언

public:
    void Add(int num){
        set = set.to_ulong() | (1 << num);
    }
    void Remove(int num){
        set = set.to_ulong() & ~(1 << num);
    }
    bool Check(int num){
        if(set.to_ulong() & (1 << num)) return true;
        else return false;
    }
    void Toggle(int num){
        set = set.to_ulong() ^ (1 << num);
    }
    void All(){
        set.set();
    }
    void Empty(){
        set.reset();
    }
};
int main(){
    cin.tie(0); cout.tie(0); ios::sync_with_stdio(false);
    int n; cin >> n;
    Set bit = Set();
    while(n--){
        string str; cin >> str;
        if(str == "add"){
            int num; cin >> num;
            bit.Add(num);
        }
        else if(str == "remove"){
            int num; cin >> num;
            bit.Remove(num);
        }
        else if(str == "check"){
            int num; cin >>num;
            if(bit.Check(num)) cout << 1<<'\n';
            else cout <<0<<'\n';
        }
        else if(str == "toggle"){
            int num; cin >> num;
            bit.Toggle(num);
        }
        else if(str == "all"){ bit.All(); }
        else if(str == "empty") { bit.Empty(); }
    }
}