import sys
arr = []
dx = [1, -1, 0, 0]
dy = [0, 0, 1, -1]
n, m = 0, 0

def painting(x, y):
    q = []
    q.append((x, y))
    arr[x][y] = 2
    face = 1
    while len(q) != 0:
        x, y = q[0][0], q[0][1]
        q.pop(0)
        for i in range(4):
            nx, ny = x + dx[i], y + dy[i]   
            if nx >= 0 and nx < n and ny >= 0 and ny < m and arr[nx][ny] == 1:
                face += 1 
                arr[nx][ny] = 2
                q.append((nx, ny))
    return face

if __name__ == '__main__':
    n, m = map(int, sys.stdin.readline().split(" "))
    
    for _ in range(n):
        tmp = list(map(int, sys.stdin.readline().split(" ")))
        arr.append(tmp)
    cnt = 0
    maxf = 0
    for i in range(n):
        for j in range(m):
            if arr[i][j] == 1:
                cnt += 1
                facet = painting(i, j)
                if facet > maxf: maxf = facet
    print(f'{cnt}\n{maxf}')

