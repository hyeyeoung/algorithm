#include <iostream>
#include <map>
using namespace std;

int main(){
    int a, b; 
    cin >> a >> b;

    map <int, int> s;
    for(int i = 0; i < a; i++){
        int x;
        cin>> x;
        s.insert({x, 0});
    }
    for(int i = 0; i < b; i++){
        int x;
        cin >> x;
        if(s.find(x) != s.end()) s.erase(s.find(x));
        else s.insert({x, 0});
    }
    cout << s.size();
}