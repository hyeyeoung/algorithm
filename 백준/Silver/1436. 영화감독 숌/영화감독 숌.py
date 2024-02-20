def answer(n):
    count = 1
    tmp = "666"
    while count != n:
        tmp = int(tmp) + 1
        if "666" in str(tmp):
            count +=1
    return tmp

if __name__=="__main__":
    n = int(input())
    print(answer(n), end="")