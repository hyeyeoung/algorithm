def CNT(S, n, m):
    cnt = 0
    str = 'IO'*n
    str += 'I'
    n = 2*n + 1
    for i in range(m):
        if i+n <= m and S[i:i+n] == str:
            cnt+=1
        
    return cnt


if __name__=='__main__':
    n = int(input()) # P의 길이
    m = int(input()) # S의 길이
    S = input() # S
    print(CNT(S,n,m))
