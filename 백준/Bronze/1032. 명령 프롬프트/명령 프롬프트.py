

if __name__ == '__main__':
    n = int(input())
    str = []
    for i in range(n):
        tmp = list(input())
        if len(str) == 0:
            str = tmp
            continue
        for j in range(len(tmp)):
            if str[j] != tmp[j]: str[j] = '?'
    
    for i in str: print(i, end = '')