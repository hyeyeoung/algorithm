def go(l):
    l[1] = 1
    l[2] = 2
    l[3] = 4
    l[4] = 7
    for i in range(5,1000001):
        l[i] = (l[i-1]+l[i-2]+l[i-3]) % 1000000009

if __name__=='__main__':
    tc = int(input())
    l = [0] * 1000001
    go(l)
    while tc:
        tc-=1
        n = int(input())
        print(l[n], end='\n')