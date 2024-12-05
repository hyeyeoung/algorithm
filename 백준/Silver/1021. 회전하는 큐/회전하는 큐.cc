#include <iostream>
#include <deque>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    deque<int> dq;
    for (int i = 1; i <= n; i++) {
        dq.push_back(i); // 1부터 n까지 큐에 넣기
    }

    int cnt = 0; // 연산 횟수

    while (m--) {
        int target;
        cin >> target;

        // 타겟의 현재 인덱스 찾기
        int idx = 0;
        for (int i = 0; i < dq.size(); i++) {
            if (dq[i] == target) {
                idx = i;
                break;
            }
        }

        // 왼쪽으로 회전할지, 오른쪽으로 회전할지 결정
        if (idx <= dq.size() / 2) {
            // 왼쪽 회전
            while (dq.front() != target) {
                dq.push_back(dq.front());
                dq.pop_front();
                cnt++;
            }
        } else {
            // 오른쪽 회전
            while (dq.front() != target) {
                dq.push_front(dq.back());
                dq.pop_back();
                cnt++;
            }
        }

        // 타겟 제거
        dq.pop_front();
    }

    cout << cnt;
    return 0;
}
