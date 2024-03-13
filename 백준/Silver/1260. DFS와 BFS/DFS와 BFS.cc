#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;
int n, m, v;
// dfs
vector <int> dfss[1001];
bool check1[1001] = {};
// bfs
vector <int> bfs_v[1001];
bool check2[1001] = {};
queue <int> q;

void dfs(int x){
    cout << x << " ";
    check1[x] = true;
    sort(dfss[x].begin(), dfss[x].end());
    for(int i = 0; i < dfss[x].size();i++){
        int y = dfss[x][i];
        if(!check1[y]) dfs(y);
    }
}

void bfs(int x){
    check2[x] = true; q.push(x);
    while(!q.empty()){
        int y = q.front(); q.pop();
        cout << y <<" ";
        sort(bfs_v[y].begin(), bfs_v[y].end());
        for(int i = 0; i < bfs_v[y].size(); i++){
            int k = bfs_v[y][i];
            if(!check2[k]){
                check2[k] = true;
                q.push(k);
            }
        }
    }
}

int main(){
    cin >> n >> m >> v;
    for(int i = 0; i<= m; i++){
        int a, b; cin >> a >> b;
        dfss[a].push_back(b); dfss[b].push_back(a);
        bfs_v[a].push_back(b); bfs_v[b].push_back(a);
    }
    dfs(v); 
    cout <<'\n';
    bfs(v);
}