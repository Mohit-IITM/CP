t=int(input())
for q in range(t):
    l=input().split()
    n,m=int(l[0]),int(l[1])
    s=""
    if m<n:
        print("NO")
    else:
        if m%n==0:
            print("Yes")
            for i in range(n):
                s+=str(m//n)+" "
            print(s)
        elif n%2 == 0 and (m%n)%2==0:
            print("Yes")
            for i in range(2):
                s+=str(m//n+(m%n)//2)+" "
            for j in range(n-2):
                s+=str(m//n)+" "
            print(s)
        elif n%2==1:
            print("Yes")
            s+=str(m//n+m%n)+" "
            for i in range(n-1):
                s+=str(m//n)+" "
            print(s)
        else:
            print("NO")
            
