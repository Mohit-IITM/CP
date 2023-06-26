t=int(input())
for i in range(t):
    n=int(input())
    c=str(n)
    a=str(n//2)
    b=str(n-n//2)
    ans1=0
    ans2=0
    for j in a:
        ans1+=int(j)
    for j in b:
        ans2+=int(j)

    ind=len(c)-1
    for k in range(len(c)-1,-1,-1):
        if(c[k]!='9'):
            ind=len(c)-1-k
            break
    if(abs(ans1-ans2)<=1):
        print(n//2," ",n-n//2)
    else:
        if(ind%2==1):
            if(int(c[len(c)-1-ind])%2==1):
                print(n//2-9," ",n-n//2+9)
            else:
                print(n//2+5," ",n-n//2-5)
        else:
            if(int(c[len(c)-1-ind])%2==0):
                print(n//2-9," ",n-n//2+9)
            else:
                print(n//2+5," ",n-n//2-5)
        
