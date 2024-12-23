import sys

n = int(sys.stdin.readline())
x = len(str(n)) # 자리수
i = 1
j = 1
num = 9
cnt = 0

while j < x:
    cnt += i * num
    i += 1
    num *= 10

    j+=1
# print(x)
print(cnt + (n - pow(10, x-1) + 1) * i)
""""
1 ~ 9 +1 , 9개
10 ~ 99 +2, 90개
100 ~ 999 +3, 900개

if 15이면? 9 + (2 * 6) = 21
if 120이면? 9 + 90*2 + 21 * 3 = 
"""