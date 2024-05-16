import sys

if __name__ == '__main__':
    
    while True:
        arr = [False] * 10001
        n = int(sys.stdin.readline())
        if n == 0:
            break
        inter = list(map(str, sys.stdin.readline().split(',')))
        for line in inter:
            if '\n' in line:
                line.replace('\n', '')
            if '-' in line:
                a, b = map(int, line.split('-'))
                if a > b:
                    continue
                for i in range(a, b+1):
                    arr[i] = True
            else:
                a = int(line)
                arr[a] = True
        cnt = 0
        for i in range(n+1):
            if arr[i] == True:
                cnt += 1
        print(cnt, end='\n')

