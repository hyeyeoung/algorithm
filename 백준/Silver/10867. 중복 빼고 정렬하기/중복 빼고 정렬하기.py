import sys
if __name__ =='__main__':
    n = int(sys.stdin.readline())
    a = list(set(map(int, sys.stdin.readline().split(" "))))
    a.sort()
    for i in a: print(i, end=' ')