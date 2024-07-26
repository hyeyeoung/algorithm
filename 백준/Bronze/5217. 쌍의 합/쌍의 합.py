if __name__ == '__main__':
    n = int(input())

    for i in range(n):
        k = int(input())
        print(f"Pairs for {k}:", end = '')

        res = []

        for j in range(1, (k // 2) + 1):
            if j != k-j: res.append((j, k-j))
        
        for t in range(len(res)):
            if t == len(res)-1:
                print(f' {res[t][0]} {res[t][1]}', end = '')
            else: print(f' {res[t][0]} {res[t][1]},', end = '')
        print()