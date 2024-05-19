import sys
if __name__ == '__main__':
    n = int(sys.stdin.readline())
    for i in range(n):
        a, b = map(int, sys.stdin.readline().split())
        print(a+b,end='\n')