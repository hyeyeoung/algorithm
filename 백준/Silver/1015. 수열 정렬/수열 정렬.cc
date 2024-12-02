#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector <pair<int, int>> arr(n); // first -> a 배열

    for(int i = 0; i < n; i++){
        cin >> arr[i].first;
        arr[i].second = i;
    }
    sort(arr.begin(), arr.end());

    vector <int> p(n);
    for(int i = 0; i < n; i++) {
        p[arr[i].second] = i;    
    }
    for(auto x: p) cout << x << " ";
}