t=int(input())
for q in range(t):
    n=int(input())
    l=input().split()
    dct={}
    pr,co=1,0
    for el in l:
        el=int(el)
        pr*=el
    a=pr&(~(pr-1))
    for i in range(1,n+1):
        nu=0
        coi=0
        nu+=i
        while nu%2==0:
            coi+=1
            nu=nu//2
        if coi in dct:
            dct[coi]+=1
        else:
            dct[coi]=1
        co+=coi
    c=2**co
    b=2**n
    #print(a,b,c,dct)
    if a>=b:
        print(0)
    elif c*a>=b:
        r=b//a
        res=0
        for ke in reversed(dct):
            if r<=1:
                break
            else:
                for g in range(dct[ke]):
                    r=r/2**ke
                    res+=1
                    #print(r,ke,g)
                    if r<=1:
                        break
        print(res)
    else:
        print(-1)
        
