if __name__ == '__main__':
    cnt = 0
    for i in range(8):
        arr = []
        arr = list(map(str, input()))
        for j in range(8):
            if i % 2 == 0 and j % 2 == 0 and arr[j] == 'F': cnt += 1
            if i % 2 != 0 and j % 2 != 0 and arr[j] == 'F': cnt += 1
    print(cnt)