if __name__ == '__main__':
    x1, y1 = map(int, input().split(" "))
    x2, y2 = map(int, input().split(" "))
    x3, y3 = map(int, input().split(" "))
    
    xlist = [x1,x2,x3]
    ylist = [y1,y2,y3]

    x4, y4 = 0, 0
    for i in range(3):
        if xlist.count(xlist[i]) == 1:
            x4 = xlist[i]
        if ylist.count(ylist[i]) == 1:
            y4 = ylist[i]
    print(f'{x4} {y4}')