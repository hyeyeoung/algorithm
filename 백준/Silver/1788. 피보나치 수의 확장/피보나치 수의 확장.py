import sys

def fibo(n):
    if n == 0: return 0
    current, res = 1, 1 # arr[1]
    prev = 0 # arr[0]
    for i in range(2, n+1):
        res = (current + prev) % 1000000000
        prev = current
        current = res
    return res

if __name__ == '__main__':
    n = int(sys.stdin.readline())
    if n > 0 or (n < 0 and n % 2 != 0): print(1)
    elif n == 0: print(0)
    else: print(-1)
    print(fibo(abs(n)))