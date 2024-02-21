n = int(input())
for i in range(n):
    l=input().upper()
    a = l.count('A')
    b = l.count('B')
    if b>a:
        print("B")
    else:  
        print("A")