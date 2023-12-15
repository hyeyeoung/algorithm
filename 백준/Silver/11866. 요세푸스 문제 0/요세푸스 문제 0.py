def sol(n, k):
    arr1 = []
    arr2 = []
    for i in range(n):
        arr1.append(i+1)
    cnt = 1

    while len(arr1) != 0:
        if cnt == k:
            arr2.append(arr1.pop(0))
            cnt = 1
        else:
            tmp = arr1.pop(0)
            arr1.append(tmp)
            cnt+=1
    return arr2

if __name__=='__main__':

    n, k = map(int, input().split(" "))
    arr = sol(n,k)
    print("<", end='')
    for i in arr:
        print(i,end='')
        if i is not arr[-1]:
            print(", ",end='')
    print(">",end='')