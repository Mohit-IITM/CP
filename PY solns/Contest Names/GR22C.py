t=int(input())
for i in range(t):
    n0=0
    n1=0
    n=int(input())
    l0=input().split()
    for k in l0:
        if int(k)%2==0:
            n0+=1
        else:
            n1+=1
    if n1%4==2 or (n1%4==1 and n0%2==0):
        print("Bob")
    else:
        print("Alice")
    
