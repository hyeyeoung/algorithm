#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
void init(){cin.tie(0); cout.tie(0); ios::sync_with_stdio(false);}
bool compare(pair <int, int>&x, pair <int, int>&y){
    if (x.first == y.first) return x.second < y.second;
    else return  x.first > y.first;}
int arr[500001] = {};
pair <int, int> check[8001] = {};
int main(){
    init();
    int n; cin>>n;
    double avg = 0; int max = 0; int middle = 0; int bound = 0; double sum = 0;
    for(int i = 0; i<n; i++){
        cin >> arr[i];
        sum += arr[i]; // 평균 구하기
        check[arr[i]+4000].first++;
        check[arr[i]+4000].second = arr[i];
    }
    
    double x = sum/n; avg = round(x) ;
    sort(check, check+8001,compare);
    max = check[0].first == check[1].first ? check[1].second : check[0].second;
    sort(arr, arr+n);
    bound = arr[n-1] - arr[0]; middle = arr[n/2];

    cout << (round(avg) + 0.0) <<'\n'<<middle<<'\n'<< max <<'\n'<< bound;
    
}