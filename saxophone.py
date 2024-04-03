n = int(input())
finger = [0,0,0,0,0,0,0,0,0,0]

for i in range(2,5):
    finger[i-1]+=1

print(finger)

for _ in range(n):
    for c in input():
        if c == "c":
            for i in range(2,5):
                finger[i-1]+=1
            for i in range(7,11):
                finger[i-1]+=1
        elif c == "d":
            for i in range(2,5):
                finger[i-1]+=1
            for i in range(7,10):
                finger[i-1]+=1
        elif c == "e":
            for i in range(2,5):
                finger[i-1]+=1
            for i in range(7,9):
                finger[i-1]+=1
        elif c == "f":
            for i in range(2,5):
                finger[i-1]+=1
            finger[7-1]+=1
        elif c == "g":
            for i in range(2,5):
                finger[i-1]+=1
        elif c == "a":
            for i in range(2,4):
                finger[i-1]+=1
        elif c == "b":
            finger[2-1]+=1
        elif c == "C":
            finger[2]+=1
        elif c == "D":
            for i in range(1,5):
                finger[i-1]+=1
            for i in range(7,10):
                finger[i-1]+=1
        elif c == "E":
            for i in range(1,5):
                finger[i-1]+=1
            for i in range(7,9):
                finger[i-1]+=1
        elif c == "F":
            for i in range(1,5):
                finger[i-1]+=1
            finger[7-1]+=1
        elif c == "G":
            for i in range(1,5):
                finger[i-1]+=1
        elif c == "A":
            for i in range(1,4):
                finger[i-1]+=1
        elif c == "A":
            for i in range(1,3):
                finger[i-1]+=1
    
    finger = list(map(str, finger))
    print(' '.join(finger))
    finger = [0,0,0,0,0,0,0,0,0,0]