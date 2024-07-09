from collections import deque
import sys

dx = [-1, 1, 0, 0]
dy = [0, 0, -1, 1]

def b5427(w, h, x, y, Map, fire):
    q = deque([(x, y)])
    fire_q = deque(fire)
    visited = [[False] * w for _ in range(h)]
    dis = [[0] * w for _ in range(h)]
    
    visited[x][y] = True
    dis[x][y] = 1
    
    while q:
        # 불 확산
        for _ in range(len(fire_q)):
            fx, fy = fire_q.popleft()
            for i in range(4):
                nfx, nfy = fx + dx[i], fy + dy[i]
                if 0 <= nfx < h and 0 <= nfy < w and Map[nfx][nfy] == '.' and not visited[nfx][nfy]: 
                    fire_q.append((nfx, nfy))
                    visited[nfx][nfy] = True
        
        # 플레이어 이동
        for _ in range(len(q)):
            x, y = q.popleft()
            for i in range(4):
                nx, ny = x + dx[i], y + dy[i]
                if 0 <= nx < h and 0 <= ny < w:
                    if Map[nx][ny] == '.' and not visited[nx][ny]:
                        dis[nx][ny] = dis[x][y] + 1
                        visited[nx][ny] = True
                        q.append((nx, ny))
                else:
                    # 맵의 경계에 도달하면 탈출 성공
                    return dis[x][y]
    
    return "IMPOSSIBLE"

if __name__ == '__main__':
    T = int(sys.stdin.readline())
    for _ in range(T):
        w, h = map(int, sys.stdin.readline().split())
        x, y = 0, 0
        Map = []
        fire = []
        
        for r in range(h):
            col = list(sys.stdin.readline().rstrip())
            Map.append(col)
            for c in range(w):
                if Map[r][c] == '*': 
                    fire.append((r, c))
                if Map[r][c] == '@': 
                    x, y = r, c

        result = b5427(w, h, x, y, Map, fire)
        print(result)
