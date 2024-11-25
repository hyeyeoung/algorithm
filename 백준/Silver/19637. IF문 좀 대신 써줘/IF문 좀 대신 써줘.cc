#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

int main(){
    cin.tie(0); cout.tie(0); ios::sync_with_stdio(false);
    int n, m; // 칭호의 개수, 캐릭터 개수
    cin >> n >> m;
    vector<pair<string, long long>> arr(n);

    for(int i = 0; i < n; i++) 
        cin >> arr[i].first >> arr[i].second;
    
    for(int k = 0; k < m; k++){
        long long level;
        cin >> level;
        
        int i = 0, j = n-1;
        int result = 0;
        while(i <= j){
            int mid = (i+j) / 2;
            if(level <= arr[mid].second) {
                result = mid;
                j = mid - 1;
            }
            else if(level > arr[mid].second) i = mid + 1;
        }
        cout << arr[result].first <<  '\n';
    }
}