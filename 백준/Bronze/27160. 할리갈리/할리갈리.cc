#include <iostream>
#include <cstring>
using namespace std;

int main(){
    int n; cin >> n;
    int arr[4] = {};
    for(int i = 0; i<n; i++){
        string a;
        int num;
        cin >> a >> num;
        if(a == "STRAWBERRY") arr[0] += num;
        else if(a == "BANANA") arr[1] += num;
        else if(a == "LIME") arr[2] += num;
        else if(a == "PLUM") arr[3] += num;
    }
    bool ok = false;
    for(int i = 0; i<4; i++){
        if(arr[i] == 5) ok = true;
    }
    if(ok) cout << "YES";
    else cout <<"NO";
}