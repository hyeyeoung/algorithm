#include <iostream>
using namespace std;

int main(){
    int n; 
    cin >> n;
    
    int arr[100000];
    int res[100000][2] = {}; // 결과 배열

    for(int i = 0; i < n; i++) 
        cin >> arr[i];
    
    int max = 0;
    for(int i = 1; i < n; i++)
    {
        if(arr[i] > arr[i-1]){
            res[i][1] = 0;
            res[i][0] = res[i-1][0] + 1; 
        }
        else if(arr[i] < arr[i-1]) {
            res[i][0] = 0;
            res[i][1] = res[i-1][1] + 1;
        }
        else{
            res[i][0] = res[i-1][0] + 1;
            res[i][1] = res[i-1][1] + 1;
        }
        if(max < res[i][1])
            max = res[i][1];
        if(max < res[i][0])
            max = res[i][0];
    }
    cout << max+1;
}