if __name__ == '__main__':
    d = input()
    k = input()
    cnt, i = 0, 0
    while i < len(d):
        if d[i:i+len(k)] == k:
            cnt += 1
            i = i + len(k)
        else:
            i += 1 
            continue
    print(cnt)
    