#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n, point;
    cin >> n >> point;
    vector <int> arr(n);
    int num[100] = {};
    for(int i = 0; i < n; i++){
        int p, l;
        cin >> p >> l; // 각 과목을 신청한 사람, 과목 수강 인원
        int line = 36, idx = 0;

        for(int j = 0; j < p; j++){
            cin >> num[j];
        }
        sort(num, num + p);

        if(p >= l)
            arr[i] = num[p - l];
        else
            arr[i] = 1;
    }

    int cnt = 0;
    sort(arr.begin(), arr.end());
    for(int i = 0; i < n; i++){
        if(point - arr[i] >= 0){
            point -= arr[i];
            cnt++;
        }
    }
    cout << cnt;
}