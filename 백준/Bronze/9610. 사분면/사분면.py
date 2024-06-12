import sys
if __name__=='__main__':
    n = int(sys.stdin.readline())
    one, two, three, four, axis = 0, 0, 0, 0, 0

    for i in range(n):
        a, b = map(int, sys.stdin.readline().split(" "))
        if a == 0 or b == 0: axis += 1
        if a > 0 and b > 0: one += 1
        if a < 0 and b > 0: two += 1
        if a < 0 and b < 0: three += 1
        if a > 0 and b < 0: four += 1
    print(f'Q1: {one}\nQ2: {two}\nQ3: {three}\nQ4: {four}\nAXIS: {axis}')