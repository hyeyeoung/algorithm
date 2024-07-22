if __name__ == '__main__':
    n = int(input())
    tmp = 0

    for i in range(n):
        arr = list(map(int, input().split(" ")))

        a = arr[:2]
        b = arr[2:]
        b.sort(reverse = True)
        m = max(a)
        m = m + b[0] + b[1]
        if tmp < m: tmp = m
    print(tmp)
