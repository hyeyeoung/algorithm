import sys
if __name__ == '__main__':
    n = int(sys.stdin.readline())
    swich = list(map(int, sys.stdin.readline().split(" ")))
    snum = int(sys.stdin.readline())

    for i in range(snum):
        sex, loc = map(int, sys.stdin.readline().split(" "))
        if sex == 1: # 남학생이면
            for x in range(loc-1,n,loc):
                if swich[x] == 1: swich[x] = 0
                else: swich[x] = 1
        if sex == 2: # 여학생
            before, after = loc - 2, loc
            while True:
                if (before < 0 or after > n-1) or swich[before] != swich[after]:
                    for x in range(before+1, after):
                        if swich[x] == 1: swich[x] = 0
                        else: swich[x] = 1
                    break
                before -= 1
                after += 1
    for i in range(1,n+1):
        print(swich[i-1], end= " ")
        if i % 20 == 0:
            print()
