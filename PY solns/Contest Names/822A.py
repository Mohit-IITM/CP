t= int(input())
for i in range(t):
    n = int(input())
    dct ={}
    l=[]
    l0 = (input().split())
    for k in l0:
        l.append(int(k))
    l.sort()
    for j in range(n):
        a = int(l[j]) 
        if a in dct:
            dct[a]+=1
        else:
            dct[a] =1
    if max(dct.values()) == 3:
        print(0)
    elif max(dct.values()) ==2:
        twos = []
        for j in dct.keys():
            if dct[j] == 2:
                twos.append(j)
        mi = 100000001
        for k1 in twos:
            for k2 in dct.keys():
                if abs(k2-k1)<mi and k2 != k1:
                    mi = abs(k2-k1)
                    
        print(mi)
    else:
        mi1 = 100000001
        mi2 = 100000001
        for k1 in range(len(dct.keys())):
            for k2 in list(dct.keys())[k1:]:
                if abs(k2-list(dct.keys())[k1])<=mi1 and k2 != list(dct.keys())[k1]:
                    mi2 = mi1
                    mi1= abs(k2-list(dct.keys())[k1])
        print(mi1+mi2)
        
