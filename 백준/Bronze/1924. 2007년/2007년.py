if __name__ == '__main__':
    x, y = map(int, input().split())
    res = 0

    for i in range(1, x):
        if i in [1, 3, 5, 7, 8, 10, 12]: res += 31
        elif i in [4,6,9,11]: res += 30
        else: res += 28
    res += y
    week = ['SUN', 'MON', 'TUE', 'WED', 'THU', 'FRI', 'SAT']
    print(week[res% 7])