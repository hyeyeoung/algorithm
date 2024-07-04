if __name__ == '__main__':
    n = int(input())
    # 2, 5으로 거스름돈
    # 2만 사용하는 경우, 5만 사용하는 경우, 2+5 모두 사용화는 경우
    arr = [0] * (n+5)
    arr[0], arr[1], arr[3] = -1, -1, -1
    arr[2],arr[4],arr[5] = 1, 2, 1

    for i in range(6, n+1):
        if arr[i-2] != -1 and arr[i-5] == -1:
            arr[i] = arr[i-2] + 1
        elif arr[i-2] == -1 and arr[i-5] != -1:
            arr[i] = arr[i-5] + 1
        elif arr[i-2] != -1 and arr[i-5] != -1:
            arr[i] = min(arr[i-2], arr[i-5]) + 1
        else: 
            arr[i] = -1
    print(arr[n])