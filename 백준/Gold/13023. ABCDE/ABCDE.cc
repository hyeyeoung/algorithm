#include <iostream>
#include <vector>
using namespace std;
// 5명의 친구가 연결되는지 확인하는 문제
bool e[2001][2001]; // 인접 행렬
vector <int> g[2001]; // 인접리스트 
vector <pair<int, int>> edge; // 간선 리스트

int main(){
    int n, m; cin >> n >> m;
    for(int i = 0; i<m; i++){ // 인접 행렬에 저장
        int a,b; cin >> a >> b;
        // 간선 리스트 인풋
        edge.push_back({a,b});
        edge.push_back({b,a});

        // 인접 행렬 넣기
        e[a][b] = e[b][a] = true;

        // 인접 리스트
        g[a].push_back(b);
        g[b].push_back(a);
    }
    m *= 2;

    for(int i = 0; i<m; i++){
        for(int j = 0; j<m; j++){
            int A = edge[i].first;
            int B = edge[i].second;

            int C = edge[j].first;
            int D = edge[j].second;

            if(A==B || A==C || A == D||B==C || B==D|| C==D) continue;
            if(!e[B][C]) continue; // B->C 연결을 찾는다.
            for(int E:g[D]){
                if(E == A|| E==B||E==C||E==D) continue;
                cout << 1 <<'\n'; 
                return 0;
            }

        }
    }
    cout << 0 << '\n';
}