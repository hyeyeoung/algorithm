#include <iostream>
#include <vector>
using namespace std;

int n;
vector <pair<long long, long long>> v;

int main(){
    cin >> n;
    for(int i = 0; i<n; i++){
        int a, b; cin >> a >> b;
        v.push_back({a,b});
    }
    int cnt = 0;
    // 선택하는 세 가지의 점
    for(int i = 0; i < n - 2; i++){ // 1
        for(int j = i+1; j < n - 1; j++){ // 2
            for(int k = j+1; k < n; k++){ // 3
                pair <long long, long long> dot1 = v[i], dot2 = v[j], dot3 = v[k];
                long long one2two = (dot1.first - dot2.first) * (dot1.first - dot2.first) + (dot1.second - dot2.second) * (dot1.second - dot2.second);
                long long one2three = (dot1.first - dot3.first) * (dot1.first - dot3.first) + (dot1.second - dot3.second) * (dot1.second - dot3.second);
                long long two2three = (dot2.first - dot3.first) * (dot2.first - dot3.first) + (dot2.second - dot3.second) * (dot2.second - dot3.second);
                long long max = (one2two > one2three) ? (one2two > two2three ? one2two : two2three) : (one2three > two2three ? one2three : two2three);
                if(2*max == one2two+one2three+two2three) cnt++;  
            }
        }
    }
    cout << cnt;
}