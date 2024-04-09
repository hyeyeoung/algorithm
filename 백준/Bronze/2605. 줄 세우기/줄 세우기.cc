#include <iostream>
#include <vector>
using namespace std;
int n;

int main(){
    cin >> n;
    vector <int> v;
    for(int i = 1; i<=n; i++){
        int tmp; cin >> tmp;
        v.insert(v.begin()+tmp, i);
    }
    for(int i = v.size()-1; i>=0; i--) cout << v[i] <<" ";
}