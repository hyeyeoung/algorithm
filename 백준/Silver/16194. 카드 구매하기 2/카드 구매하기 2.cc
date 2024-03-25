#include <iostream>
#include <algorithm>
using namespace std;

int n; 
int arr[1001] = {}; 
int dis[1001] = {}; // value
 
int main(){
    cin >> n; 
    for(int i = 1; i<=n ; i++) { cin >> arr[i]; dis[i] = 1000*10000;}

    for(int i = 1; i<=n; i++){ // 1부터 n까지 반복 실행
        for(int j = 1; j<=i; j++) // 1부터 I까지 아무것도 선택하지 않는 것과 i-j의 값을 선택하는 것을 비교함
        {
            dis[i] = min(dis[i], arr[j] + dis[i-j]);
        }
    }
    cout << dis[n];
}