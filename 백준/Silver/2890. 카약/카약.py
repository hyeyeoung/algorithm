if __name__ == '__main__':
    r, c = map(int, input().split(' '))
    win = [0 for _ in range(10)] # 9등까지 존재
    team = [str(i) for i in range(1, 10)]
    di = dict(zip(team, win))
    for i in range(r):
        s = input()
        for j in team:
            if j in s:
                idx = s.find(j)
                di[j] = c - (idx)
    di = sorted(di.items(), key = lambda item: item[1])

    prize = {di[0][0] : 1}
    current = 1
    dis = di[0][1]
    for i in range(1, len(di)):
        if di[i][1] != dis:
            current += 1
            dis = di[i][1]
        prize[di[i][0]] = current

    for i in range(1, 10):
        print(prize[str(i)])
