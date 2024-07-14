if __name__ == '__main__':
    x, y = map(int, input().split(" "))
    z = (y * 100) / x
    if z >= 99: print(-1)
    else:
        left, right = 0, 1000000000
        while left <= right:
            mid = int((left+right) / 2)
            nz = int(((y+mid)*100) / (x+mid))
            if nz > z:
                right = mid - 1
            else:
                left = mid + 1
        print(left)