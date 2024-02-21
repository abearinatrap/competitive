import re

with open("adin.txt") as f:
    lines = f.readlines()
    sum = 0
    for line in lines:
        #print(line)
        match = re.search(r'\d', line)
        num = match.group()
        matches = re.findall(r'\d', line)
        num += matches[-1]
        sum += int(num)

print(sum)
