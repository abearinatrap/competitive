b = []
for i in range(9):
    t = list(map(int,input().split()))
    b.append(t)

rows = []
cols = []
boxes = []
for i in range(9):
    a = [1,2,3,4,5,6,7,8,9]
    for j in range(9):
        if b[i][j]!=0:
            a.remove(b[i][j])
    rows.append(a)

print(rows)

for i in range(9):
    a = [1,2,3,4,5,6,7,8,9]
    for j in range(9):
        if b[j][i]!=0:
            a.remove(b[j][i])
    cols.append(a)

print(cols)

for i in range(9):
    bi = int(i/3)
    bj = int(i%3)
    a = [1,2,3,4,5,6,7,8,9]
    for j in range(bi*3,bi*3+3):
        for k in range(bj*3,bj*3+3):
            if b[j][k]!=0:
                a.remove(b[j][k])
    boxes.append(a)

print(boxes)

def lb(i,j):
    return int((i//3)*3+j/3)

print(lb(8,5))

move = True
while move:
    move = False
    for i in range(9):
        for j in range(9):
            if b[i][j] != 0:
                continue
            pass