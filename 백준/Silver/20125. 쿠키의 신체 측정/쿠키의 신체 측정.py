import sys
if __name__ == '__main__':
    n = int(sys.stdin.readline())
    arr = []
    head = False
    headin = [0, 0]
    for i in range(n):
        str_tmp = list(map(str,sys.stdin.readline()))
        arr.append(str_tmp)
        for j in range(n):
            if arr[i][j] == '*' and head == False:
                head = True
                headin[0] = i+2
                headin[1] = j+1
    

    left_arm, right_arm, wasit = 0, 0, 0
    left_leg, right_leg = 0, 0

    for i in range(n):
        if i+1 < headin[1] and arr[headin[0]-1][i] == '*':
            left_arm += 1
        if i+1 > headin[1] and arr[headin[0]-1][i] == '*':
            right_arm += 1
        if i+1 > headin[0] and arr[i][headin[1]-1] == '*':
            wasit+=1
        if i+1 > headin[0] and arr[i][headin[1]-1] == '_':
            if arr[i][headin[1]-2] == '*':
                left_leg+= 1
            if arr[i][headin[1]] == '*':
                right_leg += 1

    print(f'{headin[0]} {headin[1]}')
    print(f'{left_arm} {right_arm} {wasit} {left_leg} {right_leg}')