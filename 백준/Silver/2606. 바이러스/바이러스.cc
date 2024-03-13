#include <iostream>
#include <vector>
using namespace std;
vector <int> arr[101] = {};
bool check[101] = {};
int result = 0;
void dfs(int x){
    check[x] = true;
    for(int i = 0; i<arr[x].size(); i++){
        int y = arr[x][i];
        if(!check[y]){
            result += 1;
            dfs(y);
        }
    }
}
int main(){
    int v, e; cin >> v >> e;

    for(int i = 0; i<e; i++){
        int a, b; cin >> a >> b;
        arr[a].push_back(b); arr[b].push_back(a);
    }
    dfs(1);
    cout << result;
}