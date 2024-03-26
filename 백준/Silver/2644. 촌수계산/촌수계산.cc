#include <iostream>
#include <queue>
using namespace std;

int n, m, from, to;
int ok[101] = {};
int dis[101][101] = {};
queue <int> p;

void go(int x){
    p.push(x);
    while(!p.empty()){
        int x = p.front() ;
        p.pop();
        for(int i = 1; i <= n; i++){
            if(dis[x][i] != 0 && !ok[i]){
                p.push(i);
                ok[i] = ok[x] + 1;
            }
        }
    }
}

int main(){
    cin >> n; 
    cin >> from >> to;
    cin >> m;

    for(int i = 1; i<=m; i++){
        int a,b; cin >> a >> b;
        dis[a][b] = dis[b][a] = 1;
    }
    go(from);

    if(ok[to] !=0) cout << ok[to];
    else cout << -1;
}