a, b, c = map(int, input().split(" "))
d = int(input())

b += (d // 60)
c += (d % 60)

if c >= 60:
    b += (c // 60)
    c = (c % 60)

if b >= 60:
    a += (b // 60)
    b = (b % 60)

if a >= 24:
    a %= 24

print(f'{a} {b} {c}')
