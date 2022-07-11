n = int(input())
for i in range(0, n):
    str = input()
    str_list = list(str.split(" "))
    result = ""
    #print(str_list)
    for j in str_list:
        stack_list = list(j)
        stack_list_rev =[]
        while(1):
            if(len(stack_list)==0):
                break
            else:
                tmp = stack_list.pop()
                stack_list_rev.append(tmp)
        for s in stack_list_rev:
            result += s
        result += " "
    print(result)