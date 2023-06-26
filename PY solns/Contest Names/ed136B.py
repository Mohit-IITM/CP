t= int(input())
for i in range(t):
    n=int(input())
    l=input().split()
    cond  = 1
    b = int(l[0])
    l1=[b]
    for j in range(n-1):
        a1=int(l[j])
        a2=int(l[j+1])
        if a2 == 0:
             l1.append(l1[j])
        elif a2 >l1[j]:
            l1.append(l1[j]+a2)
        else:
            cond = -1
            break
    if cond == -1:
        print(-1)
    else:
        for k in l1:
            print(k,end = " ")
        print(" ")
    
