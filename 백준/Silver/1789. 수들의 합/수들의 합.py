import sys
if __name__ == '__main__':
    s = int(sys.stdin.readline())

    n, k, sum = 0, 0, 0
    while True:
        if sum > s:
            break
        k += 1
        sum += k
        n += 1
    print(n-1)