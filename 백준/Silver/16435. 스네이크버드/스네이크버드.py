import sys
if __name__ == '__main__':
    n, l = map(int, sys.stdin.readline().split(" "))
    fruit = list(map(int, sys.stdin.readline().split(" ")))
    fruit.sort()

    for i in range(n):
        if l >= fruit[i]: l += 1
    print(l)