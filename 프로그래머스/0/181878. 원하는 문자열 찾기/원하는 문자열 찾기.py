def solution(myString, pat):
    myString = myString.upper()
    answer = myString.find(pat.upper())
    if answer >= 0:
        answer = 1
    else:
        answer = 0
    return answer