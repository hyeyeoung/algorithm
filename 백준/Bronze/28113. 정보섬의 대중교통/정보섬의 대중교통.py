import sys
if __name__ == '__main__':
    n, a, b = map(int, sys.stdin.readline().split())
    if a == b :
        print("Anything")
    elif a > b:
        print("Subway")
    elif a < b:
        print("Bus")