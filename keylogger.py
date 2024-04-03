n = int(input())
cl = False
shift = False

l = {
    "clank": "A",
    "bong" : "B",
    "click": "C",
    "tap": "D",
    "poing" : "E",
    "clonk" : "F",
    "clack": "G",
    "ping": "H",
    "tip": "I",
    "cloing" : "J",
    "tic": "K",
    "cling":"L",
    "bing":"M",
    "pong":"N",
    "clang":"O",
    "pang":"P",
    "clong":"Q",
    "tac":"R",
    "boing":"S",
    "boink":"T",
    "cloink":"U",
    "rattle":"V",
    "clock":"W",
    "toc":"X",
    "clink":"Y",
    "tuc":"Z",
    "whack":" "
}

other = {
    "bump": "capslock",
    "pop" : "delete",
    "dink": "shift_down",
    "thumb":"shift_up"
}

output = ""

for _ in range(n):
    a = input()
    if a in other:
        if other[a] == "capslock":
            cl = not cl
        elif other[a] == "delete":
            if len(output)>1:
                output = output[:len(output)-1]
        elif other[a] =="shift_down":
            shift = True
        else:
            shift = False
    else:
        upper = shift ^ cl
        #print(upper)
        if upper:
            output = output + l[a].upper()
        else:
            output = output + l[a].lower()

print(output)
                

    