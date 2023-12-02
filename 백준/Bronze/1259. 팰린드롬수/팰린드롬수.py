def sol(str_input):
    i = 0
    j = len(str_input) - 1
    while (i < j) :
        if str_input[i] != str_input[j]:
            return False
        i+=1
        j-=1
    return True




if __name__ == "__main__":
    while (1):
        str_input = input()
        if str_input == "0":
            break
        if sol(str_input):
            print("yes")
        else:
            print("no")