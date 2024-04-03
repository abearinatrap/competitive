t = int(input())
for _ in range(t):
    n = int(input())
    word = input()
    csum=0
    csum += word.count("map")
    csum += word.count("pie")
    csum -= word.count("mapie")
    
    
    print(csum)