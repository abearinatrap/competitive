a = input()
d = {}
total = 0 
penalty = 0 
while a != "-1":
    m,p,t = a.split()
    m = int(m)
    if t == "right":
        if p not in d or d[p]>0:
            total += 1
            penalty += m
            if p in d:
                penalty += 20 * d[p]
            d[p] = -1
    else:
        if p not in d:
            d[p] = 1
        else:
            d[p] += 1

        


    a = input()

print(total, penalty)