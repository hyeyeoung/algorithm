def go(count, sum, goal):
    if(sum > goal):
        return 0
    if(sum == goal):
        return 1
    now = 0
    for i in range(1, 4):
        now += go(count+1, sum+i, goal)
    return now
if __name__ == '__main__':
    t = int(input())
    while t != 0:
        goal = int(input())
        print(go(0,0,goal))
        t -= 1