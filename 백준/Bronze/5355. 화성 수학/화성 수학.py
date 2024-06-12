import sys
if __name__ == '__main__':
    T = int(sys.stdin.readline())

    for t in range(T):
        tmp = list(map(str, sys.stdin.readline().split(" ")))

        num = float(tmp[0])
        tmp[-1] = tmp[-1].rstrip("\n")
        for i in range(1,len(tmp)):
            if tmp[i] == "@":
                num *= 3
            if tmp[i] == "%":
                num += 5
            if tmp[i] == "#":
                num -= 7
        print("{:.2f}".format(num))