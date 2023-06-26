t=int(input())
for z in range(t):
    l0=input().split()
    n,k=int(l0[0]),int(l0[1])
    l=input().split()
    l1=[]
    if k==1:
        print("Yes")
    else:
        for i in range(k-1):
            l1.append(int(l[i+1])-int(l[i]))
        if sorted(l1) == l1:
            if int(l[0])/(n-k+1) >l1[0]:
                print("No")
            else:
                print("Yes")
        else:
            print("No")
