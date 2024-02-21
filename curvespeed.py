import math
while True:
    try:
        r,s=input().split()
        r=int(r)
        s=float(s)
        v = math.sqrt((r*(s+.16))/0.067)
        v = round(v)
        print(v)
    except EOFError:
        break