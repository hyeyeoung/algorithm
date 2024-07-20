import sys
if __name__ == '__main__':
    n = int(sys.stdin.readline())

    arr = [0] * (n+2)
    arr[1] = 1
    for i in range(2, n+1): arr[i] = arr[i-1] + arr[i-2]
    print(arr[n])
