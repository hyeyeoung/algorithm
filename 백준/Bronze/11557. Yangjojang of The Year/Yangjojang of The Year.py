import sys
if __name__ == '__main__':
    T = int(sys.stdin.readline())

    for t in range(T):
        n = int(sys.stdin.readline())

        sname, max = "", -1
        for i in range(n):
            name, alcol = map(str, sys.stdin.readline().split(" "))
            alcol = int(alcol)
            if alcol > max:
                max = alcol
                sname = name
        print(sname)