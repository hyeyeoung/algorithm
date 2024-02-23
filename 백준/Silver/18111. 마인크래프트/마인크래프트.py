def sol(b, arr):
    timereult = 50000000 
    high = 0
    for i in range(0, 257):
        sub_block = sum_block = 0 # 블럭 초기화
        for j in range(i, 257):
            sub_block += (j - i) * arr[j]
        for j in range(0, i):
            sum_block += (i - j) * arr[j]
        if sum_block<= b+sub_block:
            time = sub_block * 2 + sum_block
            if timereult >= time:
                timereult = time
                high = i

    return timereult, high


if __name__ == '__main__':
    n, m, b = map(int, input().split())
    arr = [0] * 257
    for i in range(0, n):
        k = map(int, input().split())
        for j in k:
            arr[j] += 1
    res = sol(b, arr)
    print(str(res[0]) + " "+str(res[1]))