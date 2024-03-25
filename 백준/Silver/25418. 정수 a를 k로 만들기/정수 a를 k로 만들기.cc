#include <iostream>
#include <queue>
using namespace std;
int a, k;
int dis[1000001] = {};
bool ok[1000001] = {};
void go(){
    queue <int> q;
    ok[a] = true;
    q.push(a);

    while(!q.empty()){
        int x = q.front(); q.pop();
        if(x+1 <= k && !ok[x+1]){
            q.push(x+1);
            ok[x+1] = true;
            dis[x+1] = dis[x]+1;
        }
        if(x*2 <= k && !ok[2*x]){
            q.push(x*2);
            ok[x*2] = true;
            dis[x*2] = dis[x] + 1;
        }
    }
}

int main(){
    cin >> a >> k;
    go();
    cout << dis[k];
}