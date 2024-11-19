#include <iostream>
#include <cstring>
using namespace std;
int arr[100][10] = {};
int dx[4] = {0, -1, 0, 1};
int dy[4] = {1, 0, -1, 0};

int main(){
    int r1, c1, r2, c2; 
    cin >> r1 >> c1 >> r2 >> c2;

    int Vi = 0, Vj = 0; // 가상의 인덱스로 생각하면 편리
    int m = -1, n = 1, cnt = 1, real_cnt = 0, idx = 0;
    
    while(true){
        if(arr[0][0] != 0 && Vi > r2 && Vj > c2) break;

        if(cnt == real_cnt){
            real_cnt = 0;
            idx = (idx+1) % 4;
            if(idx == 0 || idx == 2) cnt++;
        }
        if(Vi >= r1 && Vi <= r2 && Vj >= c1 && Vj <= c2)
            arr[Vi - r1][Vj - c1] = n;
        Vi = Vi + dx[idx];
        Vj = Vj + dy[idx];
        n++;
        real_cnt++;
    }
    
    for(int i = 0; i < r2 - r1 + 1; i++){
        for(int j = 0; j < c2 - c1 + 1; j++) 
            m = m < arr[i][j] ? arr[i][j] : m;
    }

    for(int i = 0; i < r2 - r1 + 1; i++){
        for(int j = 0; j < c2 - c1 + 1; j++) {
            cout.width(to_string(m).size());
            cout << arr[i][j] << " ";
        }
        cout << '\n';
    }
}