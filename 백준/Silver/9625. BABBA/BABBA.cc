#include <iostream>
#include <vector>
using namespace std;

int main(){
    int k; cin >> k;
    vector <pair<long, long>> arr(k+1);

    arr[0].first = 1; arr[0].second = 0;
    arr[1].second = 0; arr[1].second = 1;
    for(int i = 2; i<=k; i++) {
        arr[i].first = arr[i-1].first + arr[i-2].first;
        arr[i].second = arr[i-1].second + arr[i-2].second;
    }
    cout << arr[k].first <<" "<<arr[k].second;
}