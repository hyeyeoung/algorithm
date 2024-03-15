// bfs로 재도전
#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;
vector <int> g[20001];
int color[20001] = {};
bool bfs(int node, int c){
    color[node] = c;
    for(int i =0; i<g[node].size(); i++){
        int next = g[node][i];
        if(color[next]==0){
            if(bfs(next, 3 -c) == false) return false;
        }
        else if(color[next] == color[node]) return false;
    }
    return true;
}

int main(){
    int tc; cin >> tc;
    while(tc--){
        int v, e; // v = vertex개수, e = edge 개수
        cin >> v >> e;
        // 초기화 과정, 하나의 arr, vector를 여러번 재활용하기 때문
        for(int i = 1; i<= v; i++){ 
            color[i] = 0;
            g[i].clear(); 
        }
        for(int i = 0; i<e; i++){
            int a, b; cin >> a >> b;
            g[a].push_back(b); g[b].push_back(a); 
        }
        bool ok = true;
        for(int i = 1; i<=v; i++){
            if(color[i]== 0){
                if(bfs(i, 1) == false) ok = false;
            }
        }
        if(ok)cout << "YES\n";
        else cout << "NO\n";
    }
}