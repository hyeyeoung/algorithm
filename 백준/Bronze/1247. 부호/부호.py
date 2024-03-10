import sys
if __name__=="__main__":
    for i in range(3):
        n = int(sys.stdin.readline())
        ans = 0
        for i in range(n):
            tmp = int(sys.stdin.readline())
            ans = ans + tmp
        if ans == 0:
            print("0", end="\n")
        elif ans > 0:
            print("+", end="\n")
        elif ans < 0:
            print("-", end='\n')