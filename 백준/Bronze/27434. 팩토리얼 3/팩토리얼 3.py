import sys

if __name__ == '__main__':
    sys.set_int_max_str_digits(1000000)
    n = int(sys.stdin.readline())
    prev = 1
    for i in range(1, n+1):
        prev *= i
    print(prev)
