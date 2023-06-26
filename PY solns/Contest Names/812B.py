t = int(input())
for i in range(t):
    n = int(input())
    l0 = input().split()
    l=[]
    maxv =0
    maxi = 0
    for v in range(n):
        temp = int(l0[v])
        l.append(temp)
        if temp>maxv:
            maxv = temp
            maxi = v
    l1 = l[:maxi]
    l2 = l[:maxi:-1]
    cond = True
    for j in range(1,len(l2)):
        if l2[j]<l2[j-1]:
            cond = False
            break
    for m in range(1,len(l1)):
        if l1[m]<l[m-1]:
            cond = False
            break
    if cond:
        print("YES")
    else:
        print("NO")
