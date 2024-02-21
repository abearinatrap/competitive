N=int(input())
for _ in range(N):
    n,k = map(int,input().split())
    if k==1:
        print("YES")
        continue
    k -= 2
    nums = list(map(int,input().split()))
    first = nums[0]
    nums = nums[1:]
    tn = list(map(int,input().split()))
    l=0
    for i in range(1,n):
        a = tn[i]
        if a == first:
            nums.insert(first,i)
        elif a != nums[i+l] and nums[i+l]==tn[0]:
            l=1
            
    for i in range(k):
        l = 0 
        tn = list(map(int,input().split()))
