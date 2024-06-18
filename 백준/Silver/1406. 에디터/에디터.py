import sys

if __name__ == '__main__':
    s = list(map(str, sys.stdin.readline().rstrip()))
    cursor = len(s)
    n = int(sys.stdin.readline())
    r = [] # 커서를 기준으로 오 s는 왼
    for _ in range(n):
        inters = list(map(str, sys.stdin.readline().split(" ")))

        if inters[0][0] == "P": s.append(inters[1][0])
        if inters[0][0] == "L" and len(s) != 0: r.append(s.pop())
        if inters[0][0] == "D" and len(r) != 0: s.append(r.pop())
        if inters[0][0] == "B" and len(s) != 0: s.pop()
    
    for i in s:
        print(i, end="")
    for i in range(len(r)):
        print(r[len(r)-i-1], end="")