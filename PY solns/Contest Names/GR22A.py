t =int(input())
for q in range(t):
    n=int(input())
    lfr,lfi=[],[]
    l1= input().split()
    l2 =input().split()
    dmg=0
    for j in range(n):
        if l1[j] =='1':
            lfr.append(int(l2[j]))
        else:
            lfi.append(int(l2[j]))
    if len(lfi) == 0:
        for k in lfr:
            dmg+=k
    elif len(lfr)==0:
        for k in lfi:
            dmg+=k
    else:
        lfi.sort()
        lfr.sort()
        if len(lfi) == len(lfr):
            ld1 = min(lfi)
            ld2 = min(lfr)
            if ld1>ld2:
                dmg-=ld2
                for k in range(int(n/2)):
                    dmg+=2*(lfi[k]+lfr[k])
            else:
                dmg-=ld1
                for k in range(int(n/2)):
                    dmg+=2*(lfi[k]+lfr[k])
        else:
            a=len(lfr)
            b=len(lfi)
            if b>a:
                for k1 in range(b-a):
                    dmg+=lfi[k1]
                for k2 in range(a):
                    dmg+=2*(lfr[k2]+lfi[b-a+k2])
            else:
                for k1 in range(a-b):
                    dmg+=lfr[k1]
                for k2 in range(b):
                    dmg+=2*(lfi[k2]+lfr[a-b+k2])
    print(dmg)
                       
                       
        

                       
