t=int(input())
for q in range(t):
    l0=input().split()
    n,k=int(l0[0]),int(l0[1])
    L=input().split()
    l=[int(x) for x in L]
    n0,n1=0,0
    for i in l:
        if i==0:
            n0+=1
        elif i==1:
            n1+=1
    if n1==0:
        print("No")
    elif n0==0:
        print("Yes")
    else:
        if n0>=(n-n%k):
            
