if __name__=='__main__':
    S = input().split(" ")
    re = []
    ok = False

    for s in range(len(S)):
        full, tmp, st ='', '',''
        for i in range(len(S[s])):
            if S[s][i] == '<':
                ok = True
                full += st
                st = ''
            if ok == True:
                full += S[s][i]
            else:
                st = S[s][i] + st            
            if S[s][i] == '>':
                ok = False
        full += st
        S[s] = full
    
    for i in range(len(S)): print(S[i], end=' ')
