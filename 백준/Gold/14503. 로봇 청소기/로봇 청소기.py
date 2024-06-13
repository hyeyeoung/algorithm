import sys
arr, visit = [], []
dx = [-1, 0, 1, 0]
dy = [0, 1, 0, -1]
# 0은 위, 1은 오른쪽 2는 아래, 3은 왼쪽

def vacumming(r, c, d, n , m):
    cnt = 0
    while True:
        if arr[r][c] == 0 and visit[r][c] == False:
            cnt += 1
            visit[r][c] = True

        cleaned = False
        for i in range(1,5):
            nd = (4 + d - i) % 4
            nr, nc = r + dx[nd], c + dy[nd]
            if nr >= 0 and nr < n and nc >= 0 and nc < m and arr[nr][nc] == 0 and visit[nr][nc] == False:
                cleaned = True
                r, c, d = nr, nc, nd
                break

        if cleaned == False:
            nr, nc = r + dx[(d+2)%4], c + dy[(d+2)%4]
            if arr[nr][nc] == 1:
                break
            else:
                r = nr
                c = nc
        
        
    return cnt
            

        
if __name__ == '__main__':
    n, m = map(int, sys.stdin.readline().split(" "))
    r, c, d = map(int, sys.stdin.readline().split(" "))
    
    for i in range(n):
        tmp = list(map(int, sys.stdin.readline().split(" ")))
        arr.append(tmp)
        vtmp = [False for _ in range(len(tmp))]
        visit.append(vtmp)
    
    print(vacumming(r,c,d,n, m))
