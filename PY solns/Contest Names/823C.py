def mdx(e,l):
    for j in range(len(l)):
        if l[j] == e:
            dex = j
    return dex


t = int(input())
for i in range(t):
    cond = True
    s= input()
    n=len(s)
    l=[]
    dct={}
    for j in range(n):
        l.append(int(s[j]))
        if s[j] in dct:
            dct[s[j]]+=1
        else:
            dct[s[j]]=1
    l1 = set(l)
    dexs  = []
    for k in range(len(l1)):
        dexs.append(mdx(l1[k]))
    
    '''c0,c1,c2,c3,c4,c5,c6,c7,c8=0,0,0,0,0,0,0,0,0
    i0,i1,i2,i3,i4,i5,i6,i7,i8=0,0,0,0,0,0,0,0,0
    ia=[0]
    for j0 in range(n):
        if l[j0] =='0':
            c0+=1
            io=j0
    ia.append(i0)
    for j1 in range(i0,n):
        if l[j1]=='1':
            c1+=1
            i1 = j1
    ia.append(i1)
    for j2 in range(i1,n):
        if l[j2]=='2':
            c2+=1
            i2 = j2
    ia.append(i2)
    for j2 in range(i2,n):
        if l[j2]=='3':
            c3+=1
            i3 = j2
    ia.append(i3)
    for j2 in range(i3,n):
        if l[j2]=='4':
            c4+=1
            i4 = j2
    ia.append(i4)
    for j2 in range(i4,n):
        if l[j2]=='5':
            c5+=1
            i5 = j2
    ia.append(i5)
    for j2 in range(i5,n):
        if l[j2]=='6':
            c6+=1
            i6 = j2
    ia.append(i6)
    for j2 in range(i6,n):
        if l[j2]=='7':
            c7+=1
            i7 = j2
    ia.append(i7)
    for j2 in range(i7,n):
        if l[j2]=='8':
            c8+=1
            i8 = j2
    ia.append(i8)
    ia.append(-1)
    moi = int(min(l))
    for j3 in range(moi-1,7):
        if ia[j3+1]<ia[j3]:
            ia[j3+1]=-1
    #print(ia)
    j4 =1
    while(ia[j4] != -1):
        if ia[j4] != 0:
            for j5 in range(ia[j4-1],ia[j4]):
                if int(l[j5]) == j4-1:
                    pass
                elif int(l[j5]) != 9:
                    l[j5] = str(1+int(j5))
                else:
                    pass
        else:
            pass
        j4+=1
    l.sort()
    print(l)'''
    
    
    
