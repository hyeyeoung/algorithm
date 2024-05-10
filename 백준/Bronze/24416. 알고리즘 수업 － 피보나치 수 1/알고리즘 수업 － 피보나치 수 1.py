cnt1 = 0
cnt2 = 0
def one(n):
    if n == 1 or n == 2:
        global cnt1
        cnt1 += 1
        return 1
    else:
        return (one(n-1) + one(n-2))

def two(n):
    list1 = [0, 1, 1]
    for i in range(3, n+1):
        global cnt2
        cnt2 += 1
        tmp = list1[i-1]+list1[i-2]
        list1.append(tmp)
    return list1[n]

if __name__ == '__main__':
    n = int(input())
    a = one(n)
    b = two(n)
    print("%d %d" %(cnt1,cnt2))