#include <bits/stdc++.h>
using namespace std;

int sols(vector <string> &arr, int n)
{
    int res = arr[0].size() - 1; // 모든 문자열의 길이는 동일하다.
    // 일단 substr로 풀이해보기
    unordered_map <string, int> m; // 중복 검사
    while(true){
        bool x = true;
        // 배열 문자열 잘라서 넣기
        m.clear();

        for(int i = 0; i < n; i++){
            string tmp = arr[i].substr(res);
            if(m.find(tmp) != m.end()){
                m[tmp]++;
            }
            else{
                m[tmp] = 1;
            }
            if(m[tmp] > 1){
                x = false;
                break;
            }
        }
        if(x) 
            break;
            res--;
    }
    return arr[0].size() - res;
}
int main(){
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    vector <string> arr(n);
    
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    
    cout << sols(arr, n);
}