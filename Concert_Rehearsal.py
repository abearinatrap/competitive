n, p, k = map(int,input().split())
#print(n,p,k)
days = [0] * n
#print(len(days))
for i in range(n):
    days[i] = int(input())
    if days[i]>p:
        impossible = True
        
tp = 0
dtd = 0
sh = 0
i = 0
while dtd < k:
    sh += days[i]
    if sh > p:
        sh = 0
        dtd += 1
    else:
        i += 1

    if i==n:
        tp += 1
        i = 0

print(tp)