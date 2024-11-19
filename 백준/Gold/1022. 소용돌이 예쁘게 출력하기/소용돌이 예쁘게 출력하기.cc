#include <iostream>
#include <cstring>
using namespace std;
int arr[100][10] = {};
int dx[4] = {0, -1, 0, 1};
int dy[4] = {1, 0, -1, 0};

int main(){
    int r1, c1, r2, c2; 
    cin >> r1 >> c1 >> r2 >> c2;

    int starti = r1 < 0 ? -1*r1 : r1;
    int startj = c1 < 0 ? -1*c1 : c1;

    int Vi = 0, Vj = 0; // 가상의 인덱스로 생각하면 편리

    int m = -1, n = 1, cnt = 1, real_cnt = 0, idx = 0;
    // 0, 0 ~ 
    
    while(true){
        if(arr[0][0] != 0 && Vi > r2 && Vj > c2) break;

        if(cnt == real_cnt){
            real_cnt = 0;
            idx = (idx+1) % 4;
            if(idx == 0 || idx == 2) cnt++;
        }
        // cout << Vi << " " << Vj << '\n';
        // cout << n <<'\n';
        if(Vi >= r1 && Vi <= r2 && Vj >= c1 && Vj <= c2){
            if(r1 > 0 && c1 > 0) arr[Vi - starti][Vj - startj] = n;
            else if(r1 > 0 && c1 <= 0) arr[Vi - starti][Vj + startj] = n;
            else if(r1 <= 0 && c1 > 0) arr[Vi + starti][Vj - startj] = n;
            else if(r1 <= 0 && c1 <= 0) arr[Vi + starti][Vj + startj] = n;
        }
        Vi = Vi + dx[idx];
        Vj = Vj + dy[idx];
        n++;
        real_cnt++;
    }
    // cout << m << endl;
    
    for(int i = 0; i < r2 - r1 + 1; i++){
        for(int j = 0; j < c2 - c1 + 1; j++) m = m < arr[i][j] ? arr[i][j]:m;
    }
        for(int i = 0; i < r2 - r1 + 1; i++){
        for(int j = 0; j < c2 - c1 + 1; j++) {
            cout.width(to_string(m).size());
            cout << arr[i][j] << " ";
        }
        cout << '\n';
    }
}