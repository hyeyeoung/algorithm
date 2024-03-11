def plus(a, b):
    return a+b
def minus(a,b):
    return a-b
def multi(a,b):
    return a*b
if __name__=="__main__":
    a = int(input())
    b= int(input())
    sum = plus(a,b)
    cha = minus(a,b)
    m = multi(a,b)
    print(f'{sum}\n{cha}\n{m}', end="")