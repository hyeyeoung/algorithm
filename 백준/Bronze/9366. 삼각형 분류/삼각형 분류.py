import sys
if __name__ == '__main__':
    n = int(sys.stdin.readline())

    for _ in range(n):
        a, b, c = map(int, sys.stdin.readline().split(" "))
        print(f'Case #{_+1}: ', end='')
        arr = [a,b,c]
        arr.sort()
        if arr[2] >= arr[0] + arr[1]:
            print("invalid!")
        elif arr[0] == arr[1] == arr[2]:
            print("equilateral")
        elif (a == b != c) or (a == c != b) or (b == c != a):
            print("isosceles")
        else:
            print("scalene")