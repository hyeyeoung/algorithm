/** 절대값 힘**/
#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
bool COMP(pair< int, int> a, pair<int, int> b){
    if(a.second == b.second){
        return a.first > b.first;
        }
    else return a.second > b.second;
}

int main(){
    cin.tie(0); cout.tie(0); 
    ios::sync_with_stdio(false);
    priority_queue <pair<int, int>, vector<pair<int,int>>, greater<pair<int,int>>> arr;
    
    int T;
    cin >> T;

    while(T--){
        int proc;
        cin >> proc;
        if(proc==0){
            if (arr.size() == 0) cout << "0" << '\n';
            else {
            cout << arr.top().second << '\n';
            arr.pop();
            }
        }
        else{
            int tmpn = proc < 0 ? (proc * -1) : proc; 
            arr.push({tmpn, proc});
        }
    }
}