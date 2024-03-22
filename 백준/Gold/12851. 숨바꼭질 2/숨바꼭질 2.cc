#include <iostream>
#include <queue>
using namespace std;
int arr[100001] = {};
int dis[100001] = {};
bool ok[100001] = {};
int n, k;
int Max = 100001;
int result = 0;
int ans = 0;
void hiding(){
    queue <pair<int,int>> q;
    q.push({n,0});
    ok[n] = true;

    while(!q.empty()){
        int cmp = q.front().first;
        int time = q.front().second;
        ok[cmp] = true;
        q.pop();
        if(result > 0 && cmp == k && ans == time){
            result++;
        }
        if(result == 0 && cmp == k){
            ans = time;
            result++;
        }
        if(cmp + 1 < Max && !ok[cmp+1]){
            q.push({cmp+1, time+1});
            dis[cmp+1] = dis[cmp] + 1;
        }
        if(cmp - 1 >= 0 && !ok[cmp-1]){
            q.push({cmp-1, time+1});
            dis[cmp-1] = dis[cmp]+1;
        }
        if(cmp*2 < Max && !ok[cmp*2]){
            q.push({2*cmp,time+1});
            dis[2*cmp] = dis[cmp]+1;
        }
    }
}

int main(){
    cin >> n >> k;
    hiding();
    // for(int i = 0; i<=30; i++){
    //     cout << dis[i] << " ";
    // }
    cout << ans << '\n';
    cout << result;
}