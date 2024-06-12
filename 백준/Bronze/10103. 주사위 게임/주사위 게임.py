import sys
if __name__ == '__main__':
    n = int(sys.stdin.readline())
    chan, sang = 100, 100
    for i in range(n):
        a, b = map(int, sys.stdin.readline().split(" "))
        if a > b: sang -= a
        elif a < b: chan -= b
    print(f'{chan}\n{sang}')