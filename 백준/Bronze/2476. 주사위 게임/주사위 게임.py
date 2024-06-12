import sys
if __name__ == '__main__':
    T = int(sys.stdin.readline())
    result = []
    for t in range(T):
        a, b, c = map(int, sys.stdin.readline().split(" "))
        if a == b and b == c: result.append(10000+a*1000)
        elif a !=b and b != c and a != c: result.append(max(a,b,c) * 100)
        else:
            if a == b and a != c: result.append(1000 + a * 100)
            elif a == c and a != b: result.append(1000 + a * 100)
            else: result.append(1000 + c * 100)
        
    print(max(result))