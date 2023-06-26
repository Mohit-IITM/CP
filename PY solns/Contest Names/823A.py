t = int(input())
for i in range(t):
    l0= input().split()
    n = int(l0[0])
    c = int(l0[1])
    l= input().split()
    dct ={}
    cost=0
    rem = n
    for j in l:
        a=int(j)
        if j in dct:
            dct[j]+=1
        else:
            dct[j] = 1
    for k in dct:
        if dct[k]>=c:
            cost+=c
            rem = rem-dct[k]
    for m in range(rem):
        cost+=1
    print(cost)
    
