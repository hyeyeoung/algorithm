/* 외판원 순회 */
// 1 -> 2 -> 3 -> 1
#include <iostream>
#include <algorithm>
using namespace std;

bool next_perm(int *arr, int n){ // 다음 순열 
    int i = n - 1;
    while(i > 0 && arr[i] <= arr[i-1]) i--;
    if(i<=0) return false;
    int j = n - 1;
    while(arr[j] <= arr[i-1]) j--;
    swap(arr[i-1], arr[j]);
    j = n - 1;
    while(i<j){
        swap(arr[i], arr[j]);
        i++; j--;
    }
    return true;
}

int main(){
    int n; cin >> n;
    int w[11][11] = {};
    int d[11] = {}; // 순서 정리
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> w[i][j];
        }
        d[i] = i; // d는 이제 방문 순서를 정리한 배열
    }
    int min = 100000000;
    do{
        bool ok = true;
        int sum = 0;
        for(int i = 0; i<n-1; i++){
            if(w[d[i]][d[i+1]] == 0)ok = false; 
            else sum += w[d[i]][d[i+1]];
        }
        if(ok && w[d[n-1]][d[0]] != 0){
            sum += w[d[n-1]][d[0]];
            if(min > sum) min = sum;
        }
    }while(next_perm(d, n));
    
    std::cout << min;
}