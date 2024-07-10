import sys
if __name__ == '__main__':
    n, m = map(int, sys.stdin.readline().split(" "))
    
    # 6개 가격, 1개 가격
    price_six, price_one = [], []
    for i in range(m):
        six, one = map(int, sys.stdin.readline().split(" "))
        price_six.append(six)
        price_one.append(one)

    s, o = min(price_six), min(price_one)
    x = n // 6
    res = min((s*x +((n-x*6)*o)), s*(x+1), o*n)
    print(res)