n = int(input())
nums = list(map(int,input().split()))

i = 0
j = i + 1
iter =0
while j<len(nums) and iter< 100:
    if (nums[i]+nums[j])%2==0:
        del nums[i]
        del nums[i]
        j=i
        i -= 1
        if i<0:
            i=j
            j=i+1
    else:
        i+=1
        j+=1
    #print(i, j)
    #print(nums)
    iter +=1

print(len(nums))
    
    