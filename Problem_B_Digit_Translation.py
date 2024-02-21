s = input()
tl = len(s)
ts = 0
sums = 1

def remove_ind(s,start,end):
    return s[:start] + s[end+1:]

removes = []
si = 0
while si < tl:
    a = s.find("eight", si)
    if a == -1:
        break
    total = 1
    tg = True
    si = a
    left = si - 4
    right = si + 4
    #sprint(left,right)
    while left >= 0:
        print(left, left + 5)
        if s.find("three" if tg else "eight", left, left+5) != -1:
            print(f'found at {s.find("three" if tg else "eight", left, left+5)}')
            total += 1
            left -= 4
            tg = not tg
        else:
            break
        
    tg = True
    while right < tl:
        if s.find("three" if tg else "eight", right, right+5) != -1:
            print(f'found at {s.find("three" if tg else "eight", right, right+5)}')
            total += 1
            right += 4
            tg = not tg
        else:
            break
    #print("end",left,right)
        
    si = right
    if total > 1:
        removes.append([left+4,right])
        if total%2 == 0:
            sums *= 2
            ts += 4 * (total//2)
        else:
            ts += 4 * (total//2+1)
    print(total,ts,tl)

for r in removes:
    s = remove_ind(s,r[0],r[1])
    print(s)

s = s.replace("twone", "&")
a = s.count("&")
for i in range(a):
    sums *= 2
    sums = sums % 9302023
ts += 2 * a

chars = ["{","}","[","]",";",":","<",">","(",")"]
numbers = ["three","eight","seven","zero","nine","four", "five","one", "two", "six"]
for i in range(len(numbers)):
    #print(s)
    s = s.replace(numbers[i], chars[i])
    #print(s)
    a = s.count(chars[i])
    ts += (len(numbers[i])-1) * a

#print(f"tl{tl} ts{ts}")
print (tl-ts)
print (sums%9302023)