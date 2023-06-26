t = int(input())
for i in range(t):
    n0=input().split()
    n=int(n0[0])
    m=int(n0[1])
    if m==1 or n==1:
        print(n,m)
    elif m<4:
        if n<4:
            print(2,2)
        else:
            print(n,m)
    elif n<4:
        if m<4:
            print(2,2)
        else:
            print(n,m)
    else:
        print(n,m)
        

    
        
