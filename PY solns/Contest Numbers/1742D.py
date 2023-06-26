import math
t=int(input())
for q in range(t):
    n=int(input())
    L=input().split()
    l=[int(x) for x in L]
    o=[-1]
    o1=[n-1]
    for i in range(n-1,0,-1):
        if l[i]==1:
            o.append(2*(i+1))
        for j in range(n-1,n-1-o1[-1],-1):
            if math.gcd(l[i],l[j])==1:
                o.append(i+j+2)
                o1.append(i)
                break
    print(max(o))
