import sys
if __name__ == '__main__':
    n = int(sys.stdin.readline())
    str = ""
    while(True):
        if n <= 1:
            break
        if n % 2 == 1:
            str += '1'
        elif n % 2 == 0:
            str += '0'
        n //= 2
    if n == 1:
        str += '1'
    for i in range(len(str)):
        print(str[len(str) - i -1], end="")
    