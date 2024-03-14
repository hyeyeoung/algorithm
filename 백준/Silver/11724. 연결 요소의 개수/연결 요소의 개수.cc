#include <iostream>
#include <vector>
using namespace std;
int n, m;
vector <int>g[1001];
bool c[1001] = {};

void DFS(int x){
    c[x] = true;
    for(int i = 0; i<g[x].size();i++){
        int y = g[x][i];
        if(!c[y]) DFS(y);
    }
}

int main(){
    cin >> n >> m;
    for(int i = 0; i<m; i++){
        int e,v; cin >> e >> v;
        g[e].push_back(v); g[v].push_back(e);
    }
    int count = 0;
    for(int i = 1; i<=n; i++){
        if(!c[i]){count++; DFS(i);} 
    }
    cout << count;
}