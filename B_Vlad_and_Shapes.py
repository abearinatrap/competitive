N = int(input())
for nnn in range(N):
    n = int(input())
    counts = {}
    for i in range(n):
        line = input()
        a = line.count("1")
        if a in counts.keys():
            counts[a]+=1
        else:
            counts[a]=1
    if len(counts)>2:
        print("TRIANGLE")
    else:
        print("SQUARE")
