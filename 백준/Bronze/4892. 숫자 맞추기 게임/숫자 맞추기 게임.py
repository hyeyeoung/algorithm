if __name__ == '__main__':
    n0 = -1
    cnt = 1
    while True:
        n0 = int(input())
        if n0 == 0: break
        n1 = n0 * 3
        c = 0
        if n1 % 2 == 0:
            n1 //= 2
            c = 2
        else:
            n1 = (n1 + 1) // 2
            c = 1
        n3 = 3*n1
        n4 = n3 // 9
        if c == 1: print(f'{cnt}. odd {n4}')
        else: print(f'{cnt}. even {n4}')
        cnt += 1

