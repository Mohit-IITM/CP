import math
t=int(input())
for test in range(t):
    n=int(input())
    L=input().split()
    l=[int(x) for x in L]
    gci={}
    for i in range(n):
        gci[i]=math.gcd(l[i],i)
    print(gci)
    
