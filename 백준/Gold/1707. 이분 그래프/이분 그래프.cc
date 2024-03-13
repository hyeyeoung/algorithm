#include <iostream>
#include <vector>
using namespace std;
vector <int> arr[20001];
int color[20001] = {};

void dfs(int x, int col){
    color[x] = col;
    for(int i = 0; i<arr[x].size(); i++){
        int next = arr[x][i];
        if(color[next] == 0){
            dfs(next, 3 - col);
        }
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        int v, e; cin >> v >> e;
        for(int i = 1; i<=v; i++){
            color[i] = 0;
            arr[i].clear();
        }
        for(int i = 0; i<e; i++) {
            int a, b; cin >> a >> b;
            arr[a].push_back(b); arr[b].push_back(a);
        }
        for(int i = 1; i <= v; i++){
            if(color[i] == 0){
                dfs(i, 1);
            }
        }
        bool ok = true;
        for(int i = 1; i<= v; i++){
            for(int j = 0; j<arr[i].size(); j++){
                int k = arr[i][j];
                if(color[i] == color[k]) ok = false;
            }
        }

        if(ok) cout << "YES\n";
        else cout << "NO\n";
    }
}