n, s = map(int, input().split())
sum = s
c = 0
for i in range(n):
    a = input()
    if a[-1]=="L":
        b = int(a[:-1]) + 1
    else:
        b = int(a)
    if b > sum:
        sum = s
        c += 1
    sum -= b
    
print(c)