import sys
if __name__ == '__main__':
    # 입력 받기 
    n, m = map(int, sys.stdin.readline().split(' '))
    arr = list(map(int, sys.stdin.readline().split(' ')))

    # 누적합 준비
    arr.insert(0, 0)
    # arr.sort()
    for i in range(1, len(arr)): arr[i] = arr[i] + arr[i-1]
    # print(arr)
    i, j =  0, 1
    cnt = 0
    while i <= j:
        if 0 <= i < len(arr) and 0 <= j < len(arr):
            sum = arr[j] - arr[i]
            if sum == m:
                cnt += 1
                j += 1
            elif sum < m: j += 1
            elif sum > m: i += 1
        else: break
        if i == j: j += 1
    print(cnt)