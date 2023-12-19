#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
bool compare(pair <int, int>& a, pair <int, int>& b){
    if(a.second == b.second) return a.first < b.first;
    else return a.second < b.second;
}

int main(){
    int n;
    cin >> n;
    vector <pair<int, int>> arr;

    for(int i = 0; i<n; i++){
        int a, b;
        cin >> a>> b;
        arr.push_back(make_pair(a,b));
    }
    sort(arr.begin(),arr.end(), compare);
    for(int i = 0; i<n; i++){
        cout << arr[i].first << " "<< arr[i].second<<'\n';
    }
}