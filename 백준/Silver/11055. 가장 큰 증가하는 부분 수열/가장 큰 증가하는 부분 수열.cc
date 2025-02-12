#include <iostream>
#include <vector>
using namespace std;
// 가장 긴 수열이 아닌 합이 가장 큰 수열임

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    vector<int> res(n); // 더하기 결과 저장

    for(int i = 0; i < n; i++)
        cin >> arr[i];
    
    res[0] = arr[0];
    int max = res[0];
    for(int i = 1; i < n; i++){
        // binary search로 찾기
        int j = i-1;
        bool c = false;
        int tmp = 0;
        while(j >= 0){
            if(arr[i] > arr[j]){
                tmp = tmp < res[j] ? res[j] : tmp;
                c = true;
            }
            j--;
        }
        if(!c)
            res[i] = arr[i];
        else
            res[i] = arr[i] + tmp;
        max = res[i] > max ? res[i] : max;
    }
    cout << max;
}

// 3 2 1