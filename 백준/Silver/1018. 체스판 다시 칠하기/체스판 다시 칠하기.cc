#include <iostream>
using namespace std;
int tmp_arr[51][51]={};

int main(){
    int n, m;
    cin >> n >> m;
    for(int i = 1; i <= n; i++){
        char tmp_c[52];
        cin >> tmp_c;
        for(int j = 1; j <= m; j++){
            tmp_arr[i][j] = tmp_c[j-1];
        }
    }// 입출력 받기
    int result = 300000;

    for(int i = 1; i+7<=n; i++){
        for(int j = 1; j+7<=m;j++){
            int tmp1 = 0; int tmp2 = 0;
            for(int ii = i; ii <= i+7; ii++){
                for(int jj = j; jj <= j+7; jj++){
                    // [1][1] 그대로 하는 경우!
                    int a = tmp_arr[i][j] == 66 ? 66 : 87;
                    if(((ii % 2==0 && jj % 2 == 0) || (ii % 2 != 0 && jj % 2 != 0)) && tmp_arr[ii][jj] != a){
                        tmp1++;
                    }
                    else if(((ii % 2 != 0 && jj % 2 == 0) || (ii % 2 == 0 && jj % 2 != 0)) && tmp_arr[ii][jj] == a){
                        tmp1++;
                    }
                    // 원래 [1][1]의 반대가 더 적은 경우
                    a = a == 66 ? 87 : 66;
                    if(((ii % 2 == 0 && jj % 2 == 0) || (ii % 2 != 0 && jj % 2 != 0)) && tmp_arr[ii][jj] != a){
                        tmp2++;
                    }
                    else if(((ii % 2 != 0 && jj % 2 == 0) || (ii % 2 == 0 && jj % 2 != 0)) && tmp_arr[ii][jj] == a){
                        tmp2++;
                    }
                }
            }
            tmp1 = tmp1 > tmp2 ? tmp2 : tmp1;
            result = tmp1 > result ? result : tmp1;
        }
    }
    cout <<result;
}