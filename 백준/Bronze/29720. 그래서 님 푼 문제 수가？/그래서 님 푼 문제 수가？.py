import sys
if __name__=='__main__':
    n, m, k = map(int, sys.stdin.readline().split())
    min = max(n - m*k, 0)
    max = max(n - (m*(k-1)+1), 0)
    print(str(min)+' '+str(max))
    
    