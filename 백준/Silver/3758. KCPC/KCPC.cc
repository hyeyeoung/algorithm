#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct team{
    int id, totals = 0, cnt = 0, last = 0;
};

bool compare(team &a, team &b){
    if(a.totals != b.totals)
        return a.totals > b.totals;
    else{
        if(a.cnt != b.cnt)
            return a.cnt < b.cnt;
        else{
            return a.last < b.last;
        }
    }
}
int sum(vector <int> &arr){
    int x = 0;
    for(auto k: arr) x += k;
    return x;
}

int main(){
    int T;
    cin >> T;
    while(T--){
        int n, k, t, m; // 팀, 문제,id, 로그
        cin >> n >> k >> t >> m;
        
        vector <team> arr(n+1);
        vector <vector<int>> board(n+1, vector <int> (k, 0));
        for(int i = 1; i<=n; i++) 
            arr[i].id = i;

        for(int i = 0; i < m; i++){
            int idx, j, s;
            cin >> idx >> j >> s;
            if(board[idx][j-1] != 0) board[idx][j-1] = board[idx][j-1] > s ? board[idx][j-1] : s;
            else board[idx][j-1] = s;

            arr[idx].cnt++;
            arr[idx].last = i;
        }

        for(int i = 1; i <= n; i++) arr[i].totals = sum(board[i]);
        sort(arr.begin()+1, arr.end(), compare);
        int prize = 1;
        for(int i = 1; i <= n; i++){
            if(arr[i].id == t) {
                cout << prize << '\n';
                break;
            }
            prize++;
        }
    }
}