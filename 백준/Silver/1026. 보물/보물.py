import sys
if __name__ == '__main__':
    n = int(sys.stdin.readline())
    a = list(map(int, sys.stdin.readline().split(" ")))
    b = list(map(int, sys.stdin.readline().split(" ")))
    a.sort()
    b.sort(reverse=True)
    c = [a[i]*b[i] for i in range(n)]
    print(sum(c))