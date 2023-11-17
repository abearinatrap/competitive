a = input()
sums=[a.count("T"),a.count("G"),a.count("C")]
out =0
for i in range(3):
    out+= sums[i]**2
out += min(sums)*7
print(out)
