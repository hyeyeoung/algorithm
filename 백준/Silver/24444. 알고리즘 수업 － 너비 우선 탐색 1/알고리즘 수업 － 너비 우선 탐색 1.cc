#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

int n, m, r;
vector <int> v[1000000];
bool arr[1000000] = {};
int dis[1000000] = {};

void bfs(int x){
    queue <int> q;
    q.push(x);
    arr[x] = true;
    dis[x] = 1;
    int cnt = 1;
    while(!q.empty()){
        x = q.front(); q.pop();
        sort(v[x].begin(), v[x].end());
        for(int i = 0; i<v[x].size(); i++){
            int next = v[x][i];
            if(!arr[next]){
                arr[next] = true;
                cnt++;
                dis[next] =  cnt;
                q.push(next);
            }
        }
    }
}

int main(){
    cin >> n >> m >> r;
    for(int i = 0; i< m; i++) {
        int a, b; cin >> a >> b;
        v[a].push_back(b); v[b].push_back(a);
    }
    
    bfs(r);

    for(int i = 1; i<=n; i++){
        cout << dis[i] <<'\n';
    }
}