def sol(h, m, s):
    l = []
    l.append(3600 * h + 60 * m + s)
    l.append(720 * m + 12 * s)
    l.append(720*s)
    l.sort()
    res = min(l[1]-l[0], l[2]-l[1], 43200 + l[0] - l[2])
    return res / 120
if __name__ == '__main__':
    T = int(input())
    for i in range(T):
        h, m, s = list(map(int, input().split()))
        l = sol(h,m,s)

        print(round(l,6))
