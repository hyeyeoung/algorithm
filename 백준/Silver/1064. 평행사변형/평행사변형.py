import math
if __name__ == '__main__':
    x1, y1, x2, y2, x3, y3 = map(int, input().split())

    if ((x1-x2) *(y1-y3) == (y1-y2)*(x1-x3)):
        print(-1.0)
    else:
        a = ((x1-x2)**2 + (y1-y2)**2)**0.5
        b = ((x2-x3)**2 + (y2-y3)**2)**0.5
        c = ((x1-x3)**2 + (y1-y3)**2)**0.5
        len = [a+b, a+c, b+c]
        print((max(len) - min(len))*2)