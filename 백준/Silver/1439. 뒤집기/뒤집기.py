if __name__ =='__main__':
    nums = list(map(int,input()))
    # 0 -> 1,, 1 -> 0
    cnt_0, cnt_1, i = 0, 0, 0
    zero, one = False, False
    while i < len(nums):
        if nums[i] != 0 and one == False:
            one = True
            cnt_0 += 1
        if nums[i] != 1 and zero == False:
            zero = True
            cnt_1 += 1
        
        if one == True and nums[i] == 0:
            one = False
        if zero == True and nums[i] == 1:
            zero = False
        i +=1
    print(min(cnt_0,cnt_1))
        
        
