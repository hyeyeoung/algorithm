import sys
if __name__ == '__main__':
    T = int(sys.stdin.readline())
    for t in range(T):
        r, e, c = map(int, sys.stdin.readline().split(" "))
        if r > e-c: print("do not advertise")
        elif r == e-c: print("does not matter")
        else: print("advertise")