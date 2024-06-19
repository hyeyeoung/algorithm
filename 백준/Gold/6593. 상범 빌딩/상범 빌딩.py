import sys
visit = [[[-1 for col in range(30)] for row in range(30)] for high in range(30)]
arr = [[['' for col in range(30)] for row in range(30)] for high in range(30)]
l, r, c = 0, 0, 0
dx = [1, -1, 0, 0]
dy = [0, 0, 1, -1]
dz = [1, -1]

def maps(s, e):
    q = [(s[0], s[1], s[2])] # z, x, y
    visit[s[0]][s[1]][s[2]] = 0

    while len(q) != 0:
        z, x, y = q[0][0], q[0][1], q[0][2]
        q.pop(0)

        for i in range(2):
            nz = z + dz[i]
            if 0 <= nz < l and visit[nz][x][y] == -1 and arr[nz][x][y] != '#':
                q.append((nz, x, y))
                visit[nz][x][y] = visit[z][x][y] + 1
        for i in range(4):
            nx, ny = x + dx[i], y + dy[i]
            if 0 <= nx < r and 0 <= ny < c and visit[z][nx][ny] == -1 and arr[z][nx][ny] != '#':
                q.append((z, nx, ny))
                visit[z][nx][ny] = visit[z][x][y] + 1

    return visit[e[0]][e[1]][e[2]]

if __name__ == '__main__':
    while True:
        l, r, c = map(int, sys.stdin.readline().split(" "))
        if l == 0 and r == 0 and c == 0: break
        s, e = [0,0,0], [0,0,0]
        for i in range(l):
            for j in range(r):
                tmp = list(map(str, sys.stdin.readline().rstrip()))
                for k in range(c):
                    arr[i][j][k] = tmp[k]
                    if tmp[k] == 'S': s[0], s[1], s[2] = i, j, k # 높이, x, y
                    if tmp[k] == 'E': e[0], e[1], e[2] = i, j, k
                    visit[i][j][k] = -1
            trash = sys.stdin.readline()
        res = maps(s, e)
        if res == -1: print("Trapped!")
        else: print(f'Escaped in {res} minute(s).')
    