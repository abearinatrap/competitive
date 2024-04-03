n = int(input())
a = input().split()
possible = False
for i in range(n-1):
    if possible:
        break
    if a[i]==a[i+1]:
        l = len(a[i])
        if a[i] != "9"*l:
            # we change one letter here and print
            chars = [c for c in a[i]]
            #print(chars)
            for j in range(l):
                if chars[j]!="9":
                    chars[j]="9"
                    a[i] = ''.join(chars)
                    possible = True
                    break
    elif len(a[i]) == len(a[i+1]):
        if a[i+1] != "9"*len(a[i+1]):
            if int(a[i+1][0])==9:
                chars = [c for c in a[i+1]]
                chars[0] = "1"
                a[i+1] = ''.join(chars)
                possible = True
                break
            else:
                a[i] = "9"+a[i+1][1:]
                possible = True
                break
                

if possible:
    print(' '.join(a))
else:
    print("impossible")