l0=input().split()
l=input().split()
n,m = int(l0[0]),int(l0[1])
for j in range(m):
    l1 = input().split()
    l[int(l1[0])-1] = l1[1]
    r=0
    for k in range(n):
        for o in range(n):
            r+= len(set(l[k:o+1]))
    print(r)
