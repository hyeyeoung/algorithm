#include <iostream>
#include <queue>
#include <vector>
using namespace std;
// ----------------------------
// 도로의 총 길이는 10000까지
int n, d;
vector <pair<int, int>> load[10001];
vector <int> Visited(10001, 99999999); // 각 노드 방문 여부
void Dji(int cur)
{
	// 데이크스트라로 최단 경로 탐색
	// 가중치만 Visited에 채워주고 별도의 처리 x
	priority_queue<pair<int, int>> q;
	q.push({ Visited[cur], cur });
	
	while (!q.empty())
	{
		int cur = q.top().second; // 현재 노드
		int we = q.top().first; // 그 노드의 가중치 뽑기
		q.pop();

		// 연결된 지름길 모두 검사
		for (int i = 0; i < load[cur].size(); i++)
		{
			int nxt = load[cur][i].first; // 다음 위치 먼저 검색
			int nxtdist = load[cur][i].second + we; // 현재 위치의 가중치
			if (nxtdist < Visited[nxt])
			{
				Visited[nxt] = nxtdist;
				q.push({ nxtdist, nxt });
			}
		}
	}
}

int main()
{
	// n개의 지름길, d까지 이동해야함
	cin >> n >> d;
	
	for (int i = 0; i < n; i++)
	{
		int start, end, w;
		cin >> start >> end >> w; // 지름길 시작, 끝, 가중치

		if (start <= d && end <= d) // 도착지가 목적지보다 더 멀면 안됨
			load[start].push_back({ end, w }); // 연결된 길과 가중치 저장
	}
	Visited[0] = 0;
	int i = 0; // 모든 경우 출발은 0에서 시작함! 0 -> d이기 때문
	// i가 d보다 작다면 계속 실행하기
	while (i <= d)
	{
		// 현재 위치의 값이 최소값인지 확인하는 과정
		// i가 1이상이면 그 이전 값과 비교
		if(i > 0 && Visited[i] > Visited[i - 1] + 1)
			Visited[i] = Visited[i - 1] + 1;
		if (load[i].size() != 0)
		{
			// 지름길이 존재할 때
			Dji(i); // 현재 위치를 넣음!
		}
		i++;
	}
	cout << Visited[d];
}

// 0 : 0
// 1 : 1
// 2 : 2