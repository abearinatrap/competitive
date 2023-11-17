n = int(input())
for i in range(n):
    line = input()
    command = line[:10]
    if command == "Simon says":
        print(line[10:])
    