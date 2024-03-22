def go(n):
    l = [0]*(1001) # 배열 선언
    l[1] = 1
    l[2] = 2
    for i in range(3, n+1):
        l[i] = (l[i-1] + l[i-2]) % 10007
    return l[n]%10007

if __name__=='__main__':
    n = int(input())
    print(go(n))