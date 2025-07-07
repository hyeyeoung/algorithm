#include <iostream>
#include <deque> // 덱
using namespace std;
int n, m, r; // 배열 크기 n, m, 회전 수 r
int rawArr[301][301];
int res[301][301]; // 결과 배열

void Rotation(deque<int> &dq){
    for(int i = 0; i < r; i++){
        int tmp = dq.front();
        dq.pop_front();
        dq.push_back(tmp); 
    }
}// 덱 돌리기

int main(){
    cin >> n >> m >> r;
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++)
            cin >> rawArr[i][j];
    }
    // 껍질 개수 연산하기...
    int minN = n > m ? m : n; 
    for(int k = 0; k < minN / 2; k++){
        deque<int> tmp; // 덱 선언
        for(int j = k; j < (m - k) - 1; j++)
            tmp.push_back(rawArr[k][j]);
        
        for(int i = k; i < (n - k); i++)
            tmp.push_back(rawArr[i][(m - k) - 1]);
        
        for(int j = (m - k) - 2; j >= k; j--)
            tmp.push_back(rawArr[(n-k-1)][j]);
        
        for(int i = (n - k - 2); i > k; i--)
            tmp.push_back(rawArr[i][k]);
        Rotation(tmp);

        // 여기서 tmp에 따라서 하기
        for(int j = k; j < (m-k-1); j++){
            res[k][j] = tmp.front();
            tmp.pop_front();
        }
        for(int i = k; i < (n - k); i++){
            res[i][(m - k) - 1] = tmp.front();
            tmp.pop_front();
        }
        for(int j = (m-k -2); j >= k; j--){
            res[n-k-1][j] = tmp.front();
            tmp.pop_front();
        }
        for(int i = (n - k - 2); i > k; i--){
            res[i][k] = tmp.front();
            tmp.pop_front();
        }
    } // 껍질에 따라서 ㄱㄱ
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++)
            cout << res[i][j] << " ";
        cout << '\n';
    }
}