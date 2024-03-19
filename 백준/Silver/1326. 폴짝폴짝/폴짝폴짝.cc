#include <iostream>
#include <queue>
using namespace std;

pair<int, bool> arr[10001] = {};
int distant[10001] = {}; // 거리배열
int n, a, b; 
int result = 1000000001; // 최소 값 구하기

void go(){ // 출발지 도착지
    queue <int> q; 
    q.push(a); // 출발 인덱스를 큐에 저장
    arr[a].second = true;

    while(!q.empty()){ // 왜 큐 사용? 
        int tmp = q.front(); q.pop(); 
        if(tmp == b) return;
        for(int i = tmp + arr[tmp].first; i <= n; i += arr[tmp].first ){
            if(arr[i].second) continue;
            arr[i].second = true;
            distant[i] = distant[tmp] +1;
            q.push(i);
        }
        for(int i = tmp - arr[tmp].first; i>=1; i-=arr[tmp].first){
            if(arr[i].second) continue;
            arr[i].second = true;
            distant[i] = distant[tmp]+1;
            q.push(i);
        }
    }
}

int main(){
    cin >> n;
    for(int i = 1; i<=n; i++) cin >> arr[i].first;
    cin >> a >> b; // a->b로 이동함
    go();
    if(distant[b]>0) cout << distant[b];
    else cout << -1;
}