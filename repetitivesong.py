import sys; input = sys.stdin.readline
n = int(input())
w = [input().strip() for _ in range(n)]
print(w)
h = {}; d = 1e9
print(d)
for i in range(n):
    if w[i] in h: d = min(d, i-h[w[i]])
    h[w[i]] = i
    print(i,w[i], d)
print(max(n-d, 0))