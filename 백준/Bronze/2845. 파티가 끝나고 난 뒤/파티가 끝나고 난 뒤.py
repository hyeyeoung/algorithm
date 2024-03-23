if __name__=='__main__':
    n, k = map(int, input().split())
    l = list(map(int,input().split()))
    tmp = n * k
    for i in range(5):
        l[i] = l[i] - tmp
        print(l[i], end= " ")