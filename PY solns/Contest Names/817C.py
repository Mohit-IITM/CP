t= int(input())
for i in range(t):
    n= int(input())
    l1 = input().split()
    l2 = input().split()
    l3 = input().split()
    dct = {}
    tp,op,zp = {},{},{}
    p1,p2,p3 = 0,0,0
    for j in l1:
        if j in dct:
            dct[j] +=1
        else:
            dct[j] = 1
    for k in l2:
        if k in dct:
            dct[k] +=1
        else:
            dct[k] = 1
    for l in l3:
        if l in dct:
            dct[l] +=1
        else:
            dct[l] = 1
    for m in dct:
        if dct[m] == 1:
            tp[m] = 0
        elif dct[m] == 2:
            op[m] = 0
        else:
            zp[m] = 0
    for j1 in l1:
        if j1 in tp:
            p1 +=3
        if j1 in op:
            p1 +=1
        if j1 in zp:
            p1 +=0
    for j2 in l2:
        if j2 in tp:
            p2 +=3
        if j2 in op:
            p2 +=1
        if j2 in zp:
            p2 +=0
    for j3 in l3:
        if j3 in tp:
            p3 +=3
        if j3 in op:
            p3 +=1
        if j3 in zp:
            p3 +=0
    print(p1,p2,p3)


            
