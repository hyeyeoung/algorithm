#include <iostream>
#include <algorithm>
using namespace std;
int arr[501][501];
void init() { cin.tie(0); cout.tie(0); ios::sync_with_stdio(false); }

int sol(int n, int m){
    int one = 0, two = 0, three = 0, four = 0, five = 0;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m ; j++){
            if(j+4<=m) one = one > arr[i][j]+arr[i][j+1]+arr[i][j+2]+arr[i][j+3] ? one : arr[i][j]+arr[i][j+1]+arr[i][j+2]+arr[i][j+3]; // 1.1 가로 방향하나
            if(i+4<=n) one = one > arr[i][j]+arr[i+1][j] + arr[i+2][j]+ arr[i+3][j] ? one : arr[i][j]+arr[i+1][j] + arr[i+2][j]+ arr[i+3][j]; // 1.2
            if(j+2<=m && i+2<=n) two = two> arr[i][j]+arr[i+1][j]+arr[i][j+1]+arr[i+1][j+1]? two: arr[i][j]+arr[i+1][j]+arr[i][j+1]+arr[i+1][j+1];
            int tmp1 = 0, tmp2 = 0, tmp3 = 0, tmp4 = 0, tmp5=0, tmp6 =0;
            if(i+3<=n && j+2 <= m){
                tmp1 = arr[i][j]+arr[i+1][j]+arr[i+2][j]+arr[i+2][j+1];
                tmp1 = tmp1 > arr[i][j] + arr[i][j+1]+arr[i+1][j+1]+ arr[i+2][j+1] ? tmp1 : arr[i][j] + arr[i][j+1]+arr[i+1][j+1]+ arr[i+2][j+1];
                tmp1 = tmp1 > arr[i][j+1] + arr[i+1][j+1] + arr[i+2][j+1] + arr[i+2][j] ? tmp1 : arr[i][j+1] + arr[i+1][j+1] + arr[i+2][j+1] + arr[i+2][j];
                tmp1 = tmp1 > arr[i][j] + arr[i+1][j]+arr[i+2][j]+arr[i][j+1] ? tmp1 : arr[i][j] + arr[i+1][j]+arr[i+2][j]+arr[i][j+1] ; 
                ///////
                tmp3 = arr[i][j] + arr[i+1][j] + arr[i+1][j+1]+ arr[i+2][j+1];
                tmp3 = tmp3 > arr[i][j+1] + arr[i+1][j+1]+arr[i+1][j]+arr[i+2][j] ? tmp3 :arr[i][j+1] + arr[i+1][j+1]+arr[i+1][j]+arr[i+2][j];
                ////
                tmp5 = arr[i][j] + arr[i+1][j] +arr[i+1][j+1] + arr[i+2][j]; // ㅏ 
                tmp5 = tmp5 > arr[i][j+1] + arr[i+1][j+1] + arr[i+2][j+1] + arr[i+1][j] ? tmp5 : arr[i][j+1] + arr[i+1][j+1] + arr[i+2][j+1] + arr[i+1][j]; //
            }
            if(i+2<=n && j+3 <= m){
                tmp2 = arr[i+1][j]+arr[i+1][j+1]+arr[i+1][j+2] + arr[i][j+2];
                tmp2 = tmp2 > arr[i][j] + arr[i][j+1] + arr[i][j+2] + arr[i+1][j] ? tmp2 : arr[i][j] + arr[i][j+1] + arr[i][j+2] + arr[i+1][j];
                tmp2 = tmp2 > arr[i][j] + arr[i][j+1] + arr[i][j+2] + arr[i+1][j+2] ? tmp2 :arr[i][j] + arr[i][j+1] + arr[i][j+2] + arr[i+1][j+2];
                tmp2 = tmp2 > arr[i][j] + arr[i+1][j] + arr[i+1][j+1] + arr[i+1][j+2] ? tmp2 :arr[i][j] + arr[i+1][j] + arr[i+1][j+1] + arr[i+1][j+2];
                /////
                tmp4 = arr[i+1][j] + arr[i+1][j+1] + arr[i][j+1] + arr[i][j+2];
                tmp4 = tmp4 > arr[i][j] + arr[i][j+1] + arr[i+1][j+1] + arr[i+1][j+2] ? tmp4 : arr[i][j] + arr[i][j+1] + arr[i+1][j+1] + arr[i+1][j+2];
                ////
                tmp6 = arr[i][j] + arr[i][j+1] + arr[i+1][j+1] + arr[i][j+2]; // ㅜ
                tmp6 = tmp6 > arr[i+1][j] + arr[i+1][j+1] + arr[i+1][j+2] + arr[i][j+1] ? tmp6 : arr[i+1][j] + arr[i+1][j+1] + arr[i+1][j+2] + arr[i][j+1]; // ㅗ
            }
            tmp1 = tmp1 > tmp2 ? tmp1 : tmp2;
            tmp3 = tmp3 > tmp4 ? tmp3 : tmp4;
            tmp5 = tmp5 > tmp6 ? tmp5 : tmp6;
            three = three > tmp1 ? three : tmp1; 
            four = four > tmp3 ? four : tmp3; 
            five = five > tmp5 ? five : tmp5;
        }
    }
    int arr[5] = { one, two, three, four, five};
    sort(arr, arr+5);
    return arr[4];
}

int main(){
    init();
    int n, m;
    cin >> n >> m;

    for(int i = 0; i<n ; i++){
        for(int j = 0;j< m; j++) cin >> arr[i][j];
    }
    cout << sol(n, m);
    
}