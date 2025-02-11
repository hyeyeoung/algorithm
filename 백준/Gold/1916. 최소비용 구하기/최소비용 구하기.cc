#include <iostream>
#include <queue>
#include <vector>
using namespace std;
int INF = 999999999;
// A번째 도시에서 B번째 도시까지 가는 버스 최소 비용
// *도시 번호는 1부터 N까지
int n, m;
vector<pair<int, int>> linked[1001];

void Dijkstra(int s, int e)
{
	vector<int> Visited(1001, INF);
	priority_queue <pair<int, int>> q;
	Visited[s] = 0;
	q.push({ 0, s }); // 초기값 0과 시작 노드 s를 push
	while (!q.empty())
	{
		int cur_dist = -q.top().first;
		int cur_node = q.top().second;
		q.pop();

		for (int i = 0; i < linked[cur_node].size(); i++)
		{
			int next = linked[cur_node][i].first;
			int dist = cur_dist + linked[cur_node][i].second;

			if (dist < Visited[next])
			{
				Visited[next] = dist;
				q.push({ -dist, next });
			}
		}
		if (cur_node == e) break;
	}
	//for (int i = 1; i <= n; i++)
	//	cout << Visited[i] << " ";
	cout << Visited[e];
}

int main()
{
	cin >> n; // 도시의 개수 N
	cin >> m; // 버스 개수 M

	// 최소 비용 -> 다익스트라 알고리즘
	// *(다익스트라, 벨만-포드, 프로이드 워샬)

	// 동작 단계 
	/*
	* 1. 출발 노드와 도착 노드 설정
	* 2. 최단 거리 테이블 초기화
	* 3. 현재 위치한 노드의 인접 노드 중 방문하지 않은 노드 구별, (최소 비용 선택)
	* 4. 최단 거리 테이블 업데이트
	*/

	for (int k = 0; k < m; k++)
	{
		int start, end, w;
		cin >> start >> end >> w;

		linked[start].push_back({end, w});
	}

	int s, e;
	cin >> s >> e; // 시작 번호, 끝 번호
	Dijkstra(s, e);
}