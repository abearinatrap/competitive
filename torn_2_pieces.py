n = int(input())
graph = {}
visited = set()
q = []
previous = {}
for i in range(n):
    l = input().split()
    if l[0] not in graph:
        graph[l[0]] = set()
    for i in l[1:]:
        graph[l[0]].add(i)
        if i not in graph:
            graph[i] = set()
        graph[i].add(l[0])


l = input().split()
start = l[0]
end = l[1]

#print(graph)
q.append(start)

found = False
# bfs
while len(q) != 0:
    a = q[0]
    q.pop(0)
    visited.add(a)
    #print(a)
    if a not in graph:
        continue
    for n in graph[a]:
        #print(n,end="")
        if n in visited:
            continue
        previous[n] = a
        if n == end:
            # PRINT HERE
            path = [end]
            current = end
            while current != start:
                path.append(previous[current])
                current = previous[current]
            path.reverse()
            for i in range(len(path)-1):
                print(path[i], end=" ")
            print(path[-1])
            q = []
            found = True
            break
        q.append(n)

if not found:
    print("no route found")