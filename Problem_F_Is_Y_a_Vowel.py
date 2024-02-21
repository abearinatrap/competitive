s= input()
vowels = ['a','e','i','o','u']
numv=0
numy=0
for c in s:
    if c in vowels:
        numv += 1
    if c == 'y':
        numy += 1

print(f"{numv} {numv+numy}")