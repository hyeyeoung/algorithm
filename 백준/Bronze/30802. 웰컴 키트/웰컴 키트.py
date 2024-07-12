import sys
if __name__ == '__main__':
    n = int(sys.stdin.readline())
    size = list(map(int, sys.stdin.readline().split(" ")))
    t, p = map(int, sys.stdin.readline().split(" "))
    # size.sort()
    
    cnt, res = 0, 0
    for i in range(6):
        res += (size[i]//t)
        if size[i] % t != 0: res += 1

    

    print(res)
    print(f'{n//p} {n%p}')