t=int(input())
for q in range(t):
    l0=input().split()
    se=[]
    so=[]
    ne,su=0,0
    no=0
    n,q = int(l0[0]),int(l0[1])
    l=input().split()
    for k in range(n):
        l[k]=int(l[k])
        if l[k]%2==0:
            ne+=1
        else:
            no+=1
        su+=l[k]
    for i in range(q):
        a=input().split()
        nm = int(a[1])
        if int(a[0])==0:
            su+=ne*nm
            if nm%2==1:
                no=ne+no
                ne=0
        else:
            su+=no*nm
            if nm%2==1:
                ne=no+ne
                no=0
        print(su)
    
    
