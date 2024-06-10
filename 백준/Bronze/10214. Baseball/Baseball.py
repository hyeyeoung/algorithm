import sys
if __name__ == '__main__':
    T = int(sys.stdin.readline())
    for t in range(T):
        y, g = 0, 0
        for i in range(9):
            a, b = map(int, sys.stdin.readline().split(" "))
            y += a
            g += b
        if y == g:
            print("Draw")
        elif y > g:
            print("Yonsei")
        else:
            print("Korea")
