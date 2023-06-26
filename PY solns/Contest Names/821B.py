t = int(input())
for i in range(t):
    l0 = input().split()
    n,x,y = int(l0[0]),int(l0[1]),int(l0[2])
    if x == 0 and y!=0:
        if (n-1)%y == 0:
            for k in range((n-1)//y):
                for j in range(y):
                    print(2+k*y,end = " ")
            print(" ")
        else:
            print(-1)
    elif y == 0 and x!=0:
        if (n-1)%x == 0:
            for k in range((n-1)//x):
                for j in range(x):
                    print(2+k*x,end = " ")
            print(" ")
        else:
            print(-1)
    else:
        print(-1)
