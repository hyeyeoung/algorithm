import sys
input = sys.stdin.readline

def CNT(S, n, m):
    cnt = 0 # 종합개수
    index = 0 # 현재위치
    tmp = 0 # IOI의 개수
    while index < m-2:
        if S[index] == 'I' and S[index+1] == 'O' and S[index+2] == 'I':
            tmp += 1
            index += 2
            if tmp == n:
                cnt += 1
                tmp -= 1
        else:
            tmp = 0
            index+=1
    return cnt

if __name__=='__main__':
    n = int(input()) # P의 길이
    m = int(input()) # S의 길이
    S = input().rstrip() # S
    print(CNT(S, n, m))    
