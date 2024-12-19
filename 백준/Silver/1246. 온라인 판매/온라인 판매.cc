#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    vector <int> arr(m);
    for(int i = 0; i < m; i++)
        cin >> arr[i];
    
    sort(arr.begin(), arr.end());

    // 최대 판매 가격
    // 팔 수 있는 계란 수 확인
    // 전체 달걀 수 n개 본인 포함 몇 명 남았는지? -> 뒤에서 부터 개수를 세야겠지?
    // 2 7 8 10
    int x = 0, salePrice = 0;
    for(int i = 0; i < m; i++){
        // n개의 달걀.. 
        int restPerson = (m - i); // 본인 포함 팔 수 있는 달걀의 수(뒤에 남은 사람의 수)
        if(restPerson > n)
            restPerson = n; 
        
        if(salePrice < (restPerson * arr[i])){
            x = arr[i];
            salePrice = (restPerson * arr[i]);
        }
    }
    cout << x << " " << salePrice;
}