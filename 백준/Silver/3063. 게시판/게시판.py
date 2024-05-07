def Union(x1, y1, x2, y2, x3, y3, x4, y4):
    # 전체 사각형 넓이 구하기
    space = (x2 - x1) * (y2 - y1)
    # 겹치는 사각형 넓이
    space2 =  max((min(x2, x4) - max(x1, x3)), 0)* max((min(y2,y4) - max(y1, y3)), 0)
    return space - space2

if __name__ == '__main__':
    T = int(input())
    for i in range(T):
        x1, y1, x2, y2, x3, y3, x4, y4 = map(int, input().split())
        print(Union(x1,y1,x2,y2,x3,y3,x4,y4))