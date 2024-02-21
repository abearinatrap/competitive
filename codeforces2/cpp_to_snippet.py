out = []
with open("template.cpp") as f:
    a = f.readlines()
    for line in a:
        line.replace('\\','\\\\')
        line.replace('"','\\"')
        print(f'"{line[:-1]}",')