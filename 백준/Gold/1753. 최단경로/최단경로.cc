#include <iostream>
#include <queue>
#include <vector>
// 최단 경로- 데이크스트라
using namespace std;
int v, e;

vector <pair<int, int>> arr[20001];
vector<int> visited(20001, 1e8);
void Dji(int node) {
	priority_queue<pair<int, int>> q;
	visited[node] = 0;
	q.push({ 0, node }); // 시작 정점으로 입력

	while (!q.empty()) {
		node = q.top().second; // 노드
		int dist = -q.top().first;
		q.pop();
		for (int i = 0; i < arr[node].size(); i++) {
			int nnode = arr[node][i].first;
			int ndist = dist + arr[node][i].second;
			if (ndist < visited[nnode]) {
				q.push({ -ndist, nnode });
				visited[nnode] = ndist;
			}
		}
	}
}

int main() {
	cin.tie(0); cout.tie(0); ios::sync_with_stdio(false);
	cin >> v >> e; // 정점과 간선의 개수
	int start; // 시작 정점
	cin >> start;
	for (int i = 0; i < e; i++) {
		int s, e, w;
		cin >> s >> e >> w;
		arr[s].push_back({ e, w });
	}
	Dji(start);
	for (int i = 1; i <= v; i++) {
		if (visited[i] == 100000000)
			cout << "INF\n";
		else
			cout << visited[i] << '\n';
	}
}