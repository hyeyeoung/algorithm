def sol(arr, n):
    result = []
    rank = 1
    for i in range(n):
        for j in range(n):
            if arr[i][0] < arr[j][0] and arr[i][1] < arr[j][1]:
                rank+=1
        result.append(rank)
        rank = 1
    return result

if __name__ =="__main__":
    n = int(input())
    arr = []
    for i in range(n):
        tmp = list(map(int, input().split()))
        arr.append(tmp)
    x = sol(arr, n)
    for i in range(n):
        print(x[i], end=' ')

    