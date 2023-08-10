n = int(input())

i = 1
while n>i:
    n -= i
    i += 1

if i%2 == 1:
    print(str(i+1-n)+"/"+str(n))
else:
    print(str(n)+"/"+str(i+1-n))