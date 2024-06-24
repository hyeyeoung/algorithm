if __name__ == '__main__':
    n = int(input())
    score = []
    count = 0
    for i in range(n):
        score.append(int(input()))
    # 2 -> 1 
    for i in range(n-1, 0, -1): # i가 뒤에 있는 거
        for j in range(i-1, -1, -1): #J가 앞
            if score[i] <= score[j]:
                tmp = score[j] - score[i] + 1
                score[j] = score[j] - (score[j] - score[i] + 1)
                count = count + tmp                    
    print(count)