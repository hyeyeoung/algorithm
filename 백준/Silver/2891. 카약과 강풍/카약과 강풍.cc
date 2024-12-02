#include <iostream>
#include <vector>
using namespace std;
// 출발 할 수 없는 팀 개수를 구한다
int main(){
    int n, s, r; // 팀 개수, 카약이 손상된 팀 수, 더 가져온 팀 수
    cin >> n >> s >> r;

    vector <int> arr(n+1, 1);
    
    for(int i = 0; i < s; i++){
        int idx;
        cin >> idx;
        arr[idx]--;
    } // 카약 빼기
    for(int i = 0; i < r; i++){
        int idx;
        cin >> idx;
        arr[idx]++;
    } // 추가 카약

    int cnt = 0; // 출전 불가 

    for(int i = 1; i <= n; i++){
        if(arr[i] > 0) continue;
        if(1 <= i-1 && i-1 <= n) {
            if(arr[i-1] > 1){
                arr[i-1]--;
                continue;
            }
        }
        if(1 <= i+1 && i+1 <= n){
            if(arr[i+1] > 1){
                arr[i+1]--;
                continue;
            }
        }
        cnt++;
    }
    cout << cnt;
}