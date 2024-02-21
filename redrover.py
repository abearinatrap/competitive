s = input()
N = len(s)
L = [0]
for w in range(2,N//2):
    mx = 0
    for r in set(s[i:i+w] for i in range(N-w)):
        c,i = 0,0
        while i <= N-w:
            if s[i:i+w] == r:
                c += 1
                i += w
            else:
                i += 1
        mx = max(mx,c)
    L.append(mx*(w-1)-w)
print(N-max(L))