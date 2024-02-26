#include <iostream>
#include <queue>
using namespace std;

int main(){
    int tc; cin>>tc;
    while(tc--){
        int n,m;
        cin >> n >> m;
        queue <pair<int,int>> q;
        int high = 0;
        for(int i = 0; i<n; i++){
            pair <int, int> tmp;
            cin >> tmp.first; tmp.second = i;
            q.push(tmp); 
            high = high > tmp.first ? high : tmp.first;
        }
        int out_count = 1;
        while(q.size()){
            if(q.front().first >= high) { // 가장 높은 중요도와 앞의 값이 동일?
                if(q.front().second == m){
                    break;
                }
                else {
                    out_count++;
                    q.pop();
                    high = 0;
                    for(int i = 0; i<q.size(); i++){ 
                        pair<int, int> t = q.front(); q.pop(); q.push(t); 
                        high = high > t.first ? high : t.first;
                    }
                }
            }
            else{
                pair<int, int> a = q.front();
                q.pop();
                q.push(a);
            }
        }
        cout << out_count<<"\n";
    }
}