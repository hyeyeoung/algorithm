#include <iostream>
#include <queue>
#include <vector>
using namespace std;
vector <int> arr[100001];
vector <int> parent(100001);
int n;
void s11725(){
    queue<int> q;
    q.push(1);
    while(!q.empty()){
        int x = q.front();
        q.pop();
        for(int i = 0; i<arr[x].size(); i++){
            if(parent[arr[x][i]] != 0) continue;
            parent[arr[x][i]] = x;
            q.push(arr[x][i]); 
        }
    }
    for(int i = 2; i <= n; i++){
        cout << parent[i] << '\n';
    }
}

int main(){
    cin >> n;
    for(int i = 1; i<n; i++){
        int a, b;
        cin >> a >> b;
        arr[a].push_back(b);
        arr[b].push_back(a);
    }
    s11725();
}