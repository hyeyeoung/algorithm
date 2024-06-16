import sys

dx = [2, 1, 2, 1, -2, -1, -2, -1]
dy = [1, 2, -1, -2, -1, -2, 1, 2]
arr = [[0 for _ in range(300)] for i in range(300)]

def memory(size):
    for i in range(size):
        for j in range(size): arr[i][j] = 0

def night(x,y,size):
    memory(size)
    q = []
    q.append((x, y))
    while len(q) != 0:
        x, y = q[0][0], q[0][1]
        q.pop(0)
        for i in range(8):
            nx, ny = x + dx[i], y + dy[i]
            if nx >= 0 and nx < size and ny >= 0 and ny < size and arr[nx][ny] == 0:
                arr[nx][ny] = arr[x][y] + 1
                q.append((nx, ny))

if __name__ == '__main__':
    T = int(sys.stdin.readline())
    for _ in range(T):
        size = int(sys.stdin.readline())
        x1, y1 = map(int, sys.stdin.readline().split(" "))
        x2, y2 = map(int, sys.stdin.readline().split(" "))
        if x1 == x2 and y1 == y2: print(0)
        else:
            night(x1, y1, size)
            print(arr[x2][y2])