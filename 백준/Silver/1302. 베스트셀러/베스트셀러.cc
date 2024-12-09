#include <iostream>
#include <map>
#include <cstring>
using namespace std;

int main(){
    int n;
    cin >> n;
    map<string, int> m;
    // map<string, int> :: iterator iter = m.begin();
    int max = 0;
    while(n--){
        string str;
        cin >> str;
        m[str]++;
        if(max < m[str]) max = m[str];
    }

    for(auto iter = m.begin(); iter != m.end(); ++iter){
        // cout << iter -> first << " " << iter -> second << endl;
        if(iter->second == max) {
            cout << iter->first;
            break;
        }
    }
}