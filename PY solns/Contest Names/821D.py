

t = int(input())
for i in range(t):
    l0 =input().split()
    n,x,y = int(l0[0]),int(l0[1]),int(l0[2])
    a = input()
    b = input()
    con = 0
    l=[]
    for j in range(n):
        if  a[j] != b[j]:
            l.append(j)
            con+=1
    if con == 0:
        print(0)
    elif con%2 == 1:
        print(-1)
    else:
        if con == 2:
            if l[1] - l[0] == 1:
                cost = min(2*y,x)
            else:
                cost = y
        else:
            cost = (con//2)*y
        print(cost)
        
                
            
