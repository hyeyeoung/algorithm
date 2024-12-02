#include <iostream>
#include <vector>
using namespace std;
int cnt = 0, n;
bool Visit[50];
vector <int> arr[50];
int del;

void dfs(int x){
    Visit[x] = true;
    for(int i = 0; i < arr[x].size(); i++){
        int y = arr[x][i];
        if(!Visit[y] && y != del){
            if(arr[y].size() == 0) cnt++;
            else dfs(y);
        }
        else if(y == del && arr[x].size() == 1) cnt++;
    }
}

int main(){
    cin >> n;
    int parent = 0;
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if(x == -1) 
            parent = i;
        else
            arr[x].push_back(i);
    }
    cin >> del;
    if(del == parent) {
        cout << 0;
        return 0;
    }
    dfs(parent);
    cout << cnt;
}