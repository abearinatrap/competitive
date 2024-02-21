n,m = map(int,input().split())
d = [f"T{i+1}" for i in range(n)]
#print(d)

for i in range(m):
    t1, t2 = input().split()
    if d.index(t1) > d.index(t2):
        d.remove(t2)
        d.insert(d.index(t1)+1,t2)

print(' '.join(d))

