#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n; // 1 ~ N 까지의 수를 순서대로 입력받는다.
    vector <pair <int, int>> arr(n); // idx, 왼쪽에 수가 몇 개인지

    for(int i = 0; i < n; i++){
        cin >> arr[i].first; // 왼쪽에 있는 수 중에서 자신보다 큰 수 개수
    }
    // 1 ~ N(N <= 10)
    // 작은 수 부터 채우면 된다?

    for(int i = 0; i < n; i++){
        int cnt = 0; 
        for(int j = 0; j < n; j++){
            if(arr[i].first == cnt && arr[j].second == 0){
                arr[j].second = i+1;
                break;
            }
            else if(arr[j].second == 0) cnt++;
        }
    }
    for(auto x : arr) cout << x.second <<  " ";
}