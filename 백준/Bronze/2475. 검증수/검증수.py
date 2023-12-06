if __name__=='__main__':
    ans = 0
    tmp = list(map(int, input().split()))
    for i in range(5):
        ans += tmp[i]*tmp[i]
    
    print(ans % 10)