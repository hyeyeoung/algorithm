import sys

if __name__ == '__main__':
    n = int(sys.stdin.readline())

    arr = [0] * (n+1)
    res = []
    for i in range(2, n+1):
        if i % 3 == 0 and i % 2 == 0 and i - 1 >= 0:
            arr[i] = min(arr[i//3], arr[i//2], arr[i-1]) + 1
        elif i % 3 == 0 and i % 2 != 0 and i - 1 >= 0:
            arr[i] = min(arr[i//3], arr[i-1]) + 1
        elif i % 3 != 0 and i % 2 == 0 and i - 1 >= 0:
            arr[i] = min(arr[i//2], arr[i-1]) + 1
        elif i % 3 != 0 and i % 2 != 0 and i - 1 >= 0:
            arr[i] = arr[i-1] + 1
    nn = n
    print(arr[n])
    print(n, end= ' ')
    while True:
        if nn == 1:
            break
        if arr[nn] == arr[nn-1] + 1:
            nn -= 1
        elif arr[nn] == arr[nn//3] + 1 and nn % 3 == 0:
            nn //= 3
        elif arr[nn] == arr[nn//2] + 1 and nn % 2 == 0:
            nn //= 2
        print(nn, end= ' ')
            
    
    