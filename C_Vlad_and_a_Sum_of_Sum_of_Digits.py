n = int(input())
output =0
for _ in range(n):
    a = list(map(int,input().split()))
    asum = sum(a)
    output += asum
print(output)