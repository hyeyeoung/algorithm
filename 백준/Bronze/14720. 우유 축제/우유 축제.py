def sol(milk):
    cnt = 0
    state = [0,1,2]
    index = 0
    for i in milk:
        if state[index] == i:
            cnt += 1
            index = (index + 1) % 3
        else:
            continue
    return cnt

if __name__ == '__main__':
    n = int(input())
    milk = []
    milk = list(map(int, input().split()))
    print(sol(milk))
    