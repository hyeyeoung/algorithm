if __name__ == '__main__':
    n = int(input())
    rope = []
    for i in range(n):
        tmp = int(input())
        rope.append(tmp)
    rope.sort()
    res = rope[0] * n
    for i in range(1, n):
        if res < rope[i] * (n-i):
            res = rope[i] * (n-i)
    print(res)
