def acs(arr):
    for i in range(1,8):
        if arr[i] != arr[i-1]+1:
            return False
    return True

def des(arr):
    for i in range(1, 8):
        if arr[i] != arr[i-1]-1:
            return False
    return True

if __name__=='__main__':
    arr = list(map(int,input().split()))
    if acs(arr):
        print("ascending")
    else:
        if des(arr):
            print("descending")
        else:
            print("mixed")