#include <iostream>
using namespace std;
int arr[257] = {};
int main(){
    int n, m, b;
    cin >> n >> m >> b;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m;j++){
        int a; cin >> a;
        arr[a]++;        } 
           }
    int result_time=50000000; int result_heigh = 0;
    for(int i = 0; i<257; i++){ // i는 기준점
        int sub_block = 0;
        int sum_block = 0;
        int tmp = b;
        for(int j = 0; j<i;j++){ sum_block += arr[j] * (i - j);} // 추가 블럭 갯수
        for(int j = i; j < 257; j++){ sub_block += arr[j] * (j - i); } // 깍을 블럭 갯수 
        if(sum_block <= sub_block + b){
            int time = sum_block + sub_block*2;
            if(time <= result_time){ result_time = time; result_heigh = i;}
        }
    }
    cout << result_time <<" "<< result_heigh;
}