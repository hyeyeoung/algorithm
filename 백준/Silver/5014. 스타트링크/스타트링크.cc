#include <iostream>
#include <queue>
using namespace std;

int arr[1000000] = {};
int f, s, g, u, d;

void elevator(){
    queue <int> q;
    q.push(s);
    while(!q.empty()){
        int loc = q.front();
        q.pop();
        
        int uloc = loc + u;
        if(uloc >= 1 && uloc <= f && arr[uloc] == 0){
            arr[uloc] = arr[loc]+1;
            q.push(uloc);
        }
        int dloc = loc - d;
        if(dloc >= 1 && dloc <= f && arr[dloc] == 0){
            arr[dloc] = arr[loc] + 1;
            q.push(dloc);
        }
    }
}

int main(){
    cin >> f >> s >> g >> u >> d;
    if (s == g) {cout << 0; return 0;}
    arr[s] = 1;
    elevator();
    if(arr[g] == 0) cout << "use the stairs";
    else  cout << arr[g]-1;
}