import sys
if __name__=='__main__':
    n = int(sys.stdin.readline())
    m = int(sys.stdin.readline())

    loc = list(map(int, sys.stdin.readline().split(" ")))
    last, height = loc[0], loc[0]
    # f f t f t 
    for i in range(1, m):
        tmp = abs(last - loc[i])
        if tmp % 2 == 0: tmp = (tmp//2)
        else: tmp = (tmp//2) + 1

        height = max(height, tmp)
        last = loc[i]
    height = max(height, abs(n - loc[m-1]))
    print(height)
