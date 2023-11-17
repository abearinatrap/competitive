numbers = input().split()
nums = list(map(int,int().split(" ")))

numbers = [3,2,1,4]
sorted_numbers = numbers.sort()
print(sorted_numbers)

n = int(input())
for i in range(n):
    command = input()
    a = int(input())
    numstring = input()
    if a != 0:
        nums = list(map(int,numstring[1:-1].split(",")))
    else:
        nums = []
    
    direction = True
    err = False

    left = 0
    right = len(nums) - 1
    for i in command:
        if i == "R":
            direction = not direction
        else:
            if len(nums)==0:
                print("error")
                err = True
                break
            if direction:
                nums.pop(0)
            else:
                nums.pop(-1)
    if err:
        continue
    print("[",sep="",end="")
    if len(nums)==1:
        print(nums[0],end="")
    elif len(nums)==0:
        print("]",sep="")
        continue
    else:
        numl=len(nums)
        for i in range(numl-1):
            if not direction:
                ar = -1 -i
            else:
                ar = i
            print(str(nums[ar])+",",sep="",end="")
    if direction:
        print(nums[-1],end="")
    else:
        print(nums[0],end="")
    print("]",sep="")

