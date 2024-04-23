while True:
    n = int(input())
    if n == 0:
        break
    sum = 0
    for i in range(1,n+1):
        sum += i
    print("%d" %sum)