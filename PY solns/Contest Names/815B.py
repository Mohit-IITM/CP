t = int(input())
for i in range(t):
    n = int(input())
    l = input().split()
    ln=[]
    for j in l:
        ln.append(int(j))
    ln.sort()
    print(ln[n-1]+ln[n-2]-ln[0]-ln[1])
