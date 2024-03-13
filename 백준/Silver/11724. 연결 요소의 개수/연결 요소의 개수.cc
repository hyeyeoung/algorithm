#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector <int> arr[1001];
bool k[1001] = {};

void sol(int start){ // 평범한 dfs 를 구현
    k[start] = true;
    for(int i = 0; i< arr[start].size(); i++){
        int y = arr[start][i];
        if(!k[y]) sol(y);
    }
}

int main(){
    int n, m, count = 0; cin >> n >> m;
    for(int i = 0; i<m; i++){
        int a, b; cin >> a >> b;
        arr[a].push_back(b); arr[b].push_back(a);
    }
    for(int i = 1; i<=n; i++){
        if(!k[i]){
            sol(i);
            count++;
        }
    }
    cout << count;
}