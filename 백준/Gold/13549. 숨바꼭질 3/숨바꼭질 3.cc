#include <iostream>
#include <deque>
#include <cstring>
using namespace std;
int n, k;
int arr[100001] = {};
int Max = 100000;
void hiding3(){
    memset(arr,-1,sizeof(arr));

    deque <int> q;
    q.push_back(n); // 현재 위치 출력
    arr[n] = 0;
    while(!q.empty()){
        int cmp = q.front(); q.pop_front();
        // 순간이동
        if(cmp*2 <= Max && arr[cmp*2]==-1) {
            q.push_front(cmp*2);
            arr[cmp*2] = arr[cmp];
        }
        if(cmp - 1 >= 0 && arr[cmp-1] == -1){
            q.push_back(cmp-1);
            arr[cmp-1] = arr[cmp]+1;
        }
        if(cmp+1 <= Max && arr[cmp+1] == -1){
            q.push_back(cmp+1);
            arr[cmp+1] = arr[cmp]+1;
        }
    }
}

int main(){
    cin >> n >> k;
    hiding3();
    cout << arr[k];
}