def nanjaong(arr):
    for i in range(8):
        for j in range(i+1, 9):
            check = 0
            for k in range(9):
                if k != i and k != j:
                    check += arr[k]
            if check == 100:
                arr[i] = arr[j] = -1
                return arr.sort()
    return 0 
if __name__=='__main__':
    arr = [] # 리스트 선언
    for i in range(9):
        arr.append(int(input()))
    nanjaong(arr)
    for i in range(2, 9):
        print(arr[i],end='\n')
