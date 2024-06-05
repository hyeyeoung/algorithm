import sys
if __name__ == '__main__':
    n, g = map(str, sys.stdin.readline().split())
    n = int(n)
    l = dict()
    tmp = 0
    if g == 'Y':
        tmp = 1
    if g == 'F':
        tmp = 2
    if g == 'O':
        tmp = 3

    for i in range(n):
        name = sys.stdin.readline()
        l[name] = 0
    print(len(l)//tmp)

