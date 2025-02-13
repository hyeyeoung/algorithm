#include <iostream>
#include <queue>
#include <vector>
using namespace std;
int n, e;

vector<pair<int, int>> arr[801];
vector<int> Node(801, 999999999); // 거리 배열 초기화 초기화

void djikstra(int start, int end) { // end까지 도착하면 멈추기
	priority_queue<pair<int, int>> q;
	q.push({0, start}); // 본인 가중치 적어두기
	fill(Node.begin(), Node.end(), 999999999); // 기존 거리 벡터 초기화
	Node[start] = 0; // 시작 가중치 초기화
	// 데이크스트라, 우선순위 큐를 사용해 가장 최소비용인 정점을 선택한다.
	while (!q.empty()) {
		int node = q.top().second;
		int dist = q.top().first;
		q.pop();
		for (int i = 0; i < arr[node].size(); i++) {
			int newnode = arr[node][i].first;
			int newdist = arr[node][i].second + dist;
			
			if (newdist < Node[newnode]) {
				q.push({ newdist, newnode });
				Node[newnode] = newdist;
			}
		}
	}
}

int main() {
	// 1번에서 N정점으로 최단거리 이동. 
	// 특정 위치를 꼭 지나야함.
	// 한 칸을 여러번 방문 ㅇㅋ
	cin >> n >> e; // 정점
	// 세개의 정수
	
	for (int i = 0; i < e; i++) {
		// a->b, 거리 c
		int a, b, c;
		cin >> a >> b >> c;
		// 한 번 이동한 간선 또 이동 가능
		// 양방향 그래프
		arr[a].push_back({ b, c });
		arr[b].push_back({ a, c });
	}
	// 1번에서 v1 이동 최소값 + v2로 이동 최소값 + v2에서 마지막으로 최소칸
	int v1, v2; // 꼭 방문해야하는 정점
	cin >> v1 >> v2;
	
	// real1 = v1 도착, real2 = v2 도착
	int min1 = 999999999;
	bool flag1 = true;
	djikstra(1, v1);
	if (Node[v1] == 999999999)
		flag1 = false;
	else
	{
		min1 = Node[v1];
		djikstra(v1, v2);
		if (Node[v2] == 999999999)
			flag1 = false;
		else {
			min1 += Node[v2];
			djikstra(v2, n);
			if (Node[n] == 999999999)
				flag1 = false;
			min1 += Node[n];

		}
	}

	// ------ 경우의 수 2
	int min2 = 999999999;
	bool flag2 = true;
	djikstra(1, v2);
	if (Node[v2] == 999999999)
		flag2 = false;
	else
	{
		min2 = Node[v2];
		djikstra(v2, v1);
		if (Node[v1] == 999999999)
			flag2 = false;
		else {
			min2 += Node[v1];
			djikstra(v1, n);
			if (Node[n] == 999999999)
				flag2 = false;
			min2 += Node[n];

		}
	}
	if (!flag1 && !flag2)
		cout << -1;
	else {
		if (min1 < min2)
			cout << min1;
		else
			cout << min2;
	}
}
