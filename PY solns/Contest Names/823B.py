t=int(input())
for i in range(t):
    n=int(input())
    l1= input().split()
    l2 =input().split()
    dct={}
    l3={}
    l4={}
    for j in range(n):
        pl=int(l1[j])
        ti=int(l2[j]) 
        if ti not in dct:
            dct[ti] = [[pl],pl]
        else:
            dct[ti][0].append(pl)
            dct[ti][1]+=pl
    for k in dct:
        dct[k][1] = (dct[k][1])/len(dct[k][0])
    for k1 in dct:
        a = k1+max(abs(dct[k1][0][0]-dct[k1][1]),abs(dct[k1][0][-1]-dct[k1][1]))
        l3[dct[k1][1]]=a
        l4[k1]={}
        for k2 in dct:
            b = k2+max(abs(dct[k2][0][0]-dct[k1][1]),abs(dct[k2][0][-1]-dct[k1][1]))
            l4[k1][k2] = b
    print(l4)
    
