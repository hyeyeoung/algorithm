import sys
if __name__ == '__main__':
    n = int(sys.stdin.readline())
    cnt = 0
    for i in range(n):
        tmp = int(sys.stdin.readline())
        cnt += tmp
    if cnt > n // 2: print("Junhee is cute!")
    else: print("Junhee is not cute!")