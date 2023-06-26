t=int(input())
for q in range(t):
    l=input().split()
    n,c=int(l[0]),l[1]
    s=input()
    s1=s+s
    lc=[]
    lg=[]
    lg1,lg2=[],[]
    if c=='g':
        print(0)
    else:
        for i in range(n):
            if s[i]=='g':
                lg.append(i)
            elif s[i]==c:
                lc.append(i)
        lg.append(n+lg[0])
        for j in lc:
            for k in lg:
                if k>j:
                    lg1.append(k-j)
                    break
        print(max(lg1))
