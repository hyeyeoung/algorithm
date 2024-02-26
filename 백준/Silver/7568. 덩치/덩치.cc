#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n; cin>>n;
    pair <int, int> arr[51] ={};
    int rank[51]={};
    for(int i=0; i<n; i++) {
        cin >> arr[i].first >>arr[i].second;
    }
    int ranks = 1;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            if(arr[i].first < arr[j].first && arr[i].second < arr[j].second) ranks ++;
        }
        cout << ranks <<" ";
        ranks = 1;
    }

}