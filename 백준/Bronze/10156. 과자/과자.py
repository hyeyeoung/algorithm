import sys
if __name__ == '__main__':
    k, n, m = map(int, sys.stdin.readline().split(" "))
    res = k * n - m
    if res >= 0: print(res)
    else: print(0)