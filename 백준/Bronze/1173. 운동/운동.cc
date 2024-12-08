#include <iostream>
using namespace std;

int main(){
    int N, m, M, T, R; // 목표 운동시간, 최소 맥박(현재 맥박), 최대 맥박, 운동시 상승맥박(1분), 휴식시 하락맥박(1분)
    cin >> N >> m >> M >> T >> R;
    int exc = 0, time = 0, cur = m; // 현재 운동 시간, 소요 시간
    if(M - m < T) {
        cout << -1;
        return 0;
    }

    while(exc < N){
        if(cur + T <= M){
            exc++;
            cur += T;
        }
        else{
            cur -= R;
            if(cur < m) cur = m;
        }
        time++;
    }
    cout << time;
}