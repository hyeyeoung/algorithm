#include <iostream>
#include <algorithm>
using namespace std;

pair <int, int> arr[100000] = {};
bool Compare(pair<int, int> &a, pair<int, int> &b){
    if(a.second == b.second) return a.first < b.first;
    return b.second > a.second;
}

int main(){
    // 8 9, 4 8, 7 8, 
    cin.tie(0); cout.tie(0); ios::sync_with_stdio(false);
    int n; cin >> n;
    for(int i = 0; i<n; i++) cin >> arr[i].first >> arr[i].second; // N 소요
    sort(arr,arr+n, Compare); // sort를 하구
    int cnt = 1; // 가능 회의 갯수 세기
    int start = arr[0].second;
    for(int i = 1; i<n; i++){ // 시작점... 
        if(start <= arr[i].first){
            cnt++;
            start = arr[i].second;
        }
    }
    cout << cnt;
}