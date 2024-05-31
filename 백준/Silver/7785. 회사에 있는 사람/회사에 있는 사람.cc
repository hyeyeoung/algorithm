#include <iostream>
#include <map>
#include <cstring>
using namespace std;

int main(){
    int n; cin >> n;
    map <string, bool> list;
    for(int i = 0; i<n; i++){
        string name, enter;
        cin >> name >> enter;

        if(enter == "enter") list[name] = true;
        else if(enter == "leave") list[name] = false;
    }

    for(auto rit = list.rbegin(); rit != list.rend(); ++rit){
        if(rit -> second) cout << rit->first <<'\n';
    }
}