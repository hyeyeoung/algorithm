#include <bits/stdc++.h>
using namespace std;

int bns(int l, int n, vector<int> &arr){
    int idx = 0;
    for(int i = 1; i <= l; i++){
        if(arr[i] == n) return 0; // 반복 종료
        if(arr[i-1] < n && n < arr[i]) 
        {
            idx = i;
            break;
        } // 사이에 들어가는 값을 찾는다..
    }
    int before = (n - (arr[idx-1]+1));
    int after = ((arr[idx]-1) - n);
    return before * after + (before + after);
}
int main(){
    int l, n;
    cin >> l;
    vector <int> arr(l+1); // 정렬해야하는 배열
    for(int i = 1; i <= l; i++)
    {
        cin >> arr[i];
    }
    cin >> n;
    sort(arr.begin(), arr.end());
    cout << bns(l, n, arr); // 정답
}