#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0); cout.tie(0); ios::sync_with_stdio(false);
    int n, m;
    cin >> n >> m;
    vector <int> arr[n];

    for(int i = 0; i < n; i++){
        int x = 0;
        for(int j = 0; j < n; j++){
            int tmp;
            cin >> tmp;
            arr[i].push_back(x + tmp);
            x = arr[i][j];
        }
    }

    while(m--){
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        x1--,y1--,x2--,y2--;
        int res = 0;
        for(int i = x1; i <= x2; i++){
            if(y1 == 0) res += arr[i][y2];
            else res += (arr[i][y2] - arr[i][y1-1]);
        }
        cout << res <<'\n';
    }
}