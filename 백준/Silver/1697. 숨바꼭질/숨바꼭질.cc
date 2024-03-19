#include <iostream>
#include <queue>
using namespace std;
int dis[100001] = {};
bool check[100001] = {};
int n, k; // n이 K에 도달해야한다.
int Max = 100000;

void hiding(){
    queue <int> q;
    q.push(n); 
    check[n] = true;

    while(!q.empty()){
        int loc = q.front();
        q.pop();
        if(loc == k) return;
        if(loc -1 >= 0 && !check[loc-1]){
            check[loc-1] = true;
            dis[loc-1] = dis[loc] + 1;
            q.push(loc-1);
        }
        if(loc+1 <= Max && !check[loc+1]) { 
            check[loc+1] = true;
            dis[loc+1] = dis[loc] + 1;
            q.push(loc+1);
        }
        if(loc*2 <= Max && !check[loc*2]){
            check[loc*2] = true;
            dis[loc*2] = dis[loc] + 1;
            q.push(loc*2);
        }
    }
}

int main(){
    cin >> n >> k;
    hiding();
    cout << dis[k];
}