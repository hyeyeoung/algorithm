import sys
if __name__ == '__main__':
    n, s, p = map(int, sys.stdin.readline().split(" "))
    arr = []
    if n != 0:
        arr = list(map(int, sys.stdin.readline().split(" ")))

    index = -1
    for i in range(len(arr)):
        if arr[i] < s:
            index = i
            arr.insert(i,s)
            break
        if i == len(arr)-1:
            index = i+1
            arr.append(s)


    if index >= p:
        print(-1)
    else:
        prize = 1
        jump = 1
        for i in range(len(arr)-1):
            if arr[i] <= s:
                break
            if arr[i] == arr[i+1]:
                jump += 1
            else:
                prize += jump
                jump = 1


        print(prize)