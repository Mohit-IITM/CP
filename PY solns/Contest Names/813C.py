t =int(input())
for i in range(t):
    n=int(input())
    l0=input().split()
    l=[]
    uni = []
    rep=[]
    maxx = 0
    s=-1
    for y in l0:
        temp = int(y)
        if temp ==s:
            continue
        else:
            l.append(temp)
            s=temp
    for x in l:
        if x not in uni:
            uni.append(x)
        else:
            rep.append(x)
    l1 = l.copy()
    a=len(set(l))
    j = len(l1)-1
    l2 = []
    while j>0:
        if l1[j-1]<l1[j] and l1[j] not in rep:
            j-=1
            continue
        else:
            break

    print(len(set(l1[:j:])))
            
